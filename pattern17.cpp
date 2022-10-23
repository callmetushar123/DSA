#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=4; i++)
    {
        if(i==1 || i==4)
        {
            for (int j = 1; j < 5; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
       
       else
       {
            for (int j = 1; j <=4; j++)
            {
                if (j==2 || j==3)
                {
                    cout<<" ";
                    continue;
                }
                
                cout<<"*";
            }
            cout<<endl;
       }
        
    }
    
}
