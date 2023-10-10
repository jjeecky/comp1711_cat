# include <stdio.h>

int main()
{
    int number1;
    printf("Enter your first number: ");
    scanf("%d", &number1);

    int number2;
    printf("Enter your second number: ");
    scanf("%d", &number2);

    int answer = number1 + number2;
    printf("The sum of the two numbers is: %d",answer);
    
    return 0;

}