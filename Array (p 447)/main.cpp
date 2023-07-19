

#include <iostream>
using namespace std;


 #include <iomanip>

 void modifyArray( int [], int ); // выглядит странно
 void modifyElement( int [], int );

 int main()
 {
	 srand( time(0));
 const int arraySize =20; // размер массива а
int a[ arraySize ] = { 0, 1, 2, 3, 4 }; // инициализация массива
for (int t=0; t<=arraySize; t++)
{
 a[t]= rand() % 1000 + 1;
}

cout << "Effects of passing entire array by reference:"
 << "\n\nThe values of the original array are:\n";

 // вывести элементы исходного массива
 for ( int i = 0; i < arraySize; i++ )
 cout << setw(5) << a[ i ];

 cout << endl;

 // передать массив а в modifyArray по ссылке
 modifyArray( a, arraySize );
 cout << "The values of the modified array are:\n";

 // вывести элементы модифицированного массива
 for ( int j = 0; j < arraySize; j++ )
 cout << setw(5) << a[ j ];

 cout << "\n\n\nEffects of passing array element by value:"
 << "\n\na[3] before modifyElement: " << a[ 3 ] << endl;

 modifyElement( a, 3 ); // передать элемент а[ 3 ] по значению
 cout << "a[3] after modifyElement: " << a[ 3 ] << endl;

 cout << "modified array 3:\n";

  // вывести элементы модифицированного массива
  for ( int j = 0; j < arraySize; j++ )
  cout << setw(5) << a[ j ];


 return 0; // успешное завершение
 } // конец main

 //в modifyArray "b" указывает в памяти на исходный массив "а"
 void modifyArray( int b[], int sizeOfArray )
 {
 // умножить каждый элемент массива на 2
 for ( int k = 0; k < sizeOfArray; k++ )
 b[k] *= 2;
 } // конец функции modifyArray

 //в функции modifyElement "e" является локальной копией
 // элемента массива а[ 3 ], переданного из main
 void modifyElement( int b[], int n )
 {
 // умножить параметр на 2
	 b[n]*=5;
 cout << "Value of element in modifyElement: " << b[n] << endl;
 } // конец функции modifyElement
