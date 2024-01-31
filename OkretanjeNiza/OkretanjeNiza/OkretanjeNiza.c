// OkretanjeNiza.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{       
	int NizBrojeva[100];
	int i, UnetiBroj=0, BrojClanova, Temp;

	printf("Unesite broj clanova niza(N>0,N<100): ");
	scanf("%d", &BrojClanova);

	for (i = 0; i < BrojClanova; i++)
	{
		printf("Unesite vrednost %d. clana niza: ", i + 1);
		scanf("%d", &UnetiBroj);
		NizBrojeva[i] = UnetiBroj;
	}

	for (i = 0; i < BrojClanova; i++)
	{
		printf(" %d", NizBrojeva[i]);
	}

	for (i = 0; i < BrojClanova / 2; i++)
	{
		Temp = NizBrojeva[i];
		NizBrojeva[i] = NizBrojeva[BrojClanova - i - 1];
		NizBrojeva[BrojClanova - i - 1] = Temp;
	}

	printf("\n");

	for (i = 0; i < BrojClanova; i++)
	{
		printf(" %d", NizBrojeva[i]);
	}


	









	printf("\n");
	system("pause");
}

