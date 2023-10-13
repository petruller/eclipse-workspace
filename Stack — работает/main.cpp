/*
 * mmain.cpp
 *
 *  Created on: 5 окт. 2023 г.
 *      Author: User
 */

#include <iostream>
 using std::cout;
 using std::endl;
using std::cin;

#include <string>
using std::string;
 //#include "Stack.h" // определение класса Stack
#include "list.h"

 template< typename T >
	  void testList( List< T > &listObject, const string &typeName )
	 {
	  cout << "Testing a List of " << typeName << " values\n";
	//  instructions(); // вывести инструкции

	  int choice; // хранит выбор пользователя
	  T value; // хранит введенное значение

	  do // произвести действия, выбранные пользователем
	  {
	  cout << "? ";
	  choice = 2; //мой

	  switch ( choice )
	  {
	  case 1: // вставить в начало
	  cout << "Ehter " << typeName <<": ";
	 cin >> value;
	 // value=22;
	  listObject.insertAtFront( value );
	  listObject.print();
	  break;
	  case 2: // вставить в конец
	  cout << "Enter " << typeName << ": ";
	  cin >> value;
	  listObject.insertAtBack( value );
	  listObject.print();
	  break;
	  case 3: // удалить из начала
	  if ( listObject.removeFromFront( value ) )
	  cout << value << " removed from list\n";

	  listObject.print();
	  break;
	  case 4: // удалить из конца
	  if ( listObject.removeFromBack( value ) )
	  cout << value << " removed from list\n";


	  listObject.print();
	  break;
	  } // конец switch
	  } while ( choice != 5 ); // конец do...while

	  cout << "End list test\n\n";
	  } // конец функции testList

 int main()
 {
	 List< int > integerList;
	testList( integerList, "integer" );

 return 0;
 } // конец main


