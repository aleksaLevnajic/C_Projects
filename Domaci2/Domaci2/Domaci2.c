// Domaci2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()

{
	int UnetiBroj, BrojParnih = 0, BrojNeparnih=0, i, Faktorijal = 0, ZbirParnih=0, ZbirNeparnih=0;

	printf("Unesite broj: ");
	scanf("%d", &UnetiBroj);

	
	for ( i = 1; i <= UnetiBroj; i = i + 1)
	{	   
		if (i % 2 == 0)
		{
			BrojParnih ++;
			ZbirParnih += i;
		}
		else
		{
			BrojNeparnih = BrojNeparnih + 1;
			ZbirNeparnih += i;
		}

		//Faktorijal = Faktorijal + i;
		Faktorijal += i;

		}
	
	printf("Zbir parnih je: %d, a zbir neparnih je: %d.\n", ZbirParnih, ZbirNeparnih);
	
	printf("Parnih brojeva ima: %d.  \nNeparnih ima: %d. \nFaktorijal unetog broja je: %d.", BrojParnih, BrojNeparnih, Faktorijal);

		
	
	printf("\n");
	system("pause");
    return 0;
}

