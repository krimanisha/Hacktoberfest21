using namespace std;
#include<iostream>
#include<stack>

int prec(char c){
    if(c == '^')
        return 3;
    else if( c== '*' || c == '/')
        return 2;
    else if( c== '+' || c=='-')
        return 1;
    else{
        return -1;
    }
}

string postfix(string str){
    string result="";
    stack<char> S;
    for(int i=0;i<str.length();i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')){
            result+=str[i];
        }

        else if(str[i]=='(')
            S.push(str[i]);

        else if(str[i]==')'){
            while(S.top()!='('){
                result +=S.top();
                S.pop();
            }
            S.pop();
        }
        else{
            if(S.empty())
                S.push(str[i]);
            else if(prec(str[i])>prec(S.top())){
                S.push(str[i]);
            }
            else{
                while(!S.empty() && (prec(str[i])<=prec(S.top()))){
                    result+=S.top();
                    S.pop();
                }
                S.push(str[i]);
            }
        }
    }
    while(!S.empty()){
        result+=S.top();
        S.pop();
    }
    return result;
}

int main(){
    string str;
    cout<<"enter the infix expression: ";
    cin>>str;
    cout<<"the postfix expression of the given infix expression is :"<< postfix(str);
    return 0;
}
