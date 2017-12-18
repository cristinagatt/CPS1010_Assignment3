#include <stdio.h>
float subtract(float num1,float num2);
float add(float num1,float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);


int main() {

    float num1;
    float num2;
    char menu;


    printf("Enter 'a' for Addition\n");
    printf("Enter 's' for Subtraction\n");
    printf("Enter 'm' for Multiplication\n");
    printf("Enter 'd' for Division\n");

    scanf( "%c", &menu );

    printf("enter num1 : ");
    scanf("%f",&num1);

    printf("enter num2 : ");
    scanf("%f",&num2);

    }