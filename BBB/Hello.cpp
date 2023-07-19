/*
 * Hello.cpp
 *
 *  Created on: 7 июн. 2023 г.
 *      Author: User
 */

#include <iostream>
using namespace std;

int ccc=50;
class dom {
	public:

	void pr()
	{

		for(int i=10; i>=1; i--){
			for(int w=0;w<=9-i; w++){
				cout<<" ";
			}
			for(int t=1; t<=i; t++){
							cout<<"*";

			}
						cout<<endl;
						}
//---------------------------
		for(int i=9; i>=0; i--){

					for(int w=0;w<=i-1; w++){
						cout<<" ";

			          }
					for(int t=0; t<=9-i; t++){
									cout<<"*";

					}
								cout<<endl;
								}

		//-------------
		for(int i=1; i<=10; i++){
		for(int t=1; t<=i; t++){
			cout<<"*";
		}
		cout<<endl;
		}


		for(int i=10; i>=1; i--){
				for(int t=1; t<=i; t++){
					cout<<"*";
				}
				cout<<endl;
				}
	}
}*D;

int main() {
	D->pr();
   return 0;
}
