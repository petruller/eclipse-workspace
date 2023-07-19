/*
 * main.cpp
 *
 *  Created on: 13 июл. 2023 г.
 *      Author: User
*/
 #include <iomanip> //time
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
int insert;
 srand( time(0));
 const int arraySize =20; // размер массива а
int a[ arraySize ];// = {56, 360, 327, 350, 815, 177, 518, 907, 130, 188, 896, 553, 764, 1, 640, 409, 142, 751, 954, 218}; // инициализация массива

cout<<"Source Array:"<<endl;
for (int t=0; t<=arraySize; t++)
{
 a[t]= rand() % 1000 + 1;
}
for(int i=0; i<arraySize; i++)
{
cout<< a[i] << " ";
}
cout<<endl<<endl<<"Sort Array:"<<endl;

		// сортировка вставкой
		 // цикл по элементам массива
		 for ( int next = 1; next < arraySize; next++ )
		 {
		 insert = a[ next ]; // сохранить значение текущего элемента

		 int moveItem = next; // инициализировать позицию для вставки

		 // найти позицию для размещения текущего элемента
		 while ( ( moveItem > 0 ) && ( a[ moveItem - 1 ] > insert ) )
		 {
		 // сдвинуть элемент на одну ячейку вправо
		 a[ moveItem ] = a[ moveItem - 1 ] ;
		 moveItem--;
		 } // конец while

		 a[ moveItem ] = insert; // вставить текущий элемент в массив
		 } // конец for


		 for(int i=0; i<arraySize; i++)
		 {
		 cout<< a[i] << " ";
		 }




return 0;
 }


