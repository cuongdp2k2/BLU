#include "stdio.h"

typedef int int32_t  ;
typedef unsigned int uint32_t ;
typedef char _8bit_t ;

typedef struct int_64t {
    int32_t* highBit ;
    int32_t* lowBit  ;
} int_64t ;

typedef struct _16bit_t {
    _8bit_t* byte[2] ;
} _16bit_t;


void main() {
    int_64t* a;
    _16bit_t* val1 = 0x4444;

    printf(val1);
}