#include<iostream>
using namespace std;

int main()
{
    int even =6;
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        
        for (int k = 1; k <=even; k++)
        {
            cout<<" ";
        }
        even-=2;

        for (int j = i; j > 0; j--){
            cout<<j;
        }
        cout<<endl;
    } 
    return 0; 
    
}
       
