/*
Conversia unui numar fractionar din baza 10 in baza 2
*/
#include <stdio.h>

//declarare variabile
double N10, p_fra_10; //numarul de convertit N10, partea fractionara
int p_int_10; // partea intreaga
int b[50]; // vector care contine cifreele numarului binar

int main()
{
	printf("Program pentru conversia unui numar fractionar din baza 10 in baza 2");
	printf("Introduceti numarul (in baza 10):");
	scanf("%lf",&N10);

	//Se determina partea intreaga si partea fractionara a numarului
	p_int_10=int(N10);
	p_fra_10=N10-p_int_10;

	//Se realizeaza conversia partii intregi
	int k=-1; /* contorul se initializeaza cu -1 pentru ca 
	in C se vectorii se indexeaza de la zero. Prima cifra determinata
	ar trebui sa fie b[0]*/
	while (p_int_10>0)
	{
		k++;//se determina cifra, deci se incrementeaza contorul
		b[k]=p_int_10%2; // se determina restul impartii la 2;
		p_int_10=p_int_10/2; // se determina noul cat;
	}
	// Se stocheaza in variabila nr_cif_b_int numarul de cifre binare ale
	// ale partii intregi a numarului convertit. Variabila va fi utilizata
	// pentru rutina de afisare
	int nr_cif_b_int=k;


	// Se realizeaz conversia partii fractionare prin inmultiri repetate cu 2
	while (p_fra_10>0)
	{
		k++; // se incrementeaza contorul pentru ca se determina o cifra noua
		b[k]=int(p_fra_10*2); /*Se determina valoarea intreaga rezultata in 
		urma inmultirii. Aceasta reprezinta de fapt o cifra din 
		partea fractionara a numarului binar*/
		p_fra_10 = p_fra_10 *2  - b[k]; /*Se determina noua parte fractionara
		care trebuie inmultita cu 2 la pasul urmator, daca este pozitiva*/
	}

	//Se afiseaza numarul obtinut in urma conversiei
	printf("Numarul %lf in baza 2 este:", N10);
	/* In prima bucla for se afiseaza partea intreaga a numarului binar,
	scriind continutul vectorului b[i], in ordine inversa de la nr maxim de
	cifre binare al partii intregi (nr_cif_b_int), decrementand contorul
	cu o unitate pana la 0; */
	for (int i=nr_cif_b_int; i>=0; i--)
	{
		printf("%d",b[i]);
	}
	printf(","); //*Se afiseaza un separator fractionar (virgula)
	/* In cea de-a doua bucla se afiseaza partea fractionara a numarului. 
	Aceasta este stocata in b[i], de la pozitia nr_cif_b_int+1, pana la 
	k, inclusiv. */
	for (int i=nr_cif_b_int+1; i<=k; i++)
	{
		printf("%d",b[i]);
	}
	printf("\n\n");
	return 0;
}
