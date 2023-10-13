/*
 * list.h
 *
 *  Created on: 5 окт. 2023 г.
 *      Author: User
 */

#ifndef LIST_H_
#define LIST_H_



#include <iostream>
 using std::cout;

 #include "Listnode.h" // определение класса ListNode

 template< typename NODETYPE >
 class List
 {
 public:
 List(); // конструктор
 ~List(); // деструктор
 void insertAtFront( const NODETYPE & );
 void insertAtBack( const NODETYPE & );
 bool removeFromFront( NODETYPE & );
 bool removeFromBack( NODETYPE & );
 bool isEmpty() const;
 void print() const;
 private:
 ListNode< NODETYPE > *firstPtr; // указатель на первый узел
 ListNode< NODETYPE > *lastPtr; // указатель на последний узел

 // сервисная функция для выделения памяти нового узла
 ListNode< NODETYPE > *getNewNode( const NODETYPE & );
}; // конец класса List

 // конструктор по умолчанию
 template< typename NODETYPE >
 List< NODETYPE >::List()
 : firstPtr( 0 ), lastPtr( 0 )
 {
 }
	 template< typename NODETYPE >
	  List< NODETYPE >::~List()
	  {
	  if ( ! isEmpty() ) // список не пуст
	  {
	  cout << "Destroying nodes ...\n";

	  ListNode< NODETYPE > *currentPtr = firstPtr;
	  ListNode< NODETYPE > *tempPtr;

	  while ( currentPtr != 0 ) // удалить оставшиеся узлы
	 {
	  tempPtr = currentPtr;
//	  cout <<tempPtr->data << ' \n';
	  currentPtr = currentPtr->nextPtr;
	  delete tempPtr;
	  } // конец while
	  } // конец if

	  cout << "All nodes destroyed\n\n";
	  } // конец деструкора List

	  // вставить узел в начало списка
	  template< typename NODETYPE >
	  void List< NODETYPE >::insertAtFront( const NODETYPE &value )
	  {
	  ListNode< NODETYPE > *newPtr = getNewNode( value ); // новый узел

	  if ( isEmpty() ) // список пуст
	 firstPtr = lastPtr = newPtr; // список имеет всего один узел
	  else // List is not empty
	  {
	  newPtr->nextPtr = firstPtr; // новый указывает на предыдущий
	  firstPtr = newPtr; // направить firstPtr на новый узел
	  } // конец else
	  } // конец функции insertAtFront

	 // вставить узел в начало списка
	  template< typename NODETYPE >
	  void List< NODETYPE >::insertAtBack( const NODETYPE &value )
	  {
	  ListNode< NODETYPE > *newPtr = getNewNode( value ); // новый узел

	  if ( isEmpty() ) // список пуст
	  firstPtr = lastPtr = newPtr; // список имеет всего один узел
	  else // список не пуст
	  {
	  lastPtr->nextPtr = newPtr; // обновить бывший последний узел
	  lastPtr = newPtr; // новый последний узел
	  } // конец else
	  } // конец функции insertAtBack

	  // удалить узел из начала списка
	  template< typename NODETYPE >

	  bool List< NODETYPE >::removeFromFront( NODETYPE &value )
	   {
	   if ( isEmpty() ) // список пуст
	   return false; // неудачное удаление
	   else
	   {
	   ListNode< NODETYPE > *tempPtr = firstPtr; // для удаления

	   if ( firstPtr == lastPtr )
	   firstPtr = lastPtr =0; // после удаления узлов нет
	   else
	   firstPtr = firstPtr->nextPtr; // направить на бывший 2-й узел

	   value = tempPtr->data; // возвратить удаляемые данные
	   delete tempPtr; // освободить удаленный первый узел
	   return true; // удачное удаление
	   } // конец else
	   } // конец функции removeFromFront

	   // удалить узел из конца списка

	   template< typename NODETYPE >
	   bool List< NODETYPE >::removeFromBack( NODETYPE &value )
	   {
	   if ( isEmpty() ) // список пуст
	   return false; // неудачное удаление
	   else
	   {
	   ListNode< NODETYPE > *tempPtr = lastPtr; // для удаления

	   if ( firstPtr == lastPtr ) //в списке один элемент
	   firstPtr = lastPtr =0; // после удаления узлов нет
	   else
	   {
	   ListNode< NODETYPE > *currentPtr = firstPtr;

	   // locate second-to-last element
	   while ( currentPtr->nextPtr != lastPtr )
	   currentPtr = currentPtr->nextPtr; // перейти к следующему

	   lastPtr = currentPtr; // удалить последний узел
	   currentPtr->nextPtr =0; // теперь это последний узел
	   } // конец else

	   value = tempPtr->data; // возвратить данные бывшего последнего
	   delete tempPtr; // освободить бывший последний узел
	   return true; // удачное удаление
	   } // конец else
	   } // конец функции removeFromBack

	   // список пуст?
	   template< typename NODETYPE >
	   bool List< NODETYPE >::isEmpty() const
	   {
	   return firstPtr == 0;
	   } // конец функции isEmpty

	   // возвратить указатель на вновь выделенный узел

	  template< typename NODETYPE >
	  ListNode< NODETYPE > *List< NODETYPE >::getNewNode(
	   const NODETYPE &value )
	   {
	   return new ListNode< NODETYPE >( value );
	   } // конец функции getNewNode

	  // вывести содержимое списка*/
	 template< typename NODETYPE >
	   void List< NODETYPE >::print() const
	   {
	   if ( isEmpty() ) // список пуст
	   {
	   cout << "The list is empty\n\n";
	   return;
	   } // конец if

	   ListNode< NODETYPE > *currentPtr = firstPtr;

	   cout << "The list is: ";

	   while ( currentPtr != 0 ) // получить данные элемента
	   {
	   cout << currentPtr->data << ' ' ;
	   currentPtr = currentPtr->nextPtr;
	   } // конец while

	   cout << "\n\n";
	   } // конец функции print






#endif /* LIST_H_ */
