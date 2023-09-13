/*
 * PDmain.cpp
 *
 *  Created on: 11 сент. 2023 г.
 *      Author: User
 */
#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>
using namespace std;

class Motor
   {
 public :
void setnum(int i)
{
num=i;
}
int getnum()
{
return num;
}

string getname(){
//cout <<"name : " << name <<endl;
	return name;
};
void setname(string s){
//cout <<"name : " << name <<endl;
	name=s;
};

int getoboroty(){
//cout <<"name : " << name <<endl;
	return oboroty;
};
void setoboroty(int i)
{
oboroty=i;
}
string gettype(){
//cout <<"name : " << name <<endl;
	return type;
};
void settype(string s)
{
type=s;
}
int getyear(){
//cout <<"name : " << name <<endl;
	return year;
};
void setyear(int i)
{
year = i;
}
private :
int num;
string name;
   int oboroty;
   string type;
   int year;
   };



int main(int argc, char* argv[]) {
	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	       {

	if(!strcmp(argv[1], "r"))
		{


/////////////////создать сет функции//////////////////////////

ofstream mot( "motor.dat", ios::binary );
	if ( !mot )
	 {
	 cerr << "File could not be opened." << endl;
	 exit( 1 );
	 } // конец if


	 Motor motor1; // конструктор обнуляет все элементы


	// вывести в файл 100 пустых записей
	 for ( int i = 0; i < 20; i++ )
	 {motor1.setnum(i);
	 motor1.setname("Xiaomi");
	 motor1.setoboroty(10000);
	 motor1.settype("gas");
	 motor1.setyear(1999);
		 mot.write( reinterpret_cast<char *>(&motor1),sizeof( Motor) );
	 }
	 cout<<"file is create";
		}//r

	       }//arg
	else{
ifstream mot( "motor.dat", ios::binary );
	if ( !mot )
	 {
	 cerr << "File could not be opened." << endl;
	 exit( 1 );
	 } // конец if
	 Motor motor2;

mot.read(reinterpret_cast<char *>(&motor2),sizeof( Motor));

	 //for(int i=0; i<20; i++)
	while(mot &&!mot.eof()) //не работает while
	 {
//	cout<<motor2.getname()<<endl;

	cout<<setw(2)<<motor2.getnum()<<" "<<motor2.getname()<<' '<<motor2.getoboroty()<<' '<<motor2.gettype()<<' '<<
			motor2.getyear()<<endl;
	mot.read(reinterpret_cast<char *>(&motor2),sizeof( Motor));

	}//w

	}//else

return 0;
}
