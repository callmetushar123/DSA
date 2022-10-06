#include<iostream>
using namespace std;

int main()
{
    int k=0; // for printing binary strings
    for (int i = 1; i <=5; i++)
    {
        if(i%2==0) // for even length strings
        {
            for (int j = 0; j < i; j++)// length must be same as the loop number
            {
                if(k==0)
                {
                    cout<<k;
                    k=1;
                }
                else 
                {
                    cout<<k;
                    k=0;
                }
            
            }
            
            cout<<endl;
        }
        else
        {
            k=1;
            for (int j = 0; j < i; j++)
            {
                if(k==1)
                {
                    cout<<k;
                    k=0;
                }
                else 
                {
                    cout<<k;
                    k=1;
                }
            
            }
            
            cout<<endl;
        }
    }


    
}
