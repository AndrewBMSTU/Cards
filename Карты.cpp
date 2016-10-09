// Карты.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <fstream>
 
using namespace std;


long long int i,j,N,Nbuf;
long long int sum[3], Good[50000];

int main()
{
	cin >> N;
	for (i=0; i<3; i++)
	{
		cin >> sum[i];
	}

	Nbuf = N-3;

	for (i=1; i<N; i++)
	{
		
		 sum =  i;
		j=i;	
			for (k=1; k<=Nbuf; k++)
		 {
			 sum = sum+j;
			 j = j+1;

		 }


		
	}


	for (i=1; i<50000; i++)
	{
		for (j=1; j<50000; j++)
	{
	}
	}
	while (1)
	{
		cout<< "hey";
	}
	return 0;
}
