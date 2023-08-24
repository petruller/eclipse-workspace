//#include <cstdlib>
#include <stdio.h>
//# include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
 #include <iomanip>
#include <cstring>
 using namespace std;





 class IP
 {

 public:
	 IP(int a1, int b1, int c1, int d1) : a(a1),b(b1),c(c1),d(d1)
		{
	 }
		IP operator+(const IP& tt) const //забыл const
		{
		int a2,b2,c2,d2;
		a2=a+tt.a;
		b2=b+tt.b;
		c2=c+tt.c;
		d2=d+tt.d;

		return IP(a2,b2,c2,d2);
		}
		friend ostream& operator<<(ostream& a, const IP& tt)
		{
		a<<tt.a<<"."<<tt.b<<"."<<tt.c<<"."<<tt.d;
		return a;
		}
private:
	 int a,b,c,d;


 };
 int main()
 {
	 IP ip1=IP(2,2,2,2);
	 IP ip2=IP(2,2,2,2);
	 IP ip3=ip1+ip2;

	 cout<<"Hello"<<endl<<ip1<<ip2<<ip3;

	 return 0;
 };























/*
 class IP
 {

 public:
	 IP(int a1, int b1, int c1, int d1): a(a1),b(b1),c(c1),d(d1)
	 {}
		IP operator+(const IP& tt) const
		{
		int a2,b2,c2,d2;
		 a2= a+tt.a;
		 b2=b+tt.b;
		 c2=c+tt.c;
		 d2=d+tt.d;

		 return IP(a2,b2,c2,d2);

		}
		friend ostream& operator<<(ostream& os, const IP& tt1)
		{
			os<<tt1.a<<"."<<tt1.b<<"."<<tt1.c<<"."<<tt1.d;
			return os;

		}

 private:
	 int a,b,c,d;



 };
 int main()
 {
	 IP ip1=IP(12,12,12,13);
	 IP ip2=IP(2,2,2,2);
	 IP ip3=ip1+ip2;
	 cout<<"Hello!"<<endl;
	 cout<<ip1<<endl<<ip2<<endl<<"sum :"<<ip3;
	 return 0;
 }
 //using std::vector;
/*
class dst{
 public:
	 void hello()
	 {
	// i1=10;
		 for(int i=0; i<=i1; i++)
cout<<st1<<endl;
cout<<i1;
	 }

 private:
	 //char st1;//="Hello Dimsrt";
	const int i1=7;
	const char *st1="Hello Dimsrt";
 };

int main()
  {
dst *my;
my = new dst;
cout<<"H e l l o"<<endl;
my->hello();

return 0;
  }

 /*
 struct Person {
	 string name;
	 int age;

 };
struct pair1{
	 int a;
	 int b;

 };
 bool ascendingComparator(const std::pair<int, int>& a, const std::pair<int, int>& b) {
     return a.first < b.first;
 }

int arsize=10;
 int intdim[] = {24,40,52,23,42,27,51,46,30,32};
 vector <Person> Per;
  string Mname[] = {"Alexander", "Dmitry", "Evgeny", "Ivan", "Kirill", "Maxim", "Nikolay", "Pavel", "Sergey", "Vladimir"};

	vector <pair1> pairedArray;
 int main()
 {


	    for (int i = 0; i < arsize; ++i) {
	      //
	    	pairedArray.push_back({intdim[i], i});
	    }

	    // Сортируем вектор пар по возрастанию значения элемента
	     std::sort(pairedArray.begin(), pairedArray.end(), ascendingComparator);

	     for (const auto& pair : pairedArray) {
	           cout << "Имя: "<<Mname[pair.a]<<
	        		   " Возраст: "  << pair.b<<endl;
	         }

/*

	for(int i=0; i<10; i++)
{
Per.push_back({Mname[i],intdim[i]});
}
	 for(auto el: Per)
		 cout<<el.name<<setw(12-el.name.length())<<el.age<<endl;

return 0;
}
//сорт конец*/











/*
string prevk[] = {"Hello","Hi","Privet","Bomjur","love"};
char  cmas[] = {'H','e','l','l','o'};
int chislo[] = {5,8,5,5,8,5,6};
int main()
{
vector <string> voop(prevk,prevk+5);

	/*string *s =&prevk[0];
	int siz=sizeof(prevk)/sizeof(prevk[0]);
	for (int i=0; i<=siz; i++)
	{	cout<<*s<<" ";
	s++;
	}*/
/*
for(auto t: voop)
	cout<< t<<endl;
cout <<endl<<"string"<<endl;
cout << sizeof(string)<<endl;
cout<< sizeof(prevk)<<endl;
cout<< sizeof(prevk)/sizeof(string)<<endl<<endl;
cout<<"first element string "<<sizeof(prevk[0])<<endl;
cout <<"char"<<endl;
cout << sizeof(char)<<endl;
cout<< sizeof(cmas)<<endl;
cout<< sizeof(cmas)/sizeof(char)<<endl<<endl;
cout<<"first element char "<<sizeof(cmas[0])<<endl;
cout <<"int"<<endl;
cout << sizeof(int)<<endl;
cout<< sizeof(chislo)<<endl;
cout<< sizeof(chislo)/sizeof(int)<<endl<<endl;
cout<<"first element int "<<sizeof(chislo[0])<<endl;
return 0;
}*/
