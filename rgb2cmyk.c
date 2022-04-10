#include <stdio.h>
#include <stdlib.h>

int main (void){

    int R, G, B, max;
    float c, m, y, k;


    printf ("Zadaj r :");
    scanf ("%i", &R);
    
    if (R < 0 || R > 255){

    printf ("Zly vstup\n");   
    exit (0);
}
    else{

    printf ("Zadaj g :");
    scanf ("%i", &G);
   
}
        if (G < 0 || G > 255){
    
        printf ("Zly vstup\n");
        exit (0);
}
        else{

        printf ("Zadaj b :");
        scanf ("%i", &B);

}
            if (B < 0 || B > 255){

            printf ("Zly vstup\n");
            exit (0);
}
            if (R == 0 && B == 0 && G == 0){

            c = m = y = 0;
            k = 100;
 
            printf("%.0f\n%.0f\n%.0f\n%.0f\n", c, m, y, k);
            exit (0);
}
            else{

            max = R;
}
            if(R < B){ 

            max = B;
}
            else if(B < G){

            max = G;
}
            k = 1 - ((float)max/255);
 
            c = (1 - ((float)R / 255) - k) / (1 - k);
	        m = (1 - ((float)G / 255) - k) / (1 - k);
            y = (1 - ((float)B / 255) - k) / (1 - k);

	        printf ("%.0f\n", c * 100);
	        printf ("%.0f\n", m * 100);
	        printf ("%.0f\n", y * 100);
            printf ("%.0f\n", k * 100);
            
            
}
