/*
 * mounting.cpp
 *
 *  Created on: 15 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

int main()
{ string S="abcdefghlijklmnopqrstuvwxyz}";
int a,b;
for(int i=0; i<=14; i++)
{
    if (i==0)
    {cout<<setw(15)<<S[0]<<endl;}
    else
    {a=b=i;

       cout<<setw(15-i);
                while(b!=0)
        {
        cout<<S[b];
        b--;
        }
        while(b!=a+1)
        {
        cout<<S[b];
        b++;
        }


       // cout<<S[b];

    cout<<endl;
    }


}
    cout<<"Hello World";

    return 0;
}


