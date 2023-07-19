#include <cstdlib>
#include <stdio.h>
# include <algorithm>
#include <iostream>
#include <vector>
#include <fstream>
 using namespace std;
 using std::vector;
struct person  {
    string name;
    int age;
};
vector<int> chislo;
vector<int> randchisl;
vector<string> str;
ofstream file;
void show_vector( vector<int>&a)
{
    for (vector<int>::iterator it = a.begin() ; it!=a.end() ; ++it)
        file<<*it << " ";
    file<<endl;
}
void show_vector_str( vector<string>&a)
{
    for (vector<string>::iterator it = a.begin() ; it!=a.end() ; ++it)
        file<<*it << " ";
    file<<endl;
}
int main()
{
	file.open("1.txt");
	for(int t=0; t<20;t++)
		str.push_back("c++");
	srand ( 1 );
	 for(int t=0; t<30;t++)
		 randchisl.push_back(rand()%100);

    for (int i=0;i <11;i++)
   chislo.push_back(i+4);

   cout <<"vector :"<<endl;
 // for(auto const& p: chislo)
//  copy(chislo.begin(), chislo.end(), std::ostream_iterator<int>(std::cout," ")) ;
   show_vector(chislo);
   cout <<endl;
   show_vector(randchisl);
   cout <<endl;
      show_vector_str(str);
      file.close();
    return 0;
}
