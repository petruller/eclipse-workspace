/*
 * BinarySearch.cpp
 *
 *  Created on: 20 сент. 2023 г.
 *      Author: User
 */

#include <iostream>
 using std::cout;
 using std::endl;

 #include <cstdlib> // прототипы для функций srand и rand
 using std::rand;
 using std::srand;

 #include <ctime> // прототип для функции time
 using std::time;

 #include <algorithm> // прототип для функции sort
 #include "BinarySearch.h" // определение класса BinarySearch

 // конструктор инициализирует случайными целыми и сортирует вектор
 BinarySearch::BinarySearch( int vectorSize )
 {
 size = ( vectorSize > 0 ? vectorSize : 10 ); // проверить размер
 srand( time( 0 ) ); // засеять текущим временем

 // заполнить вектор случайными целыми в диапазоне 10-99
for ( int i = 0; i < size; i++ )
 data.push_back( 10 + rand() % 90 ); // 10-99

 std::sort( data.begin(), data.end() ); // сортировать данные
 } // конец конструктора BinarySearch

 // произвести двоичный поиск в данных
 int BinarySearch::binarySearch( int searchElement ) const
 {
 int low =0; // нижний предел области поиска
 int high = size - 1; // верхний предел области поиска
 int middle = ( low + high + 1 ) / 2; // средний элемент
 int location = -1; // возвращаемое значение; -1, если не найдено
 do // цикл поиска элемента
 {
 // распечатать элементы вектора, оставшиеся для поиска
 displaySubElements( low, high );

 // вывести пробелы для выравнивания
/* if(middle<3){
	 for ( int i = 0; i < middle; i++ )
 cout << " ";
 }else{*/
 for ( int i = 0; i < middle*3; i++ )
 cout << " ";
 //}
 cout << " * " << endl; // показать текущую середину

 // если элемент найден в середине
 if ( searchElement == data[ middle ] )
location = middle; // location равно текущей середине
 else if ( searchElement < data[ middle ] ) // слишком велик
 high = middle - 1; // отбросить верхнюю половину
 else // средний элемент слишком мал
 low = middle +1; // отбросить нижнюю половину

 middle = ( low + high +1 ) /2; // пересчитать середину
  } while ( ( low <= high ) && ( location == -1 ) ) ;

   return location; // возвратить позицию ключа поиска
  } // конец фунции binarySearch

  // показать значения в векторе
  void BinarySearch::displayElements() const
  {
  displaySubElements( 0, size - 1 );
  } // конец фунции displayElements

  // показать некоторые значения в векторе
  void BinarySearch::displaySubElements( int low, int high ) const
  {
  for ( int i = 0; i < low; i++ ) // пробелы для выравнивания
  cout << "   ";

  for ( int i = low; i <= high; i++ ) // вывести оставшиеся
  cout << data[ i ] << " ";

  cout << endl;
  } // конец фунции displaySubElements

