/*
 * main.cpp
 *
 *  Created on: 29 авг. 2023 г.
 *      Author: User
дейтел 895 */

#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using std::cout;

//using std::endl;
 using namespace std;
 #include "Stack.h" // определение шаблона класса Stack

 class IP{
 public:
	 IP(int a1, int b1, int c1, int d1) : a(a1), b(b1),c(c1), d(d1)
	{}

	 IP operator+(const IP& other) const {
	    int a2,b2,c2,d2;
	    a2=a + other.a;
	    if(a2>255)
	    a2=255;

	    b2=b + other.b;

	    c2= c + other.c;
	    if(c2>255)
	    c2=255;

	    d2= d + other.d;
	     if(d2>255)
	    d2=255;


	    return IP(a2,b2 ,c2,d2);
	    }

	  friend ostream& operator<<(ostream& os, const IP& c)//учить
	    {
	   os<<c.a <<"."<<c.b<<"."<<c.c<<"."<<c.d;
	   return os;

	    }

	private:
	int a,b,c,d;

 };


 int main()
 {int ch=18;
 Stack< double > doubleStack( ch ); // размер 5

 double doubleValue = 1.1;
//double eps=0.00001;
 cout << "Pushing elements onto doublestack\n";

 // затолкнуть в doublestack 5 значений типа double
while ( doubleStack.push( doubleValue ) )

 {cout << doubleValue << ' ';


/*if(abs(doubleValue-10)<eps)
	{cout << "10.0" << ' ';
	doubleValue = 10.0;
	}*/
doubleValue += 1.1;
 } // конец while

 cout << "\nStack is full" //<< doubleValue
 << "\n\nPopping elements from doubleStack\n";

 // вытолкнуть элементы из doublestack
 while ( doubleStack.pop( doubleValue ) )
 cout << doubleValue << ' ';

 cout << "\nStack is empty. \n";
//////////////



 //////////////////
 Stack< char > intStack(26); // размер по умолчанию 10
  char charValue = 'a';
  cout << "\nPushing elements onto intStack\n";

  // затолкнуть в intStack 10 значений типа int
  while ( intStack.push( charValue ) )
  {
  cout << charValue << ' ';
  charValue++;
  } // конец while

  cout << "\nStack is full. " //<< charValue
  << "\n\nPopping elements from intStack\n";

  // вытолкнуть элементы из intStack
  while ( intStack.pop( charValue ) )
  cout << charValue << ' ';

  cout << "\nStack is empty. " << endl;
//////////////
  Stack< int > intStack1; // размер по умолчанию 10
   int intValue = 0;
   cout << "\nPushing elements onto intStack\n";

   // затолкнуть в intStack 10 значений типа int
   while ( intStack1.push( intValue ) )
   {
   cout << intValue << ' ';
   intValue++;
   } // конец while

   cout << "\nStack is full. " //<< intValue
   << "\n\nPopping elements from intStack\n";

   // вытолкнуть элементы из intStack
   while ( intStack1.pop( intValue ) )
  cout << intValue << ' ';

  cout << "\nStack is empty. " << endl;

Stack <int> myint(20);
 cout<<"\nmy int epta"<<endl;
 int ttt=0;
 while(myint.push(ttt))
 {	 cout << ttt<<' ';
ttt=rand()%1000;
 }
  cout<<"\nStack is full"<<endl;

  while(myint.pop(ttt))
 {	 cout << ttt<<' ';
 }
  cout<<"\nStack is empty"<<endl;

  IP mip(123,33,33,3);
  cout << mip;

 return 0;
 } // конец main





