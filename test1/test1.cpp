#include <cstdlib>
#include <stdio.h>
# include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
#include<string>

 using namespace std;
 using std::vector;
 bool descendingComparator(int a, int b) {
     return a > b;
 }


vector <int> intdim = {3,7,44,3,22,45,65,23,1,51,34,22,44};
int main(){

	sort(intdim.begin(), intdim.end());
for(auto il: intdim)
	cout<<il<<" ";

cout<<endl;

sort(intdim.begin(), intdim.end(), descendingComparator);
for(auto il: intdim)
	cout<<il<<" ";

return 0;
}












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
