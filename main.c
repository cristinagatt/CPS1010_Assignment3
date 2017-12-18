#include <stdio.h>
float subtract(float num1,float num2);
float add(float num1,float num2);
float multiplication(float num1, float num2);
float division(float num1, float num2);


int main(){

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

    print("enter num2 : ");
    scanf("%f",&num2);

    }


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
 
}
 
  
}


float add(int num1, int num2){
 
    int addition = num1 + num2;
    printf("Addition is %d ",addition);
    return add;
 
}
 
float subtract(int num1,int  num2){
 
    int subtraction = num1 - num2;
    printf("Subtraction is %df ",subtraction);
    return subtract;
 
}
}
}
