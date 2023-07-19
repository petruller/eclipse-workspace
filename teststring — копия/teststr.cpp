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

int main(int argc, char* argv[]) {

	if (argc > 1)// если передаем аргументы, то argc будет больше 1(в зависимости от кол-ва аргументов)
	       {
		if(!strcmp(argv[1], "r"))
		{
    Person moto[9];
    		  for(int i=0; i<=8; i++)
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
      for(int i=0; i<=9; i++)
      {
    	  file.write((char *)&moto[i], sizeof(moto[i]));
    	//file<< moto[i].name << " "<< moto[i].oboroty << " " <<moto[i].type << " " << moto[i].year<< " "<<moto[i].a<<" "<<moto[i].b<<" "<<moto[i].c<<" "<<moto[i].d<<endl;
      }
        file.close();





       cout << "Record" << endl;
       for(int i=0; i<=9; i++)
            {
          	cout << moto[i].name << " "<< moto[i].oboroty << " " <<moto[i].type
          			<< " " << moto[i].year<< " "<<moto[i].a<<" "<<moto[i].b<<" "<<moto[i].c<<
					" "<<moto[i].d<<endl;
            }

    } else {
       cout << "Fail" << std::endl;
    }
	       } else if (!strcmp(argv[1], "d"))
	       {
	       	int r=0;
	       		ifstream yp;
	       		yp.open("struct.txt",ios::binary);
	       		Person mot[9];



	       	r=0;
	       	for(int w=0; w<9; w++)
	       	{
	       		yp.read((char *)&mot[w],sizeof(mot[w]));
	       		cout<<mot[w].name<<endl;

	       	}
	       	cout<<endl;
	       	for(int w=0; w<9; w++)
	       		{
	       			yp.read((char *)&mot[w],sizeof(mot[w]));
	       			cout<<mot[w].oboroty<<endl;

	       		}
	       	cout<<endl;
	       		for(int w=0; w<9; w++)
	       			{
	       				yp.read((char *)&mot[w],sizeof(mot[w]));
	       				cout<<mot[w].type<<endl;

	       			}
	       		cout<<endl;
	       			for(int w=0; w<9; w++)
	       				{
	       					yp.read((char *)&mot[w],sizeof(mot[w]));
	       					cout<<mot[w].year<<endl;

	       				}
	       	yp.close();

	       }
	       else if(!strcmp(argv[1], "f"))
		   {
	    	   Person moped[9];
	    	     		  for(int i=0; i<=8; i++)
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
	    	    	 for(int i=0; i<=8; i++)
	    	    	            {
	    	    	          	file << moped[i].name << " "<< moped[i].oboroty << " " <<moped[i].type
	    	    	          			<< " " << moped[i].year<< " "<<moped[i].a<<" "<<moped[i].b<<" "<<moped[i].c<<
	    	    						" "<<moped[i].d<<endl;
	    	    	            }
	    	    	file.close();
	    	    	cout<<"record is done";
	    	     }else{cout<<"error";}

		   }//else "f"
	       else if (!strcmp(argv[1], "rf"))
	       {
	       	ifstream file("structf.txt");
	       	string str;
	       	string file_contents;
	       	while (std::getline(file, str))
	       	{
	       	 cout<< str<<endl;//file_contents += str;
	       	  //file_contents.push_back('\n');
	       	}

	       }//rf
	       else if (!strcmp(argv[1], "-h"))
	      	       {
	    	   cout<<"hello worldm mlia!"<<endl;
	    	   cout<<"  arg "<<endl;
	    			   cout<<"r - record struct in \"struct.txt\""<<endl;
					   cout<<"d - read struct colums"<<endl;
					   cout<<"f - dopisat` file \"structf.txt\""<<endl;
					   cout<<"rf - read \"structf.txt\""<<endl;
					   cout<<"rl - record line in file"<<endl;
	      	       }//-h
	       else if(!strcmp(argv[1], "rl"))
	       		   {
	       	    	   Person moped;

	       	    	     			  strcpy( moped.name,argv[2]);

	       	    	     			 moped.oboroty =atoi(argv[3]);
	       	    	     			  strcpy(moped.type,argv[4]);

	       	    	     			  moped.year =atoi(argv[5]);
	       	    	     			  strcpy(moped.a, argv[6]);
	       	    	     			  strcpy(moped.b, argv[7]);
	       	    	     			  strcpy(moped.c, argv[8]);
	       	    	     			  strcpy(moped.d, argv[9]);




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

	       		   }//rl
	       }//arg 1
	else{//r
//сюда
	    	   cout<<"read"<<endl;
	    	   int r=0;
	    	   	ifstream yp;
	    	   	yp.open("struct.txt",ios::binary);
	    	    Person mot[9];
	    	   	while(!yp.eof())
	    	   	{
	    	   		if(r==9)
	    	   		goto m;

	    	   		yp.read((char *)&mot[r],sizeof(mot[r]));

	cout << mot[r].name << " "
			<<mot[r].oboroty <<" "
			<< mot[r].type << " "
			<< mot[r].year<<" "<<mot[r].a<<" "<<mot[r].b<<" "<<mot[r].c<<" "<<mot[r].d<<r<<endl;
	    	   	r++;
	    	   	}
	    	   m:	   yp.close();
	       //else r
	       }//arg



    return 0;
}
