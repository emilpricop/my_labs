#include <stdio.h>
#include <math.h>
//Declarare variabile globale
int t0, t1;
int calcul(int j)
{
	/* Functia calcul este recursiva si calculeaza valoarea termenului j.
	// Daca j=0, functia trebuie sa returneze valoarea lui t0
	// Daca j=1, functia trebuie sa returneze valoarea lui t1
	// Daca j>1, functia trebuie sa se apeleze recursiv si sa returneze valoarea calculata
	*/
	if (j==0) {return t0;}
		else 
		{
		 	if (j==1) {return t1;}
				else {return calcul(j-2)+pow(calcul(j-1),2);}
		}
}
void main()
{
	//Declarare variabile locale
	int n, k;

	//Citire date de intrare
	printf("Introduceti t0: ");scanf("%d",&t0);
	printf("Introduceti t1: ");scanf("%d",&t1);
	do
		{
			// Se citeste si se valideaza valoarea lui n
			printf("Introduceti n: "); scanf("%d", &n);
			if (n<=1) printf("Indicele n trebuie sa fie mai mare decat 1!!!\n");
		}
	while (n<=1);
	do
		{
			// Se citeste si se valideaza valoarea lui k
			printf("Selectati operatia k :"); scanf("%d", &k);
			if ((k<0)||(k>1)) printf("Valoarea k nu poate sa fie decat 0 sau 1!!!\n");
		}
	while ((k<0)||(k>1));
	if (k==0)
		{
			//Se afiseaza termenul n
			printf("Termenul t%d este: %d\n", n, calcul(n));
		}
	else
		{
			//Se afiseaza primii n termeni ai sirului
			printf("Primii %d termeni ai sirului sunt:\n",n);
			for (int i=0; i<=n; i++)
				printf("t%d = %d, ", i, calcul(i));
			//trec pe rand nou la finalul afisarii
			printf("\n");
		}
	
}