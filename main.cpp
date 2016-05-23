#include <iostream>
#include <string>
#include "func.h"

using namespace std;

int main(int argc, char *argv[])
{

	string liczba;
	int dlugosc;
	
	for(int i=0; i<=7; i++)liczba[i]=0;
	
	liczba=argv[1];

	for(int i=0; i<=7; i++)
	{
			if (liczba[i] !=0) dlugosc = i+1;
			else break;
			   	
	}
		

	zmiana(liczba,dlugosc);

}
