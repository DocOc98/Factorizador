#include<iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>
using  namespace std;
int main()
{
    int num;
    cout<<"Escriba numero a factorizar: ";
    cin>>num;
    system("CLS");
    cout<<"Factorizacion"<<endl;
    while(num!=0)
    {
        if((num%2)==0)
        {
            cout<<num<<"   /   2"<<endl;
            num/=2;
        }
        else if((num%3)==0)
        {
            cout<<num<<"   /   3"<<endl;
            num/=3;
        }
        else if((num%5)==0)
        {
            cout<<num<<"   /   5"<<endl;
            num/=5;
        }
        else if((num%7)==0)
        {
            cout<<num<<"   /   7"<<endl;
            num/=7;
        }
        else if(num==1)
        {
           break;
        }
    }
    cout<<"1   /   "<<endl<<endl;
    system("Pause");
    return 0;
}
