// AR 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//za unetih N clanova napraviti aritmeticku sredinu parnih i neparnih i naci
//najmanji neparni i najveci parni

void main()
{
	int BrojClanova, i, UnetiBroj, BrojParnih=0, BrojNeparnih=0, ZbirParnih = 0, ZbirNeparnih=0;
	double AritmetickaSredinaParnih, AritmetickaSredinaNeparnih ;

	printf("Uneti broj clanova: ");
	scanf("%d", &BrojClanova);
	
	for (i = 0; i < BrojClanova; i++)
	{
		printf("Unesite  %d. broj: ", i+1);
		scanf("%d", &UnetiBroj);

		if (UnetiBroj % 2 == 0)
		{
			BrojParnih++;
			ZbirParnih = ZbirParnih + UnetiBroj;
		}
		else
		{
			BrojNeparnih++;
			ZbirNeparnih = ZbirNeparnih + UnetiBroj;
		}
	}
	 
	/*if(BrojParnih == 0)
	{
		AritmetickaSredinaParnih = 0;
	}
	else
	{
		AritmetickaSredinaParnih = ZbirParnih / BrojParnih;
	}*/
	AritmetickaSredinaParnih = (BrojParnih == 0)? 0 : ZbirParnih / BrojParnih;

	if (BrojNeparnih == 0)
	{
		AritmetickaSredinaNeparnih = 0;
	}
	else
	{
		//U jeziku C kada se dele dva inta, bez obzira sto je na levoj strani double, 
		//kao rezultat dobijamo samo celobrojnu vrednost decimalnog broja.
		// ili delioc ili brojilac moramo promeniti u double
		AritmetickaSredinaNeparnih = ZbirNeparnih * 1.0 / BrojNeparnih;
	}
		
	

	printf("Aritmetcika sredina parnih je: %lf \n", AritmetickaSredinaParnih);
	printf("Aritmetcika sredina neparnih je: %lf \n", AritmetickaSredinaNeparnih);
	

	system("pause");
	
}

