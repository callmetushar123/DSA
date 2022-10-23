#include<iostream>
using namespace std;

int main()
{
    char k='F';
    for (int i = 1; i <=5; i++)
    {
        k-=i;
        for (int j = 1; j <=i; j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    
}