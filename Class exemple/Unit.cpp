
#include <vector>
#include <fstream>
#include <string.h>
 #include <iomanip>
#include <cstring>
#include <iostream>
using namespace std;
 using std::cout;
using std::endl;


class dimstrok{
public:
void Hello();

void pokazat_massiv(char s[]){
		 for(int i=1; i<=3; i++)
		 {
		cout<<i<<" "<<s<<endl;

		 }
	 }
///////////////
void delenie(char *a)
{
char *tokenst;

	  tokenst=strtok(a," ");

	    while(tokenst!=NULL)
	  {
        cout<<tokenst<<'\n';
		  tokenst=strtok(NULL, " ");
	  }
}

	 private:

string st1="Put on the old blue song";

 };


vector <string> vsss = {"aaa","bbb","ccc","ddd"};

 // vector <string> vsss(sss,sss+4);

char st2[]="Put on the old blue song";

//void zero(long a[]); //прототип
void dimstrok::Hello()
{
cout <<"Hello world!"<<endl;

 }
int main()
  {
	dimstrok *obj;

	      strcat(st2," hahaha");
	      cout<<st2<<endl;

for(auto el: vsss)
	cout<<el<<" ";

cout<<endl;
obj->pokazat_massiv(st2);
obj->delenie(st2);

obj->Hello();


return 0;
  }
