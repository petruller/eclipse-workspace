/*
 * Stack.h
 *
 *  Created on: 29 авг. 2023 г.
 *      Author: User
 */

#ifndef STACK_H_
#define STACK_H_

template< typename T >
class Stack
{
public:
Stack( int = 10 ) ;
// деструктор
~Stack()
{

// конструктор по умолчанию (размер стека 10)
 delete [] stackPtr; // удалить внутреннее представление стека
 } // конец деструктора -Stack

 bool push( const T& ); // затолкнуть элемент в стек
 bool pop( T& ); // вытолкнуть элемент из стека

 // определить, пуст ли стек
 bool isEmpty() const
 {
 return top == -1;
 } // конец функции isEmpty

 // определить, полон ли стек
 bool isFull() const
 {
 return top == size - 1;
 } // конец функции isFull

 private:
 int size; // # элементов в стеке
 int top; // позиция верхнего элемента (-1 означает - стек пуст)
 T *stackPtr; // указатель на внутреннее представление стека
 }; // конец шаблона класса Stack

 // шаблон конструктора
 template< typename T >
 Stack< T >::Stack( int s )
 : size( s > 0 ? s : 10 ), // проверить размер
 top( -1 ), // стек изначально пуст
 stackPtr( new T[ size ] ) // выделить память для элементов
 {
 // пустое тело
 } // конец шаблона конструктора Stack

 // затолкнуть элемент в стек;
 // если успешна, возвратить true; в противном случае false
 template< typename T >
 bool Stack< T >::push( const T &pushValue )
{
 if ( !isFull() )
 {
 stackPtr[ ++top ] = pushValue; // поместить элемент в стек
 return true; // операция удачна
 } // конец if

 return false; // операция неудачна
 } // конец шаблона функции push

 // вытолкнуть элемент из стека;
 // если успешна, возвратить true; в противном случае false
 template< typename T >
 bool Stack< T >::pop( T &popValue )
 {
 if ( !isEmpty() )
 {
 popValue = stackPtr[ top-- ]; // удалить элемент из стека
 return true; // операция удачна


 } // конец if

return false; // операция неудачна
 }



#endif /* STACK_H_ */
