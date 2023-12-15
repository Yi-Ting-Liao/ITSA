#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int x,y = 0;
    while (scanf("%d %d", &x, &y) != EOF)
    {
        if(sqrt(x*x+y*y) <= 200)
            printf("inside\n");
        else
            printf("outside\n");
    }
}
