/*
 * Stack.h
 *
 *  Created on: 5 окт. 2023 г.
 *      Author: User
 */

#ifndef STACK_H_
#define STACK_H_


#include "list.h" // определение класса List

 template< typename STACKTYPE >
 class Stack : private List< STACKTYPE >
 {
 public:
 // push вызывает функцию insertAtFront класса List
 void push( const STACKTYPE &data )
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


#endif /* STACK_H_ */
