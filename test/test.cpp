/*
 * test.cpp
 *
 *  Created on: 5 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
#include "list.h"

//#include <fstream>
using namespace std;
void pop(){
mprint();
}
int main()
{
pop();
	/*
	//найти
	int f=78;
int	n;
	int mas[]={41,34,74,24,78,58,62,64,33,28,72,97,51,5,45,81,27,61,95,42,36,91,4,2,53,92,82,21,16,18,47,26,71,38,69,12,67,99};
n=sizeof(mas)/sizeof(mas[0]);
//сделать пузырьковый сорт и найти позицию часла f
for(int i=0; i<n-1; i++)
{
for(int j=0; j<n-i-1; j++)
{
	if(mas[j]>mas[j+1])
	{
int temp=mas[j];
mas[j]=mas[j+1];
mas[j+1]=temp;
	}
}
}

for(int t=0; t<n; t++)
	cout<< mas[t]<<" ";




/*
int t;
for(int i=0; i<41; i++)
	cout<<rand()%100<<",";*/
	return 0;
}







