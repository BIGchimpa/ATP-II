#include <stdio.h>

int mdc(int a, int b) {

    if (b == 0) {
        return a;
    }

    else {
        return mdc(b, a % b);
    }
}

//e pro 5, é só fazer mdc(mdc(a,b),c)
