//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
 #include <iomanip>

using namespace std;
template <typename T>
class My{
public:


	My(T d):data(d){}
	 void Mes()
	{

		cout<< data<<endl;
	}



	private:
	T data;

};



int main()
{
string Mname[] = {"Alexander", "Dmitry", "Evgeny", "Ivan", "Kirill", "Maxim", "Nikolay", "Pavel", "Sergey", "Vladimir"};
My<int> mil(11);
mil.Mes();


My<string>stt("www");
stt.Mes();


int arr=sizeof(Mname)/sizeof(Mname[0]);
for(int i=0; i<arr; i++)
	cout<<Mname[i]<<endl;

return 0;
}


//--------------
/*string *str = &Mname[0];
int arr=sizeof(Mname)/sizeof(Mname[0]);
for(int i=0; i<arr; i++)
{
cout<<*str<<endl;
str++;
}
//--------------



	int array[] = {1, 2, 3, 4, 5};
int sizearr=sizeof(Mname)/sizeof(Mname[0]);
	string *b, *a, str;
a=&Mname[0];
b = &Mname[1];
int* ptr = array;  // Инициализируем указатель ptr на начало массива
string* st = Mname;
//st++;
   ptr++;  // Смещаем указатель на один элемент
////str = b+1; закончил тут
   std::cout <<"compiler version: " << __cplusplus << std::endl;
cout<< Mname[0]<<endl;
cout<<"a="<<a<<" b=" << b<<endl;
cout<<"str="<<str<<endl;
cout<<"ptr="<<*ptr<<"  "<<"*prt="<<ptr<<endl;
ptr++;
cout<<"ptr="<<*ptr<<"  "<<"*prt="<<ptr<<endl;
//cout<<"st="<<st<<" "<<"*st="<<*st<<endl;
//st++;
//cout<<"st="<<st<<" "<<"*st="<<*st<<endl;
cout<<"size of Mname "<< sizeof(Mname)<<endl;
for(int i=0; i<sizearr;i++)
{
	cout<<"st="<<*st<<" "<<"*st="<<st<<" "<<"sizeof(Mname["<<i<<"]) "<<sizeof(Mname[i])<<endl;
	st++;

}//*/

