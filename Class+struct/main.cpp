/*
 * main.cpp
 *
 *  Created on: 9 июн. 2023 г.
 *      Author: User
 */

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <iomanip>

using namespace std;

using std::setw;
ofstream out;


/*class Motor
   {
 public :
string getname(){
cout <<"name : " << Name <<endl;
};
private :
string Name;
   }*m;
*/

struct Motinf
   {
    string name;
    string oboroty;
    string type;
    string year;
   };

string Ravnylka(string S1)
{
string F, S=S1;
if(S.length()<=13){
	S = S+" ";

	F=Ravnylka(S);//l
	return F;
	}
else
	return S;

}

int main(){

	Motinf motory[20]{
"Honda",
"10 000",
"benzin",
"1999",

"kakoyto",
"5 000",
"electro",
"1999"

	};

for(int l=2;l<=19;l++)
	{
	motory[l].name="test";
	motory[l].oboroty="8 000";
	motory[l].type="kvant";
	motory[l].year="2022";
	}


	cout<<"Motor list"<<endl<<endl;
	// cout<<setw(10)<<"Name:"<<setw(10)<<" |Oboroty:"<<setw(7)<<" |Type:"<<setw(10)<< " |Year:"<<endl<<endl;

	 out.open("list.txt");      // открываем файл для запи
	    if (out.is_open())
	    {out<<"Motor list"<<endl<<endl;
	    out<<setw(10)<<"Name:"<<setw(10)<<" |Oboroty:"<<setw(7)<<" |Type:"<<setw(10)<< " |Year:"<<endl<<endl;
	    	for(int i=0; i<=19; i++)
	    	{
	    		out<<setw(10)<<motory[i].name<< " | " <<setw(7)<< motory[i].oboroty <<" | "<< setw(7)<<motory[i].type << " | " <<setw(6)<<motory[i].year <<endl;
	    		  }

	    }
	    out.close();

	std::cout << "File has been written" << endl;


/*
 for(int i=0; i<=19; i++)
  {

  cout<<setw(10)<<motory[i].name<< " | " <<setw(7)<< motory[i].oboroty <<" | "<< setw(7)<<motory[i].type << " | " <<setw(6)<<motory[i].year <<endl;
  }
*/
}
