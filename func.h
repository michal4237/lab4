#include <iostream>
#include <string>

using namespace std;

void zmiana(string liczba,int dlugosc)
{
	char miliony=0, dziesiatki_tysiecy=0, setki_tysiecy=0, tysiace=0, setki=0, dziesiatki=0, jednosci=0;
	
	 switch (dlugosc)
	 {
	 	case 1:
	 		jednosci=liczba[0];
			break;
		case 2:
			dziesiatki=liczba[0];		 
			jednosci=liczba[1];
			break;
		case 3:
			setki=liczba[0];
			dziesiatki=liczba[1];
			jednosci=liczba[2];
			break;
		case 4:
			tysiace=liczba[0];
			setki=liczba[1];
			dziesiatki=liczba[2];
			jednosci=liczba[3];
			break;
		case 5:
			dziesiatki_tysiecy=liczba[0];
			tysiace=liczba[1];
			setki=liczba[2];
			dziesiatki=liczba[3];
			jednosci=liczba[4];
			break;
		case 6:
			setki_tysiecy=liczba[0];
			dziesiatki_tysiecy=liczba[1];
			tysiace=liczba[2];
			setki=liczba[3];
			dziesiatki=liczba[4];
			jednosci=liczba[5];
			break;
		case 7:
			miliony=liczba[0];
			setki_tysiecy=liczba[1];
			dziesiatki_tysiecy=liczba[2];
			tysiace=liczba[3];
			setki=liczba[4];
			dziesiatki=liczba[5];
			jednosci=liczba[6];
			break;
	 }
	 
	if (miliony=='1')cout << "milion ";
	switch (setki_tysiecy)
	{
		case 49: cout << "sto "; break;
		case 50: cout << "dwiescie "; break;
		case 51: cout << "trzysta "; break;
		case 52: cout << "czterysta "; break;
		case 53: cout << "piecset "; break;
		case 54: cout << "szescset "; break;
		case 55: cout << "siedemset "; break;
		case 56: cout << "osiemset "; break;
		case 57: cout << "dziewiecset "; break;
	}
	
	if (dziesiatki_tysiecy!=49)
		{
			switch (dziesiatki_tysiecy)
			{				
				case 50: cout << "dwadziescia "; break;
				case 51: cout << "trzydziesci "; break;
				case 52: cout << "czterdziesci "; break;
				case 53: cout << "piecdziesiat "; break;
				case 54: cout << "szescdziesiat "; break;
				case 55: cout << "siedemdziesiat "; break;
				case 56: cout << "osiemdziesiat "; break;
				case 57: cout << "dziewiecdziesiat "; break;
			}	
		
			if(dlugosc!=4)
				{
					switch (tysiace)
					{
						case 48: cout << "tysiecy " ; break;
						case 49: cout << "jeden tysiecy "; break;
						case 50: cout << "dwa tysiace "; break;
						case 51: cout << "trzy tysiace "; break;
						case 52: cout << "cztery tysiace "; break;
						case 53: cout << "piec tysiecy "; break;
						case 54: cout << "szesc tysiecy "; break;
						case 55: cout << "siedem tysiecy "; break;
						case 56: cout << "osiem tysiecy "; break;
						case 57: cout << "dziewiec tysiecy "; break;
					}
				}
			else if(dlugosc=4)	
				{
					switch (tysiace)
					{
						case 49: cout << "tysiac "; break;
						case 50: cout << "dwa tysiace "; break;
						case 51: cout << "trzy tysiace "; break;
						case 52: cout << "cztery tysiace "; break;
						case 53: cout << "piec tysiecy "; break;
						case 54: cout << "szesc tysiecy "; break;
						case 55: cout << "siedem tysiecy "; break;
						case 56: cout << "osiem tysiecy "; break;
						case 57: cout << "dziewiec tysiecy "; break;
					}
				}
		}

	else if (dziesiatki_tysiecy=49)
		{
			switch (tysiace)
			{
				case 48: cout << "dziesiec tysiecy " ; break;
				case 49: cout << "jedenaście tysiecy "; break;
				case 50: cout << "dwanascie tysiecy "; break;
				case 51: cout << "trzynascie tysiecy "; break;
				case 52: cout << "czternascie tysiecy "; break;
				case 53: cout << "pietnacie tysiecy "; break;
				case 54: cout << "szesnascie tysiecy "; break;
				case 55: cout << "siedemnascie tysiecy "; break;
				case 56: cout << "osiemnascie tysiecy "; break;
				case 57: cout << "dziewietnascie tysiecy "; break;
			}	
		}

	
	switch (setki)
	{
		case 49: cout << "sto "; break;
		case 50: cout << "dwiescie "; break;
		case 51: cout << "trzysta "; break;
		case 52: cout << "czterysta "; break;
		case 53: cout << "piecset "; break;
		case 54: cout << "szescset "; break;
		case 55: cout << "siedemset "; break;
		case 56: cout << "osiemset "; break;
		case 57: cout << "dziewiecset "; break;
	}
	
	if(dziesiatki!=49)
		{
			switch (dziesiatki)
			{				
				case 50: cout << "dwadziescia "; break;
				case 51: cout << "trzydziesci "; break;
				case 52: cout << "czterdziesci "; break;
				case 53: cout << "piecdziesiat "; break;
				case 54: cout << "szescdziesiat "; break;
				case 55: cout << "siedemdziesiat "; break;
				case 56: cout << "osiemdziesiat "; break;
				case 57: cout << "dziewiecdziesiat "; break;
		}	
	
			switch (jednosci)
			{
				case 49: cout << "jeden "; break;
				case 50: cout << "dwa "; break;
				case 51: cout << "trzy "; break;
				case 52: cout << "cztery "; break;
				case 53: cout << "piec "; break;
				case 54: cout << "szesc "; break;
				case 55: cout << "siedem "; break;
				case 56: cout << "osiem "; break;
				case 57: cout << "dziewiec "; break;
			}
		}
		
	else if(dziesiatki=49)
		{
						switch (jednosci)
			{
				case 48: cout << "dziesiec " ; break;
				case 49: cout << "jedenaście "; break;
				case 50: cout << "dwanascie "; break;
				case 51: cout << "trzynascie "; break;
				case 52: cout << "czternascie "; break;
				case 53: cout << "pietnacie "; break;
				case 54: cout << "szesnascie "; break;
				case 55: cout << "siedemnascie "; break;
				case 56: cout << "osiemnascie "; break;
				case 57: cout << "dziewietnascie "; break;
			}
		}	

	cout << endl;	
}
