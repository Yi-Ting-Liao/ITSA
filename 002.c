#include <stdio.h>

int main(){
    double input = 0;
    while (scanf("%lf", &input) != EOF)
    {
        printf("%.1lf\n", input*1.6);
    }
}
