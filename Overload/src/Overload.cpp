//============================================================================
// Name        : Overload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class IP
{
public:
	IP(int a1, int b1, int c1, int d1) : a(a1), b(b1),c(c1), d(d1)
{}

    IP operator+(const IP& other) const {
    int a2,b2,c2,d2;
    a2=a + other.a;
    if(a2>255)
    a2=255;

    b2=b + other.b;

    c2= c + other.c;
    if(c2>255)
    c2=255;

    d2= d + other.d;
     if(d2>255)
    d2=255;


    return IP(a2,b2 ,c2,d2);
    }

    friend ostream& operator<<(ostream& os, const IP& c)//учить
    {
   os<<c.a <<"."<<c.b<<"."<<c.c<<"."<<c.d;
   return os;

    }

private:
int a,b,c,d;
};
int main() {
	srand(time(0));
	IP ip1(120,0,0,0);
	IP ipq1(127,0,254,1);
	IP ipq2(32,122,65,200);

	IP ipq3 = ipq1+ipq2;

	cout << "Random IP`s" << endl; // prints !!!Hello World!!!
	for(int i=1; i<=30;i++)
	{
		ip1 = IP (rand()%255, rand()%255, rand()%255, rand()%255);

		//ip1 =IP (2,3,4,4);
		cout<<"ip"<<i<<" = "<<ip1<<endl;
	}
	cout<<"ipq1 = "<<ipq1<<endl;
	cout<<"ipq2 = "<<ipq2<<endl;
	cout<<"ipq3 = "<<ipq3<<endl;
	return 0;
}
