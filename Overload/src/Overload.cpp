//============================================================================
// Name        : Overload.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class IP
{
public:
	IP(int a1, int b1, int c1, int d1) : a(a1), b(b1),c(c1), d(d1)
{}

    IP operator+(const IP& other) const {
    return IP(a + other.a, b + other.b, c + other.c, d + other.d);
    }

    friend ostream& operator<<(ostream& os, const IP& c)
    {
   os<<c.a <<"."<<c.b<<"."<<c.c<<"."<<c.d;
   return os;

    }

private:
int a,b,c,d;
};
int main() {
	IP ip1(127,0,0,1);
	IP ip2(32,122,255,200);

	IP ip3 = ip1+ip2;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout<<"ip1 = "<<ip1<<endl;
	cout<<"ip2 = "<<ip2<<endl;
	cout<<"ip3 = "<<ip3<<endl;
	return 0;
}
