/*
 * buble.cpp
 *
 *  Created on: 24 сент. 2023 г.
 *      Author: User
 */
#include <iostream>
//#include <fstream>
using namespace std;

int mas[]={66,67,2,54,56,77,88,55,43,22,5,47,47,6,8,76,54,81,13,16,26,29,38,1,9,27,4,51};
int n=28;
void bubbleSort(int arr[], int n1) {
    int i, j;
    for (i = 0; i < n1-1; i++) {
        for (j = 0; j < n1-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void dispEl( int low, int high )
 {
 for ( int i = 0; i < low-2; i++ ) // пробелы для выравнивания
 cout << "   ";

 for ( int i = low; i <= high; i++ ) // вывести оставшиеся
 cout << mas[ i ] << " ";

 cout << endl;
 }
int main()
{
int a=6;
    // n = sizeof(mas)/sizeof(mas[0]);
    bubbleSort(mas, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl<<"count: "<<n<<endl<<"found number: "<<a<<endl;
   // cin>>a;

//search(5);
    int low =0;
    int high=n-1;
    int middle = (low+high+1)/2;
    int location=0;

    do
    {
    dispEl(low,high);

    for(int i=0; i<middle*2+10; i++)
    	cout<< " ";

    cout<< " * "<<endl;
     if(a==mas[middle])
     {	 location = middle;
     cout<<"location is:"<<location+1;
     break;
     }
     else if(a<mas[middle])
    	 high=middle-1;
     else
    	 low = middle+1;

     middle = (low+high+1)/2;

    }while(low<=high);


	return 0;
}

