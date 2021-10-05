#include<iostream>

#include<cstring> //string library

#include <algorithm> 

using namespace std;

int main()

{

int number,remainder;

cin>>number;

string s1=to_string(number);

string s2=s1;

reverse(s2.begin(), s2.end());

if(s1==s2)

cout<<"palindrome";

else

cout<<"not a palindrome";

return 0;

}
