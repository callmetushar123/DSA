#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k < 5; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    for (int i = 5; i > 0; i--)
    {
        for (int k = i; k < 5; k++)
        {
            cout<<" ";
        }

        for (int j = 0; j < 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}