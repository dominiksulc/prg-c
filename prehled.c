//Owner: Dominik Šulc; working on this code since 12. 11. 2020

#include <stdio.h>
//knihovna, která se vkládá do hlavičky zdrojového kódu

int main(void) {

// ####################################################################  PROMĚNNÉ  ####################################################################

int a = 5;
//celé číslo

float b = 6.2f;
//desetinné číslo

double c = 5.12;
//desetinné číslo + 2x přesnější než float (Nepíšeme f na konci čísla)

char f = 'F';
//jeden znak

float g;
g = a * c;
//násobení mezi a; c
printf ("Vysledek pri nasobeni a & c je: %f\n", g);
//printf = výstup, %f = sekvence (f = float), g = název proměnné (název proměnné)

float d;
d = a + c;
//scítání mezi a; c
printf ("Vysledek pri scitani a & c je: %f\n", d);
//d = název proměnné

// ####################################################################  PODMÍNKY  ####################################################################

{
    if (b > c);
    //if = podminka, (b > c) • Pokud je b vestsi nez c tak:
    printf ("Promenna b je vetsi nez c. :)\n");
    //vysli vystup se zprávou.
}
{
    if (c < g);
    //c je mensi nez g, tak vysle vystup:
    printf ("Promenna c je mensi nez g.\n\n");
}
{

int a;
printf("Myslim na cislo od 0-10, zkus ho uhadnout!:\n\n");
scanf("%d", &a);
if (a == 8)
    printf("Parada, uhadl jsi to! :)\n\n");
else
    printf("Bohuzel toto cislo jsem si nemyslel! :(\n\n");

}

{
    int b;
    printf("Kdyz secteme 7 a 12, jaky bude vysledek?:\n\n");
    scanf("%d", &b);
if (b == 19)
    printf("Velmi dobre! :)\n\n");
else
    printf("Spatne!\n\n");
}

// ####################################################################  CYKLY  ####################################################################

{

int j;
printf("(Do 25) Automaticke generovani cisel: \n");
for (j = 1; j < 25; j++)
printf("%d\n", j);

}

{
        
int i;
printf("(Do 30) Automaticke generovani cisel: \n");
for (i = 1; i < 30; i++)
printf("%d\n", i);

}
    




return 0;
}