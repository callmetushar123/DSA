#include<iostream>
using namespace std;

int main(){

        for(int i=1; i<=9; i++)
        {
            if (i>=6)
            {
                for (int j = i; j <= 9; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
                continue;
            }
            
            for (int j = 1; j <= i; j++)
            {
                cout<<"*";
            }
                cout<<endl;
        }

    return 0;
}