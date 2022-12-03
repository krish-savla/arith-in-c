#include "bitpack.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


// uint64_t pow_of_2(int exponent);


struct s1 {
        int x;
        float y[15];
};
int main() {
        int x = rand() % 6;
        for (int i = 0; i < 5; i++) {
                printf("%d\n", rand() % 6);
        }
        (void) x;
        
}
