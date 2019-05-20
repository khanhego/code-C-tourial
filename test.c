#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter a,b: ");
    scanf(" %d  %d", &a, &b);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    float c = 0.0;
    if (op == '+')
    {
        c = (float)(a + b);
    }
    else if (op == '-')
    {
        c = (float)(a - b);
    }
    else if (op == '*')
    {
        c = a * 1.0 * b;
    }
    else if (op == '/')
    {
        c = a * 1.0 / b;
    }
    else
    {
        printf("operator invalid");
    }
    printf("result c = %.2f", c);
    return 0;
};
