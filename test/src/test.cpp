//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct Person{
	string name;
	int age;


};


vector <Person> per;
vector <int> a = {3,6,7,8};

 //using blya

string name[] = {"Alexander", "Dmitry", "Evgeny", "Ivan", "Kirill", "Maxim", "Nikolay", "Pavel", "Sergey", "Vladimir"};

int main()
{

cout<<"Hello!"<<endl;
for(int t1=0; t1<=20; t1++)
{
	int w=rand()%70+18;
	per.push_back({name[rand()%10], w});
}
for(int i=0; i<=20; i++)
a.push_back(i+35);
	//	cout<< a[i] << " ";

for(unsigned int t=0; t<a.size(); t++ )
	cout<< a[t]<<" ";

cout<<endl<<endl;
for(auto el : per)
	cout<<el.name << " - "<<el.age<<endl;

}
/*
struct Mot {
	char *a;
	char *b;
	char *c;


}moto[] ={
	"aaa","bbb","ccc",
    "ddd", "sss","aaa"
};

class My{
	public:

	int c=20;

void pruff(){
		for(int i=0; i<20; i++)
		{
		 cout<<"pruff"<<endl;
		}

	};
void	prufstruct(){ //2
		cout<< moto->a << moto->b<< moto->c;

	};
	private:
};

int main(){ //1

	My *moe;
	moe->pruff();
	moe->prufstruct();


	return 0;
};

*/
