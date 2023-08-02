#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
 #include <iomanip>
#include <algorithm>
#include <fstream>
using namespace std;

struct Person {
	int age;
	string name;
};
bool descendingComparator(int a, int b) {
    return a > b;
}
ofstream file;

vector <int> intdim = {24,40,52,23,42,27,51,46,30,32};
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
	for(int i=9; i>=0; i--)
	{ran= rand()%35+18;
	// nran=rand()%10;
		Per.push_back({intdim[i],Mname[i]});
//cout<<ran<<",";
	}
	cout << "Person list:"<<endl;
		for(auto el : Per)
			cout << el.name <<setw(12-el.name.length())<<el.age<<endl;
		cout<< endl<<endl;
/*//запись в файл
	file.open("1.txt");
	if (file.is_open()) {

	file << "Person list:"<<endl;
		for(auto el : Per)
			file << el.name <<setw(12-el.name.length())<<el.age<<endl;
		file<< endl<<endl;

	}
	file.close();
*/


	vector <Person> copper(Per); //копия векторов

	cout << "Person list copy:"<<endl;
	for(auto el : copper)
		cout << el.name <<setw(12-el.name.length())<<el.age<<endl;


}
