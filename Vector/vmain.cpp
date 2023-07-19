
// #include <iomanip> //time
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Person  {
    string name;//7
    int oboroty;
    string type;//7
   int year;
   string a;//4
   string b;//7
   string c;//5
   string d;//5*/
 //   Person(const std::string& _s, const std::string& _t): name(_n), type(_t) {};

};

void vyvod()
{

Person per;
vector <Person> Pervec;
for(int i=0; i<10; i++){
per.name="Hengrin";
per.oboroty = 12000;
per.type="good";
per.year =1995;
per.a= "tyn";
per.b= "tyn";
per.c= "tyn";
per.d= "tyn";
Pervec.push_back(per);
}




for(auto const& p: Pervec)
cout<<per.name<<" "<<per.oboroty<< " "<<per.type<<" "<<per.year<<" "
		<<per.a<<" "<<per.b<<" "<<per.c<<" "<<per.d<<  endl;



}

void recfile()
{

	Person per;
	vector <Person> Pervec;
	for(int i=0; i<10; i++){
	per.name="Hengrin";
	per.oboroty = 12000;
	per.type="good";
	per.year =1995;
	per.a= "tyn";
	per.b= "tyn";
	per.c= "tyn";
	per.d= "tyn";
	Pervec.push_back(per);
	}

	ofstream file;//("structf.txt");
			       	    	    file.open("structf.txt", std::ios::app); //дописать файл
			       	    	     if (file.is_open()) {
			       	    	    	// for(int i=0; i<=8; i++)
			       	    	    	  //          {



	for(auto const& p: Pervec)
	file<<per.name<<" "<<per.oboroty<< " "<<per.type<<" "<<per.year<<" "
			<<per.a<<" "<<per.b<<" "<<per.c<<" "<<per.d<<  endl;

			       	    	     cout<<"record is done"<<endl;
   }else{cout<<"error"<<endl;}
}


void readfile()
{
	ifstream file("structf.txt");
		       	string str;
		       	string file_contents;
		       	while (std::getline(file, str))
		       	{
		       	 cout<< str<<endl;//file_contents += str;
		       	  //file_contents.push_back('\n');
		       	}
}


void dopis_f()
{
	Person per;
	vector <Person> Pervec;
	for(int i=0; i<10; i++){
	per.name="Hengrin";
	per.oboroty = 12000;
	per.type="good";
	per.year =1995;
	per.a= "tyn";
	per.b= "tyn";
	per.c= "tyn";
	per.d= "tyn";
	Pervec.push_back(per);
	}





		    	    ofstream file;//("structf.txt");
		    	    file.open("structf.txt", std::ios::app); //дописать файл
		    	     if (file.is_open()) {


		    	    		for(auto const& p: Pervec)
		    	    		file<<per.name<<" "<<per.oboroty<< " "<<per.type<<" "<<per.year<<" "
		    	    				<<per.a<<" "<<per.b<<" "<<per.c<<" "<<per.d<<  endl;

		    	    				       	    	     cout<<"record is done"<<endl;


		    	    	file.close();

		    	     }else{cout<<"error"<<endl;}

}

void help()
{
	cout <<"Enter command: v - vyvod, rf - recfile, f-readfile, df- dopis, h-help, c - CLOSE"<<endl;

}
int main()
{
	char op = 'a';
	string a;
	int w;
help();
while(op){
cin>>op;
switch(op){
	case 'v': vyvod();
break;

	case 'rf': recfile();
		break;
case 'f': readfile();
		break;
case 'df': dopis_f();
		break;
case 'h': help();
		break;
case 'c': cout<<"close"<<endl;
		return 0;
default: cout<< "no command"<<endl;
}

}

/*
	vector <string> str = {"hello","world","giiii"};
	for(int t=0; t<10;t++)
		str.push_back("malina");

	str.insert(str.begin(),"metla");
	for(int i=0; i<13; i++)
		cout << str.at(i)<< "  ";
*/

}



