#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
 #include <iomanip>
#include <algorithm>
using namespace std;

struct Person {
	int age;
	string name;
};
bool descendingComparator(int a, int b) {
    return a > b;
}


vector <int> intdim = {3,7,44,3,22,45,65,23,1,51,34,22,44};
vector <Person> Per;
//vector <int> age;

string Mname[] = {"Alexander", "Dmitry", "Evgeny", "Ivan", "Kirill", "Maxim", "Nikolay", "Pavel", "Sergey", "Vladimir"};

int main()
{//сортировка
	cout<<"vector sort:"<<endl;
	sort(intdim.begin(), intdim.end());
	for(auto il: intdim)
		cout<<il<<" ";

	cout<<endl;

	sort(intdim.begin(), intdim.end(), descendingComparator);
	for(auto il: intdim)
		cout<<il<<" ";
	cout<<endl<<endl;//сорткон


	int ran, nran;
	for(int i=0; i<20; i++)
	{ran= rand()%62+18;
	 nran=rand()%10;
		Per.push_back({ran,Mname[nran]});
	}
	cout << "Person list:"<<endl;
	for(auto el : Per)
		cout << el.name <<setw(12-el.name.length())<<el.age<<endl;
	cout<< endl<<endl;
	vector <Person> copper(Per); //копия векторов

	cout << "Person list copy:"<<endl;
	for(auto el : copper)
		cout << el.name <<setw(12-el.name.length())<<el.age<<endl;


}
