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

#include "stack.h" // определение класса List

int main()
 {
 Stack< int > intStack; // создать стек для значений int

 cout << "processing an integer Stack" << endl;

 // затолкнуть в intStack целые значения
 for ( int i = 0; i < 10; i++ )
 {
 intStack.push( i );
 intStack.printStack();
 } // конец for

 int poplnteger; // сохраняет int, вытолкнутое из стека

 // вытолкнуть целые из intStack
 while ( !intStack.isStackEmpty() )
 {
 intStack.pop( poplnteger );
 cout << poplnteger << " popped from stack" << endl;
 intStack.printStack();
 } // конец while

 Stack< double > doubleStack; // создать стек для значений double
 double value = 1.1;

 cout << "processing a double Stack" << endl;

 // затолкнуть в doubleStack значения с плавающей точкой
 for ( int j = 0; j < 9; j++ )
 {
 doubleStack.push( value );
 doubleStack.printStack();
 value += 1.1;
 } // конец for

 double popDouble; // сохраняет double, вытолкнутое из стека

while ( !doubleStack.isStackEmpty() )
 {
 doubleStack.pop( popDouble );
 cout << popDouble << " popped from stack" << endl;
 doubleStack.printStack();
 } // конец while

 return 0;
 } // конец main
