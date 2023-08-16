
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

void pokazat_massiv(){
		 for(int i=1; i<=3; i++)
		 {
		cout<<i<<" "<<st1<<endl;

		 }
	 }
///////////////
void delenie()
{
char *tokenst;
char st3[30];
strcpy(st3,st1);
	  tokenst=strtok(st3," ");

	    while(tokenst!=NULL)
	  {
        cout<<tokenst<<'\n';
		  tokenst=strtok(NULL, " ");
	  }
}

	 private:
//char st3[]="Put on the old blue song";
//char *st1="Put on the old blue song";
char *st1="Let all the trable be gone";
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
obj = new dimstrok;
	      strcat(st2," hahaha");
	      cout<<st2<<endl;

for(auto el: vsss)
	cout<<el<<" ";

cout<<endl;
obj->pokazat_massiv();
obj->delenie();

obj->Hello();


return 0;
  }
