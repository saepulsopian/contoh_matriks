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
	//baris = i
	for (int i =0; i<3; i++)
	{
		//kolom = j
			for (int j=0; j<3; j++)
			{
				cin>>M [i] [j];
			}
	
	}
system ("CLS");
	for (int i =0; i<3; i++)
	{
		//kolom = j
			for (int j=0; j<3; j++)
			{
				cout<< "\n maka hasil :";
				cout<< M [i] [j];
			}
	
	}
	
	
	return 0;
}