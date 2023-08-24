/*
 * CommissionEmployee.cpp
 *
 *  Created on: 24 авг. 2023 г.
 *      Author: User
 */
//дэйтэйл стр 768
//CommissionEmployee.срр
 // Определения элемент-функции класса CommissionEmployee.
 #include <iostream>
 using std::cout;

 #include "CommissionEmployee.h" // определение CommissionEmployee

 // конструктор
 CommissionEmployee::CommissionEmployee(
 const string &first, const string &last, const string &ssn,
 double sales, double rate )
 {
 firstName = first; // должно проверяться
 lastName = last; // должно проверяться
 socialSecurityNumber = ssn; // должно проверяться
 setGrossSales( sales ); // проверить и сохранить объем продаж
 setCommissionRate( rate ); // проверить и сохранить процент
 } // конец конструктора CommissionEmployee

 // установить имя
 void CommissionEmployee::setFirstName( const string &first )
 {
 firstName = first; // должно проверяться
 } // end function setFirstName


 // возвратить имя
 string CommissionEmployee::getFirstName() const
 {
 return firstName;
 } // конец функции getFirstName

 // установить фамилию
 void CommissionEmployee::setLastName( const string &last )
 {
 lastName = last; // должно проверяться
 } // конец функции setLastName

 // возвратить фамилию
 string CommissionEmployee::getLastName() const
 {
 return lastName;
 } // конец функции getLastName

 // установить номер страховки
 void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
 {
 socialSecurityNumber = ssn; // должно проверяться
 } // конец функции setSocialSecurityNumber

 // возвратить номер страховки
 string CommissionEmployee::getSocialSecurityNumber() const
 {
 return socialSecurityNumber;
 } // конец функции getSocialSecurityNumber

 // установить общую сумму продаж
 void CommissionEmployee::setGrossSales( double sales )
 {
 grossSales = ( sales < 0.0 ) ? 0.0 : sales;
 } // конец функции setGrossSales

 // возвратить общую сумму продаж
 double CommissionEmployee::getGrossSales() const
 {
 return grossSales;
 } // конец функции getGrossSales

 // установить комиссионный процент
 void CommissionEmployee::setCommissionRate( double rate )
 {
 commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
 } // конец функции setCommissionRate

 // возвратить комиссионный процент
 double CommissionEmployee::getCommissionRate() const
 {
 return commissionRate;
 } // конец функции getCommissionRate

 // вычислить заработок
 double CommissionEmployee::earnings() const
 {



 return commissionRate * grossSales;
 } // конец функции earnings

 // напечатать объект CommissionEmployee
 void CommissionEmployee::print() const
 {
 cout << "commission employee: " << firstName << ' ' << lastName
 << "\nsocial security number: " << socialSecurityNumber
 << "\ngross sales: " << grossSales
 << "\ncommission rate: " << commissionRate;
 } // конец функции print




