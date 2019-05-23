#include <stdio.h>

int primo(int x){
    int div=2;
    while ( x != 1 ) {
        if (x%div == 0) {
            printf("%d x ", div );
            x = x/div;
        }
    else {
        div = div+1;
    }
    }
    return div;
}
