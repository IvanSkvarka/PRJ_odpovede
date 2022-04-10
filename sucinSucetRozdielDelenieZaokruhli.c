#include <stdio.h>

// makro
#define zaokruhliKladne(cislo) (int) ((cislo) + 0.5) 
#define zaokruhliZaporne(cislo) (int) ((cislo) - 0.5) 

// procedura
void konaj(int cislo1, int cislo2) {
    int rozdiel;
    float podiel;
    
    rozdiel = cislo1 - cislo2;
    podiel = (float)cislo1 / (float)cislo2;

    if (cislo1 == 0 || cislo2 == 0)

{
    podiel = 0;
}

    printf ("%i\n", rozdiel);
    printf ("%f\n", podiel);  
    if(podiel > 0){
	printf ("%d\n", zaokruhliKladne(podiel));
}
	if(podiel < 0){
	printf ("%d\n", zaokruhliZaporne(podiel));
}}

/*
    funkcia, ktoru vola OS
    int arg - pocet parametrov prikazoveho riadku
    char* argv[] - parametre z prikazoveho riadku
*/
int main (int argc, char* argv[]) {
    int cislo1;

    printf ("Zadaj prve cislo:");
    scanf ("%i", &cislo1);

    int cislo2;

    printf ("Zadaj druhe cislo:");
    scanf ("%i", &cislo2);

    int sucin = cislo1*cislo2;

    printf ("%i\n", sucin);

    int sucet = cislo1+cislo2;

    printf ("%i\n", sucet);

    int porovnanie = cislo1 > cislo2;

// ternarny operator
/* 
    (cislo1 > cislo2) ? (konaj(cislo1, cislo2)) : (konaj(cislo2, cislo1));
*/
    if (porovnanie == 1) {
        konaj(cislo1, cislo2);
    } else {
        konaj(cislo2, cislo1);
    }

    return 0;
    }
