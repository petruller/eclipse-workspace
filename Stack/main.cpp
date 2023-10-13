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
//#include "list.h"
#include "list.h" // определение класса List
/*
 template< typename STACKTYPE >
 class Stack :  List< STACKTYPE >
 {
 public:
 // push вызывает функцию insertAtFront класса List
/* void push( const STACKTYPE &data )
 {
insertAtFront( data );
 } // конец функции push

 // pop вызывает функцию removeFromFront класса List
 bool pop( STACKTYPE &data )
 {
 return  removeFromFront( data );
 } // конец функции pop

 // isStackEmpty вызывает функцию isEmpty класса List
 bool isStackEmpty() const
 {
 return  isEmpty();
 } // конец функции isStackEmpty

 // printStack вызывает функцию print класса List
 void printStack() const
 {
	print();
 } // конец функции print
 }; // конец класса Stack

*/

int main()
 {
 List< int > intStack; // создать стек для значений int

 cout << "processing an integer Stack" << endl;

 // затолкнуть в intStack целые значения
 for ( int i = 0; i < 3; i++ )
 {
 intStack.insertAtFront( i );
 intStack.print();
 } // конец for

 int poplnteger; // сохраняет int, вытолкнутое из стека

 // вытолкнуть целые из intStack
 while ( !intStack.isEmpty() )
 {
 intStack.removeFromFront( poplnteger );
 cout << poplnteger << " popped from stack" << endl;
 intStack.print();
 } // конец while

 List< double > doubleStack; // создать стек для значений double
 double value = 1.1;

 cout << "processing a double Stack" << endl;

 // затолкнуть в doubleStack значения с плавающей точкой
 for ( int j = 0; j < 3; j++ )
 {
 doubleStack.insertAtFront( value );
 doubleStack.print();
 value += 1.1;
 } // конец for

 double popDouble; // сохраняет double, вытолкнутое из стека

 // вытолкнуть значения с плавающей точкой из doubleStack

while ( !doubleStack.isEmpty() )
 {
 doubleStack.removeFromFront( popDouble );
 cout << popDouble << " popped from stack" << endl;
 doubleStack.print();
 } // конец while

 return 0;
 } // конец main
