/*
 * BinaryMAIN.cpp
 *
 *  Created on: 20 сент. 2023 г.
 *      Author: User
 */
#include <iostream>
 using std::cin;
 using std::cout;
 using std::endl;

 #include "BinarySearch.h" // определение класса BinarySearch

 int main()
 {
 int searchInt; // ключ поиска
 int position; // позиция ключа поиска в векторе
  // создать вектор и вывести его
  BinarySearch searchVector ( 25 );
  searchVector.displayElements();

  // получить от пользователя ключ поиска
  cout << "\n\nPlease enter an integer value (-1 to quit): ";
  cin >> searchInt; // прочитать введенное пользователем целое
  cout << endl;

  // повторно ввести число; -1 завершает программу
  while ( searchInt != -1 )
  {
  // попытаться найти число, применив двоичную сортировку
  position = searchVector.binarySearch( searchInt );

  // возвращаемое значение -1 указывает, что число не найдено
  if ( position == -1 )
  cout << "The integer " << searchInt << " was not found.\n";
 else
  cout << "The integer " << searchInt
  << " was found in position " << position << ".\n";

  // получить ввод пользователя
  cout << "\n\nPlease enter an integer value (-1 to quit): ";
  cin >> searchInt; // прочитать число пользователя
  cout << endl;
  } // конец while

  return 0;
  } // конец main




