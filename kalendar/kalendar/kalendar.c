// kalendar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{    
	int UnetaGodina, BrojDanaUGodini, RedniBrojDanaUGodini =0, brojDanaUMesecu;

	printf("Unesite godinu: ");
	scanf("%d", &UnetaGodina);



	if (UnetaGodina % 4 == 0)
	{
		BrojDanaUGodini = 366;
	}
	else
	{
		BrojDanaUGodini = 365;
	}


	for (int brojMeseca = 1; brojMeseca <= 12; brojMeseca++)
	{
		switch (brojMeseca)
		{
			case 1:
				printf("Januar\n");
				brojDanaUMesecu = 31;
			break;
			case 2:
				printf("Februar\n");
				brojDanaUMesecu = BrojDanaUGodini == 365 ? 28 : 29;
				break;
			case 3:
				printf("Mart\n");
				brojDanaUMesecu = 31;
				break;
			case 4:
				printf("April\n");
				brojDanaUMesecu = 30;
				break;
			case 5:
				printf("Maj\n");
				brojDanaUMesecu = 31;
				break;
			case 6:
				printf("Jun\n");
				brojDanaUMesecu = 30;
				break;
			case 7:
				printf("Jul\n");
				brojDanaUMesecu = 31;
				break;
			case 8:
				printf("Avgust\n");
				brojDanaUMesecu = 31;
				break;
			case 9:
				printf("Septembar\n");
				brojDanaUMesecu = 30;
				break;
			case 10:
				printf("Oktobar\n");
				brojDanaUMesecu = 31;
				break;
			case 11:
				printf("Novembar\n");
				brojDanaUMesecu = 30;
				break;
			case 12:
				printf("Decembar\n");
				brojDanaUMesecu = 31;
				break;
		}

		for (int redniBrojDanaUMesecu = 1; redniBrojDanaUMesecu <= brojDanaUMesecu; redniBrojDanaUMesecu++) 
		{
			printf("%d. ", redniBrojDanaUMesecu);
			switch (++RedniBrojDanaUGodini % 7)
			{
				case 1: 
					printf("Ponedeljak\n");
					break;
				case 2:
					printf("Utorak\n");
					break;
				case 3:
					printf("Sreda\n");
					break;
				case 4:
					printf("Cetvrtak\n");
					break;
				case 5:
					printf("Petak\n");
					break;
				case 6:
					printf("Subota\n");
					break;
				default:
					printf("Nedelja\n");
					break;
			}
		}
	}

    system("pause");
    return 0;
}

