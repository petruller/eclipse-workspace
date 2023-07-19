/*
 * Class.cpp
 *
 *  Created on: 8 июн. 2023 г.
 *      Author: User
 */




#include <iostream>
using namespace std;
 using std::cout;
using std::endl;

 #include "Class.h" // включить определение класса GradeBook

 // конструктор инициализирует courseName переданной строкой
 GradeBook::GradeBook(string name)
 {
 setCourseName ( name ); // проверить и сохранить courseName
 } // конец конструктора GradeBook

 // функция, устанавливающая название курса;
 // гарантирует, что название курса содержит не более 25 символов


 void GradeBook::setCourseName( string name )
 {
if ( name.length() <= 25 ) // если не более 25 символов
 courseName = name; // сохранить название курса в объекте

 if ( name.length() > 25 ) // если в названии более 25 символов
 {
 // записать в courseName первые 25 символов параметра name
 courseName = name.substr( 0, 25 ); // начать с 0, длина 25

 cout << "Name \""<< name << "\" exceeds maximum length. \n"
 << "Limiting courseName to first 25 characters.\n" << endl;
 } // конец if
 } // конец функции setCourseName

 // функция для получения названия курса
 string GradeBook::getCourseName()
 {
 return courseName; // возвратить courseName объекта
 } // конец функции getCourseName

 // вывести сообщение-приветствие пользователю GradeBook
 void GradeBook::displayMessage()
 {
 // вызвать getCourseName для получения courseName
 cout << "Welcome to the grade book for\n" << getCourseName()
 << "!" << endl;
 } // конец функции displayMessage
