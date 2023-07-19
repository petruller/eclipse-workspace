//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
using namespace std; //using blya

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

/*
#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <fstream>

struct Motinf
   {
	string name;
	string oboroty;
   string type;
string year;
   };





int main() {
	//запись
	// int r;

	Motinf save[3];

		 //  for(int i=0; i<=2; i++)
				{
				save[0].name=  "www";
				save[0].oboroty=  "eee";
				save[0].type=  "rrr";
				save[0].year=  "ttt";
				}

		  ofstream fo("struct.txt", ios::binary);		//Записываем массив O в файл, бинарный режим
			if (!fo)
			{
				cout<<"false77";

			}else{
		  fo.write((char*)save, sizeof(Motinf));
		  fo.close();
cout<<"ok";}



			cout <<save[0].name<<save[0].oboroty<<save[0].type<<save[0].year;
	/*
// чтение
	Motinf motory1[20];
	int r;
	ifstream yp;
	yp.open("struct.txt");
	while(!yp.eof())
	{
	yp >> motory1[r].name;
	yp >>  motory1[r].oboroty;
	yp >> motory1[r].type;
	yp >>  motory1[r].year;
	r++;
	}
	   yp.close();
cout<<"hoy:";
		for(int i=0; i<=19; i++)
				{

			cout << motory1[i].name << " " <<motory1[i].oboroty <<" " <<
					motory1[i].type << " "<< motory1[i].year<<endl;
				}
	return 0;
}
*/
