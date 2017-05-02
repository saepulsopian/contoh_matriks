/*
* Nama : Saepul S
* Kelas : TIFRM 16C
* NIM : 16.111.255
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main () 
{
	
	int M [3] [3];
	int M1 [3] [3];
	int M2 [3] [3];
	
	//baris = i
	for (int i =0; i<3; i++)
	{
		//kolom = j
			for (int j=0; j<3; j++)
			{
				cout<< "M1 :"; 
				cin>>M1 [i] [j];
				cout<< "M2 :";
				cin>>M2 [i] [j];
			}
	
	}
	system ("CLS");
	for (int i =0; i<3; i++)
	{
		//kolom = j
			for (int j=0; j<3; j++)
			{
				
				M [i] [j] = M1 [i] [j] + M2 [i] [j];
			}
	
	}
	
	for (int i =0; i<3; i++)
	{
		//kolom = j
			for (int j=0; j<3; j++)
			{
				cout<< "\n maka nilai :";
				cout<< M [i] [j];
			}
	
	}
	
	
	return 0;
}