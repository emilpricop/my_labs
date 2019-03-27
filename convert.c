#include <stdio.h>

void c_zp_b()
{
	int N, Ni,b[1000],i,k;
	system("clear");//inlocuieste pe Linux si MacOS functia clrscr() din conio.h
	printf("\n		***	Programe conversie ***\n");
	printf("Conversia unui numar zecimal intreg pozitiv in binar\n\n\n");
	do
	{
		printf("Introduceti numarul zecimal intreg pozitiv pentru conversie:");
		scanf("%d",&N);
		if (N<0) {printf("\nNumarul introdus nu este intreg pozitiv! Incercati din nou\n");}
	}
	while(N<0);
	Ni=N;
	k=0;
	while (N>0)
		{   printf("\n PAS %d",k);
			b[k]=N%2;
			printf(" VB %d",b[k]);
			N=N/2;
			printf(" NN %d",N);
		 	k++;
		}
	k=k-1;
	printf("Reprezentarea in binar a numarului %d este:", Ni);
	for (i=k;i>=0;i--)
	{
		printf("%d",b[i]);
	}
	scanf("%d",&i); // in loc de getch()
}

void meniu()
{
	char c;
	do
	{
		system("clear");//inlocuieste pe Linux si MacOS functia clrscr() din conio.h
		printf("\n		***	Programe conversie ***\n");
		printf("	Selectati una dintre umatoarele optiuni:\n\n");
		printf("1. Conversie numar zecimal intreg, pozitiv in binar\n");
		printf("E. Ieșire\n");
		printf("Optiune:");
		scanf("%c", &c);
		if (c=='1') {c_zp_b();}

	}
	while ((c!='E') && (c!='e'));
}
void main()
{
	meniu();
}