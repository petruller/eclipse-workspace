/*
 * main.cpp
 *
 *  Created on: 24 авг. 2023 г.
 *      Author: User
 */
 #include <iostream>
 using std::cout;

 using std::endl;
 using std::fixed;

 #include <iomanip>
using std::setprecision;

 #include "CommissionEmployee.h" // определение CommissionEmployee

 int main()
 {
 // создать объект CommissionEmployee
 CommissionEmployee employee(
 "Dima", "Tetus", "21-22-2222", 10000, .06 );

 // установить формат вывода чисел с плавающей точкой
 cout << fixed << setprecision( 2 );

 // получить данные служащего
 cout << "Employee information obtained by get functions: \n"
 << "\nFirst name is " << employee .getFirstName ()
 << "\nLast name is " << employee.getLastName()
 << "\nSocial security number is "
 << employee.getSocialSecurityNumber()
 << "\nGross sales is " << employee.getGrossSales ()
 << "\nCommission rate is "<<employee.getCommissionRate()<<endl;
// employee.print();


 employee.setGrossSales( 8000 ); // установить объем продаж
 employee.setCommissionRate( .1 ); // установить процент
employee.setFirstName("Dimon");
 cout << "\nUpdated employee information "
 << "output by print function: \n"<< endl;
 employee.print(); // вывести новую информацию о служащем

 // вывести заработок служащего
 cout <<"\n\nEmployee's earnings: $"<< employee.earnings ()<< endl;

 return 0;
 } // конец main
