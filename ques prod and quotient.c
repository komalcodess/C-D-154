#include <stdio.h>

void komal(int *p1, int *p2, int *product, float *quotient)
{
    *product =(*p1)*(*p2);

    if(*p2!=0)
        *quotient = (float)(*p1)/(*p2);
    else
        *quotient = 0;
}

int main()
{
    int n, m;
    int product;
    float quotient;

    int *p1 = &n;
    int *p2 = &m;

    printf("Enter first number: ");
    scanf("%d", p1);

    printf("Enter second number: ");
    scanf("%d", p2);

    komal(p1, p2, &product, &quotient);

    printf("Product = %d\n", product);

    if(m != 0)
        printf("Quotient = %.2f\n", quotient);
    else
        printf("Quotient not possible as it is undefined.\n");

    return 0;
}
