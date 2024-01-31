// StudentiPopravka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	struct Student {
	 char Prezime[50];
	 char Ime[50];
	 int  BrojIndexa;
	 int  GodinaRodjenja;	
	};

	int UnetiBroj, i, BrojIndexa, GodinaRodjenja;
	char Ime[25], Prezime[25];
	struct Student studenti[100];

	printf("Unesite broj studenata: ");
	scanf("%d", &UnetiBroj);

	for (i = 0; i < UnetiBroj; i++)
	{
	    pritnf("Unesite ime %d. ucenika: ", i + 1);
		scanf("%c", &Ime);

		pritnf("Unesite prezime %d. ucenika: ", i + 1);
		scanf("%c", &Prezime);

		pritnf("Unesite broj indexa %d. ucenika: ", i + 1);
		scanf("%d", &BrojIndexa);

		pritnf("Unesite godinu rodjenja %d. ucenika: ", i + 1);
		scanf("%d", &GodinaRodjenja);

		studenti[i].BrojIndexa == Ime;
		studenti[i].Prezime == Prezime;
		studenti[i].BrojIndexa == BrojIndexa;
		studenti[i].GodinaRodjenja == GodinaRodjenja;


		printf("\n");
		system("pause");

		return 0;
	}
}

