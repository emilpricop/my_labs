#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
char ch; //variabila folosita pentru memorarea tastei apasate
int n, pauza, pornit;
void af_meniu()
/* Functie pentru afisarea unui meniu */
{
     printf("Contor\n\n");
     printf("S - START\n");
     printf("P - PAUZA\n");
     printf("C - CONTINUARE\n");
     printf("R - RESETARE\n");
     printf("E - IESIRE\n");
}
void main()
{
    n=0; //initiaza variabila contor cu valoarea zero;
    pauza=0; //variabila pauza se initializeaza cu zero;
    //variabila pauza este 0 daca nu am dat pauza si 1 daca am dat pauza
    pornit=0; //variabila pornit este 1 daca s-a apasat start si 0 altfel
    do
    {
        if (kbhit()) //verifica daca s-a apasat o tasta
        {
          //verific ce tasta s-a apasat;
          ch=getch(); // memorez tasta apasata in variabla ch
          if (ch=='S') {pornit=1;}
          if (ch=='E') {exit(0);} // iese din program
          if (ch=='P') {pauza=1;} // se pune pauza
          if (ch=='C') {pauza=0;} // se reia numaraotarea
          if (ch=='R') {n=0;} // se reseteaza contorul
        }
        clrscr();//sterge ecranul
        af_meniu(); //afiseaza un meniu, pentru utilizator
        printf("%d\n",n); // afisare contor
        if ((pauza==0)&&(pornit==1)) n++;
        delay(1000);
    }
    while (1); //repeta bucla do...while la infinit, dar permite iesirea din program cand apas E.
}
