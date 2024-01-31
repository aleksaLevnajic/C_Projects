// SortiranjeNiza.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{   
	int NizBrojeva[100];
	int i, BrojClanova, UnetiBroj, Min=0, Temp, RaditiSortiranje = 1;
	
	printf("Unesite broj clanova: ");
	scanf("%d", &BrojClanova);

	for (i = 0; i < BrojClanova; i++)
	{
		printf("Unesite %d. clan niza: ", i+1);
		scanf("%d", &UnetiBroj);
		NizBrojeva[i] = UnetiBroj;
	}

	for (i = 0; i < BrojClanova; i++)
	{
		printf(" %d", NizBrojeva[i]);
	}

	while (RaditiSortiranje)
	{	 
		for (i = 1; i < BrojClanova; i++)
		{
			if (NizBrojeva[i - 1] > NizBrojeva[i])
			{
				Temp = NizBrojeva[i - 1];
				NizBrojeva[i - 1] = NizBrojeva[i];
				NizBrojeva[i] = Temp;
				break;
			}		
			else if (i == BrojClanova - 1)
			{
				RaditiSortiranje = 0;
			}						
		}
		printf("\n");
		for (i = 0; i < BrojClanova; i++)
		{
			printf(" %d", NizBrojeva[i]);
		}
	}
	printf("\n");
	for (i = 0; i < BrojClanova; i++)
	{
		printf(" %d", NizBrojeva[i]);
	}


	printf("\n");
	system("pause");
}

