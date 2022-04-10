#include <stdio.h>
#include <stdlib.h>

int main (void){

    int C, M, Y, K;

    printf ("Zadaj c :");
    scanf ("%i", &C);
    
    if (C < 0 || C > 100){

    printf ("Zly vstup\n");   
    exit (0);
}
    else{

    printf ("Zadaj m :");
    scanf ("%i", &M);
   
}
        if (M < 0 || M > 100){
    
        printf ("Zly vstup\n");
        exit (0);
}
        else{

        printf ("Zadaj y :");
        scanf ("%i", &Y);

}
            if (Y < 0 || Y > 100){

            printf ("Zly vstup\n");
            exit (0);
}   
            else{

            printf ("Zadaj k :");
            scanf ("%i", &K);
}
    
            if (K > 100 || K < 0){

            printf ("Zly vstup\n");	
            exit (0);
}
            else{

            float R = 255 * (1-(float)C/100) * (1-(float)K/100);
	        float G = 255 * (1-(float)M/100) * (1-(float)K/100);
            float B = 255 * (1-(float)Y/100) * (1-(float)K/100);

	        printf ("%.0f\n", R);
	        printf ("%.0f\n", G);
	        printf ("%.0f\n", B);
}}
