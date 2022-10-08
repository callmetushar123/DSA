#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout<<" ";
        }
        
        char k= 'A';
        
        for (int j = 1; j <= i; j++)
        {
            cout<<k;
            k++;
           
        }
        k--;
        for (int j = 1; j<= i-1; j++)
        {
            --k;
            cout<<k;
        }
        
        
        cout<<endl;
        
    }
    
}