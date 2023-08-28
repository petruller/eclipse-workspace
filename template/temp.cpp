/*
 * temp.cpp
 *
 *  Created on: 28 авг. 2023 г.
 *      Author: Use
 *      дэйтел 888 стр
 */
#include <iostream>
 using namespace std;

 template <typename T>
 void printArray(const T *array, int count)
 {
	 for(int i=1; i<=count; i++)
	 { if (i%2  !=0)
		 cout<< array[i-1]<<" ";
	 	 else
	 	cout<< array[i-1]<<endl;
	 }
	 cout<<endl;

 }

int main()
{
const int aCount = 5;
const int bCount = 7;
const int cCount = 5;

int a[aCount] = {1,2,3,4,5};
double b[bCount] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
char c[cCount] = {'H','e','l','l','o'};

cout << "Array a contians:"<<endl;

printArray(a,aCount);

cout << "Array b contians:"<<endl;

printArray(b,bCount);

cout << "Array c contians:"<<endl;

printArray(c,cCount);
return 0;
}
