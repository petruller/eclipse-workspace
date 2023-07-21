#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
 #include <iomanip>

using namespace std;

struct Person {
	int age;
	string name;
};

vector <Person> Per;
//vector <int> age;

string Mname[] = {"Alexander", "Dmitry", "Evgeny", "Ivan", "Kirill", "Maxim", "Nikolay", "Pavel", "Sergey", "Vladimir"};

int main()
{  int ran, nran;
	for(int i=0; i<20; i++)
	{ran= rand()%62+18;
	 nran=rand()%10;
		Per.push_back({ran,Mname[nran]});
	}
	cout << "Person list:"<<endl;
	for(auto el : Per)
		cout << el.name <<setw(12-el.name.length())<<el.age<<endl;

}
