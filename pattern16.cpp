#include<iostream>
using namespace std;

int main()
{
    int k=8;
    for (int i = 1; i <= 9; i++)
    {
        if (i<=5)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<"*";
            }
            for (int j = 1; j <=k; j++)
            {
                cout<<" ";
            }
            for (int j = 1; j <=i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            k-=2;
        }
        else
        {
            if (k<0)
            {
                k=0;
            }
            
            k+=2;

            for (int j = 1; j <= 10-i; j++)
            {
                cout<<"*";
            }
            for (int j = 1; j <=k; j++)
            {
                cout<<" ";
            }
            for (int j = 1; j <= 10-i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            //k+=2;
        }
        
        
    }
    
}