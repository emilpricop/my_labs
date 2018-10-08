/*
Descriere problema
Autor
*/
#include <stdio.h>
#include <stdlib.h>
int n, p, i; //date intrare
int k, j, ln; //variable interne
void main()
{
	printf("Introduceti numarul n: ");
	scanf("%d",&n);
	if ((n<1)||(n>1000))
	{
		printf("Nu ai introdus valori corecte!!!");
		exit(100);
	}
	printf("Introduceti numarul de valori afisate pe liniile impare: ");
	scanf("%d",&i);
	printf("Introduceti numarul da valori afisate pe liniile pare: ");
	scanf("%d",&p);
	ln=1; k=1; // initializare contoare (ln = numarul liniei pe care afisez
			   //k - valoare afisata )
	do 
		{
			if (ln%2==0)
			{    // sunt pe linie para, deci afisez p valori
				j=1; // contor - cate numere am afisat pe linia respectiva
				do
				{ printf("%d ",k); // afisez valoarea lui k
				  k++; // incrementez k
				  j++; // incrementez j
				}
				while ((j<=p)&&(k<=n)); // daca am afisat p valori trebuie sa ma opresc	
			}
			else 
			{
				// sunt pe linie impara, deci afisez i valori
				j=1;
				do
				{ printf("%d ",k);
				  k++;
				  j++;
				}
				while ((j<=i)&&(k<=n));
					
			}
		printf("\n"); // trec pe randul urmator
		ln++; // daca am trecut pe randul urmator trebuie sa incrementez si numarul liniei	
		}
	while (k<=n); // ma opresc cand am afisat n valori (k pleaca de la 1, deci <=n)
}