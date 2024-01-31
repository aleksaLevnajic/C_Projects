// Bazen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	int  TrenutnaKolicinaVodeUBazenu=0, Vreme=0, ProtokVode=10, BrojM, BrojS, BrojH, OstatakMin;
	
	while (TrenutnaKolicinaVodeUBazenu < 50000)
   {
		Vreme++;
		
		if (Vreme > 60 && Vreme < 120)
		{
			ProtokVode = 20;
			
		}
		else if (Vreme > 120)
		{
			ProtokVode = 30;
		}

		TrenutnaKolicinaVodeUBazenu = TrenutnaKolicinaVodeUBazenu + ProtokVode;
		printf("%d %d\n", Vreme, TrenutnaKolicinaVodeUBazenu);
   }

	/*BrojS = Vreme % 60;
	OstatakMin = Vreme - BrojS;	
	BrojM = ( Vreme % 3600 ) / 60; 
	BrojH = ( OstatakMin - BrojM ) / 3600;*/
	
	BrojH = (Vreme - (Vreme % 3600)) / 3600;
	Vreme -= BrojH * 3600;
	BrojM = (Vreme - (Vreme % 60)) / 60;
	BrojS = Vreme - BrojM * 60;


	if (BrojH > 10)
	{
		printf("%d", BrojH);
	}
	else if(BrojH < 10 && BrojH > 0)
	{
		printf("0%d", BrojH);
	}
	else
	{
		printf("00");
	}


	printf(":");

	if (BrojM > 10)
	{
		printf("%d", BrojM);
	}
	else if(BrojM < 10 && BrojM > 0)
	{
		printf("0%d", BrojM);
	}
	else
	{
		printf("00");
	}

	printf(":");

	if (BrojS > 10)
	{
		printf("%d", BrojS);
	}
	else if (BrojS < 10 && BrojS > 0)
	{
		printf("0%d", BrojS);
	}
	else
	{
		printf("00");
	}
	printf("\n");

	printf("Bazen je napunjen za %d:%d:%d", BrojH, BrojM, BrojS );
	printf("\n");
	
	system("pause");
}
