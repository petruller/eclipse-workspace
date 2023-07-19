#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
struct Person  {
    char name[12];//7
    int oboroty;
    char type[12];//7
    int year;
    char a[10];//4
    char b[12];//7
    char c[10];//5
    char d[10];//5
};

int razstruct=9;

void record_r()
{
	  Person moto[razstruct];
	    		  for(int i=0; i<=razstruct; i++)
	    				{
	    			  strcpy( moto[i].name,"Yamaha");
	    			//  moto[i].name = "Yamaha";
	    			 moto[i].oboroty = 12000;
	    			  strcpy(moto[i].type,"benzin");

	    			  moto[i].year =1998;
	    			  strcpy(moto[i].a, "red");
	    			  strcpy(moto[i].b, "normal");
	    			  strcpy(moto[i].c, "NULL");
	    			  strcpy(moto[i].d, "TRUE");

	    				}


	   ofstream file("struct.txt");
	    if (file.is_open()) {
	      for(int i=0; i<=razstruct; i++)
	      {
	    	  file.write((char *)&moto[i], sizeof(moto[i]));
	    	//file<< moto[i].name << " "<< moto[i].oboroty << " " <<moto[i].type << " " << moto[i].year<< " "<<moto[i].a<<" "<<moto[i].b<<" "<<moto[i].c<<" "<<moto[i].d<<endl;
	      }
	        file.close();





	       cout << "Record" << endl;
	       for(int i=0; i<=razstruct; i++)
	            {
	          	cout << moto[i].name << " "<< moto[i].oboroty << " " <<moto[i].type
	          			<< " " << moto[i].year<< " "<<moto[i].a<<" "<<moto[i].b<<" "<<moto[i].c<<
						" "<<moto[i].d<<endl;
	            }
	    } else {
	          cout << "Fail" << std::endl;
	       }
}

void read_d()
{

	       		ifstream yp;
	       		yp.open("struct.txt",ios::binary);
	       		Person mot[razstruct];




	       	for(int w=0; w<razstruct; w++)
	       	{
	       		yp.read((char *)&mot[w],sizeof(mot[w]));
	       		cout<<mot[w].name<<endl;

	       	}
	       	cout<<endl;
	       	for(int w=0; w<razstruct; w++)
	       		{
	       			yp.read((char *)&mot[w],sizeof(mot[w]));
	       			cout<<mot[w].oboroty<<endl;

	       		}
	       	cout<<endl;
	       		for(int w=0; w<razstruct; w++)
	       			{
	       				yp.read((char *)&mot[w],sizeof(mot[w]));
	       				cout<<mot[w].type<<endl;

	       			}
	       		cout<<endl;
	       			for(int w=0; w<razstruct; w++)
	       				{
	       					yp.read((char *)&mot[w],sizeof(mot[w]));
	       					cout<<mot[w].year<<endl;

	       				}
	       	yp.close();

}

void dopis_f()
{
	  Person moped[razstruct];
		    	     		  for(int i=0; i<razstruct; i++)
		    	     				{
		    	     			  strcpy( moped[i].name,"Yamaha");
		    	     			//  moto[i].name = "Yamaha";
		    	     			 moped[i].oboroty = 12000;
		    	     			  strcpy(moped[i].type,"benzin");

		    	     			  moped[i].year =1998;
		    	     			  strcpy(moped[i].a, "red");
		    	     			  strcpy(moped[i].b, "normal");
		    	     			  strcpy(moped[i].c, "NULL");
		    	     			  strcpy(moped[i].d, "TRUE");

		    	     				}


		    	    ofstream file;//("structf.txt");
		    	    file.open("structf.txt", std::ios::app); //дописать файл
		    	     if (file.is_open()) {
		    	    	 for(int i=0; i<razstruct; i++)
		    	    	            {
		    	    	          	file << moped[i].name << " "<< moped[i].oboroty << " " <<moped[i].type
		    	    	          			<< " " << moped[i].year<< " "<<moped[i].a<<" "<<moped[i].b<<" "<<moped[i].c<<
		    	    						" "<<moped[i].d<<endl;
		    	    	            }
		    	    	file.close();
		    	    	cout<<"record is done";
		    	     }else{cout<<"error";}

}

void readfile_rf()
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
void help()
{
	   cout<<"hello worldm mlia!"<<endl;
		    	   cout<<"  arg "<<endl;
		    			   cout<<"r - record struct in \"struct.txt\""<<endl;
						   cout<<"d - read struct colums"<<endl;
						   cout<<"f - dopisat` file \"structf.txt\""<<endl;
						   cout<<"fr - read \"structf.txt\""<<endl;
						   cout<<"rl - record line in file"<<endl;
}

void recordline_rl(char * a, char * b, char * c, char * d, char *e, char *f, char * g, char * h)
{
	  Person moped;

		       	    	     			  strcpy( moped.name,a);

		       	    	     			 moped.oboroty =atoi(b);
		       	    	     			  strcpy(moped.type,c);

		       	    	     			  moped.year =atoi(d);
		       	    	     			  strcpy(moped.a, e);
		       	    	     			  strcpy(moped.b, f);
		       	    	     			  strcpy(moped.c, g);
		       	    	     			  strcpy(moped.d, h);




		       	    	    ofstream file;//("structf.txt");
		       	    	    file.open("structf.txt", std::ios::app); //дописать файл
		       	    	     if (file.is_open()) {
		       	    	    	// for(int i=0; i<=8; i++)
		       	    	    	  //          {
		       	    	    	          	file << moped.name << " "<< moped.oboroty << " " <<moped.type
		       	    	    	          			<< " " << moped.year<< " "<<moped.a<<" "<<moped.b<<" "<<moped.c<<
		       	    	    						" "<<moped.d<<endl;
		       	    	    	      //      }
		       	    	    	file.close();
		       	    	    	cout<<"record is done";
		       	    	     }else{cout<<"error";}

}

void read()
{
	  cout<<"read"<<endl;
		    	   int r=0;
		    	   	ifstream yp;
		    	   	yp.open("struct.txt",ios::binary);
		    	    Person mot[razstruct];
		    	   	while(!yp.eof())
		    	   	{
		    	   		if(r==razstruct)
		    	   		goto m;

		    	   		yp.read((char *)&mot[r],sizeof(mot[r]));

		cout << mot[r].name << " "
				<<mot[r].oboroty <<" "
				<< mot[r].type << " "
				<< mot[r].year<<" "<<mot[r].a<<" "<<mot[r].b<<" "<<mot[r].c<<" "<<mot[r].d<<r<<endl;
		    	   	r++;
		    	   	}
		    	   m:	   yp.close();
}

int main(int argc, char* argv[]) {
	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	       {

	if(!strcmp(argv[1], "r"))
		{
        record_r();


	       } else if (!strcmp(argv[1], "d"))
	       {
	     read_d();
	       }
	       else if(!strcmp(argv[1], "f"))
		   {
	    	   dopis_f();
		   }//else "f"
	       else if (!strcmp(argv[1], "rf"))
	       {
	    	   readfile_rf();

	       }//rf
	       else if (!strcmp(argv[1], "h"))
	      	       {
	    	 help();
	      	       }//-h
	       else if(!strcmp(argv[1], "rl"))
	       		   {
	    	   recordline_rl(argv[2],argv[3],argv[4],argv[5],argv[6],argv[7],argv[8],argv[9]);
	       		   }//rl
	       }//arg 1



	else{//r

	    	 read();
	       //else r
	       }//arg



    return 0;
}
