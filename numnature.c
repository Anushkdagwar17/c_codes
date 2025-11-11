//Write a program to check entered number is positive, negative or zero.
#include<stdio.h>


int main(){
    int num1 ;

    printf("Enter the Number: " );
    scanf("%d",&num1);

    if(num1>0){
        printf("%d is Positive.",num1 );
    }
    
    else if(num1==0){
        printf("%d is Zero ",num1 );
    
    }
    
    else if(num1<1){
        printf("%d is Negative.",num1 );
    
    }
    
    else{

        printf("Invalid Input ! " );
    
    }

return 0;
}