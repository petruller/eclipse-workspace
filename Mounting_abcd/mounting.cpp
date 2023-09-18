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
{
string S="abcdefghijklmnopqrstuvwxyz}";
int a,f;
 for(int i=0; i<14; i++)
 {
    if (i==0)
    cout<<setw(15)<<S[0]<<endl;
    else
    {a=i; f=0;
    cout<<setw(15-i);

       while(f!=i+1)
        {
        cout<<S[a];
        a++;
        f++;
        }
       while(a!=i+1)
        {
        cout<<S[a-2];
        a--;
        }

    cout<<endl;
    }//else
}///for

    return 0;
}


