# include<stdio.h>

//print largest number amongst 3 numbers

int main() {
    int num1, num2, num3;
    printf("enter num1 ");
    scanf("%d", &num1);  
   
    printf("enter num2 ") ;
    scanf ("%d", &num2);

    printf("enter num3 ");
    scanf ("%d", &num3);
    
    if(num1>=num2 && num1>=num3){
      printf("Number 1 is greater than num1 and num2 \n");
    }

    else if(num2>=num1 && num2>=num3){
      printf("Number 2 is greater than num1 and num3 \n");
    }

    else {
      printf("Number 3 is greater than num2 and num1 \n");
    }
    
   return 0;
}   
