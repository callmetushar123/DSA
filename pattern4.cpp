#include<iostream>
using namespace std;

int main()
{
    for(int i =5; i>=1; i--)
    {
        for (int k = i; k <5 ; k++)
        {
            cout<<" ";
        }
        
        for(int j=2*i-1; j>=1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}