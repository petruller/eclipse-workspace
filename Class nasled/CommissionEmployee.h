/*
 * CommissionEmployee.h
 *
 *  Created on: 24 авг. 2023 г.
 *      Author: User
 */

// Рис. 12.4: CommissionEmployee.h
 // Класс CommissionEmployee - служащий, получающий комиссионные.
 #ifndef COMMISSION_H
 #define COMMISSION_H

 #include <string> // стандартный класс C++ string
 using std::string;

 class CommissionEmployee
 {
 public:
 CommissionEmployee( const string &, const string &,
 const string &, double = 0.0, double = 0.0 );

 void setFirstName( const string & ); // установить имя
 string getFirstName() const; // возвратить имя

 void setLastName( const string & ); // установить фамилию
 string getLastName() const; // возвратить фамилию

 void setSocialSecurityNumber( const string & ); // установить SSN
 string getSocialSecurityNumber() const; // возвратить SSN

 void setGrossSales( double ); // установить общую сумму продаж
 double getGrossSales() const; // возвратить общую сумму продаж

 void setCommissionRate ( double ); // установить процент
 double getCommissionRate() const; // возвратить процент

 double earnings() const; // вычислить заработок
 void print() const; // напечатать объект CommissionEmployee
 private:
 string firstName;
 string lastName;
 string socialSecurityNumber;
 double grossSales; // продажи за неделю
 double commissionRate; // комиссионный процент
 }; // конец класса CommissionEmployee

 #endif
