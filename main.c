#include <stdio.h>
#include <time.h>
#include "MT.h"
int main() {
    init_genrand((unsigned)time(NULL));int n, c = 1; double r;
    for (n = 0; n < 100 && printf("%d", c) && c; n++) {
        r = genrand_real1();
        if (c == 1) c = (r < .4) ? 1 : (r < .6) ? 4 : (r < .8) ? 9 : 0;
        else if (c == 4) c = (r < .5) ? 5 : 9;else if (c == 9) c = (r < .5) ? 1 : 8;
        else c = 1; }getchar();return 0;}