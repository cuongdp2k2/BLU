#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "params.h"
#include "ntt.h"
#include "reduce.h"

int main() {
    signed int b[256] ;   
    signed int a[256] ; 
    unsigned int len, start = 0 , j, k , i;
    int32_t zeta, t; 

    const int32_t f = 41978; // mont^2/256
    // INPUT
    for ( i = 0; i < 256; i++) {
        /* code */
        a[i] =(rand() % 8380417) - 8380417  ;
    }

    for(len=0 ; len < 256 ; len++ ) {
        if( len == 255 )
            printf("%12x \n",a[len]);
        else if(len % 8 == 7) 
            printf("%12x, \n",a[len]); 
        else
            printf("%12x, ",a[len]) ;
    }
    printf("\n\n");

    // NTT
    zeta = 25847;
    for(j = start; j < start + 128; ++j) {
        t = montgomery_reduce((int64_t)zeta * a[j + 128]);
        a[j + 128] = a[j] - t;
        a[j] = a[j] + t;
    }

    for(len=0 ; len < 256 ; len++ ) {
        if( len == 255 )
            printf("%12x \n",a[len]);
        else if(len % 8 == 7) 
            printf("%12x, \n",a[len]); 
        else
            printf("%12x, ",a[len]) ;
    }

    printf("\n");

    // INTT
    zeta = -25847;
    for(j = start; j < start + 128; ++j) {
        t = a[j];
        a[j] = t + a[j + 128];
        a[j + 128] = t - a[j + 128];
        a[j + 128] = montgomery_reduce((int64_t)zeta * a[j + 128]);
    }

    for(j = 0; j < N; ++j) {
        a[j] = a[j] >> 1 ;
    }

    printf("\n\n");
    for(len=0 ; len < 256 ; len++ ) {
        if( len == 255 )
            printf("%12x \n",a[len]);
        else if(len % 8 == 7) 
            printf("%12x, \n",a[len]); 
        else
            printf("%12x, ",a[len]) ;
    }
}