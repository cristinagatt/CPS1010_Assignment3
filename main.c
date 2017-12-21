#include <stdio.h>
int subtract(int num1,int num2);
int add(int num1,int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
 
 
int main() {
 
    int num1;
    int num2;
    char menu;
 
 
    printf("Enter 'a' for Addition\n");
    printf("Enter 's' for Subtraction\n");
    printf("Enter 'm' for Multiplication\n");
    printf("Enter 'd' for Division\n");
 
    scanf( "%c", &menu );
 
    printf("enter num1 : ");
    scanf("%d",&num1);
 
    printf("enter num2 : ");
    scanf("%d",&num2);
 
 
 
 
    switch(menu){
        case 'a': add(num1,num2);
            break;
        case 's': subtract(num1,num2);
            break;
        case 'm' :multiplication(num1,num2);
            break;
        case 'd':division(num1,num2);
            break;
    }
 
 
 
    return  0;
 
}
 
int add(int num1, int num2){
 
    int addition = num1 + num2;
    printf("Addition is %d",addition);
    return addition;
 
}
 
int subtract(int num1,int num2){
 
    int subtraction = num1 - num2;
    printf("Subtraction is %d ",subtraction);
    return subtraction;
 
}
 
 
int multiplication(int num1, int num2){
 
    float multiplication = num1*num2;
    printf("Multiplication is %d ",multiplication);
    return multiplication;
 
}
 
int division(int num1, int num2){
 
    int division = num1/num2;
    printf("Division is %d ",division);
    return division;
 
}
