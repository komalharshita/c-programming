#include <stdio.h>

int main() 
{
    char op;
    float num1, num2;
    
    printf("\n\nEnter an operation (+, -, *, /) and two numbers: ");
    scanf(" %c %f %f", &op, &num1, &num2);
    
    if (op == '+')
    {
    	printf("Result: %.2f\n", num1+num2);
    }

    else if (op == '-')
    {
    	printf("Result: %.2f\n", num1-num2);
    }
    
    else if (op == '*')
    {
    	printf("Result: %.2f\n", num1*num2);
    }
    
    else if (op == '/')
    {
    	printf("Result: %.2f\n", num1/num2);
    }
    
    else
    {
    	printf("Operation is invalid\n");
    }

    return 0;
}
