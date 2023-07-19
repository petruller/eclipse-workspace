/*
 * Unit.cpp
 *
 *  Created on: 8 июн. 2023 г.
 *      Author: User
 */


 #include <iostream>
// using namespace std;
 //using std::endl;

 #include "Class.h" // включить определение класса GradeBook

 // функция main начинает исполнение программы


 int main()
 {
 // создать два объекта GradeBook;
 // исходное имя курса для gradeBookl слишком длинное
 GradeBook gradeBookl( "CS101 Programming in C++" );
 GradeBook gradeBook2( "CS102 C++ Data Structures" );
 GradeBook gradeBook3( "Dimon C++ Programming" );
 GradeBook test("1");
 // вывести courseName каждого GradeBook

 gradeBook3.displayMessage();
 cout <<   "gradeBooklf s initial course name is: "
 << gradeBookl.getCourseName()
 << "\ngradeBook2's initial course name is: "
 << gradeBook2.getCourseName() <<  "\ngradeBook3's initial course name is: "<<gradeBook3.getCourseName()<<endl;

 // модифицировать courseName для gradeBookl (корректной строкой)
// gradeBookl.setCourseName( "CS101 C++ Programming" );

 // вывести courseName каждого GradeBook
 cout << "\ngradeBookl's course name is: "
 << gradeBookl.getCourseName()
 << "\ngradeBook2's course name is: "
 << gradeBook2.getCourseName()
 << "\ngradeBook3's course name is: "
 << gradeBook3.getCourseName()
<< endl;
 return 0; // показывает успешное завершение
 } // конец main


