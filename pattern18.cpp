#include<iostream>
using namespace std;

int main()
{
    int k=4, m=4;
    int count =5;
    for(int i=1; i<=7; i++)
    {

        if (i==1 || i==7)
        {
            for (int j = 1; j <=7; j++)
            {
                cout<<k;
            }
            
            cout<<endl;
        }
        
        else if (i>=2 && i<=4)
        {
            for (int j = 1; j <i; j++)
            {
                cout<<k;
                k--;
            }
            for (int j = 1; j <=count; j++)
            {
                cout<<k;
            }
            count= count-2;
            for (int j = 1; j < i; j++)
            {
                k++;
                cout<<k;
            }
            cout<<endl;
            
           
        }
        else if(i>=5 && i<=6)
        {
            count+=2;
            for (int j = i; j <=7; j++)
            {
                cout<<k--;
            }
            for (int j = 1; j <= count; j++)
            {
                cout<<k;
            }
            for (int j = i; j <=7; j++)
            {
                k++;
                cout<<k;
            }
            
            cout<<endl;
            
        }
        
    
    }

}