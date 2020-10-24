#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "add.h"
int main(){
    int num1,num2;
    printf("Enter 1st number\n");
    scanf("%d",&num1);
    printf("Enter 2nd number\n");
    scanf("%d",&num2);
    printf("Addition is %d\n",add(num1,num2));
}
