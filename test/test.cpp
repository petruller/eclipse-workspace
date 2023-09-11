/*
 * test.cpp
 *
 *  Created on: 5 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
#include <fstream>
using namespace std;




int main()
{
	ifstream file("my.txt", ios::in);
	if(!file)
	{
		cerr<<"errorka";
		exit(1);
	}
int a; string b,c;

while(file>>a>>b>>c)
	cout<<a<<" "<<c<<" "<<b<<endl;
/*
b="Hello";
c="c++";
	for(int i=0; i<20; i++)
	{
		file<<i<<" "<<b<<" "<<c<<endl;

	}
	file.close();
//Mes(11);
//Mes("Hello");
*/
	return 0;
}













/*
template <typename T>
void Mes(T msn)
{
	for(int i=0; i<11; i++)
cout<<	msn<<' ';

	cout<<endl;
}
*/
