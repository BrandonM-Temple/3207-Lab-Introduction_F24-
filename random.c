#include <stdio.h>
#include <stdlib.h>

#define A 65
#define Z 90

char randchar() {
 return (rand() % (Z - A + 1)) + A; 
}