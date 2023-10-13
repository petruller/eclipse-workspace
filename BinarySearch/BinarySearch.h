/*
 * BinarySearch.h
 *
 *  Created on: 20 сент. 2023 г.
 *      Author: User
 */

#ifndef BINARYSEARCH_H_
#define BINARYSEARCH_H_

#include <vector>
 using std::vector;

 class BinarySearch
 {
 public:
 BinarySearch( int ); // конструктор инициализирует вектор
 int binarySearch( int ) const; // двоичный поиск в векторе
 void displayElements() const; // вывести элементы вектора
 private:
 int size; // размер вектора
 vector< int > data; // вектор значений int
 void displaySubElements( int, int ) const; // вывести диапазон
 }; //



#endif /* BINARYSEARCH_H_ */
