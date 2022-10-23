#include<iostream>
using namespace std;

int main()
{
    int k=8;
    for (int i = 0; i <= 10; i++)
    {


        if (i<5)
        {
            for ( int j = 1; j <= 5-i; j++)
            {
                cout<<"*";
            }
            for (int j = 0; j <2*i; j++)
            {
                cout<<" ";
            }
            for (int j = 1; j <=5-i; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        if (i>5)
        {
            
            for (int j = 1; j <= i-5; j++)
            {
                cout<<"*";
            }
            for (int j = 1; j <=k; j++)
            {
                cout<<" ";
            }
            for (int j = 1; j <= i-5; j++)
            {
                cout<<"*";
            }
            k-=2;
            cout<<endl;
        }
        
       
        
    }
    
}