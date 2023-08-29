/*
 * main.cpp
 *
 *  Created on: 29 авг. 2023 г.
 *      Author: User
дейтел 895 */

#include <iostream>
 using std::cout;
 using std::endl;

 #include "Stack.h" // определение шаблона класса Stack

 int main()
 {int ch=10;
 Stack< double > doubleStack( ch ); // размер 5

 double doubleValue = 1.1;

 cout << "Pushing elements onto doublestack\n";

 // затолкнуть в doublestack 5 значений типа double
while ( doubleStack.push( doubleValue ) )

 {
 cout << doubleValue << ' ';
 doubleValue += 1.1;
 } // конец while

 cout << "\nStack is full. " << doubleValue
 << "\n\nPopping elements from doubleStack\n";

 // вытолкнуть элементы из doublestack
 while ( doubleStack.pop( doubleValue ) )
 cout << doubleValue << ' ';

 cout << "\nStack is empty. \n";
//////////////



 //////////////////
 Stack< char > intStack(26); // размер по умолчанию 10
  char charValue = 'a';
  cout << "\nPushing elements onto intStack\n";

  // затолкнуть в intStack 10 значений типа int
  while ( intStack.push( charValue ) )
  {
  cout << charValue << ' ';
  charValue++;
  } // конец while

  cout << "\nStack is full. " << charValue
  << "\n\nPopping elements from intStack\n";

  // вытолкнуть элементы из intStack
  while ( intStack.pop( charValue ) )
  cout << charValue << ' ';

  cout << "\nStack is empty. " << endl;
//////////////
  Stack< int > intStack1; // размер по умолчанию 10
   int intValue = 0;
   cout << "\nPushing elements onto intStack\n";

   // затолкнуть в intStack 10 значений типа int
   while ( intStack1.push( intValue ) )
   {
   cout << intValue << ' ';
   intValue++;
   } // конец while

   cout << "\nStack is full. " << intValue
   << "\n\nPopping elements from intStack\n";

   // вытолкнуть элементы из intStack
   while ( intStack1.pop( intValue ) )
  cout << intValue << ' ';

  cout << "\nStack is empty. " << endl;


 return 0;
 } // конец main





