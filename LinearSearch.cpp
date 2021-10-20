#include<iostream>
using namespace std;

    void lnr_srch(int a[] ,int n)
    {
        bool temp = true;
        
        for(int i=0;i<5;i++)
        {
            if(a[i]==n) 
            {
                cout<<"Value Found at position : "<<i+1;
                temp = false;
                break;
            }  
            
        }
        if(temp == true)
            cout<<"Value Not Listed :(\n ";

    }
     int main()
   {
       int a[5];
       cout<<"Enter five Element";
       for(int i=0;i<5;i++)
       {
           cin>>a[i];
       }
       int srch_elmt;
       cout<<"Enter The Element You Want To Search ?\n";
       cin>>srch_elmt;
       lnr_srch(a,srch_elmt);
       return 0;
   }
