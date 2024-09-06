#include<stdio.h>
int main(){
int A;
int B;
float result;
char op;
printf("hello there!\n");
printf("you can use this program as a calculator\n");
printf("enter the operator :");
scanf("%c",&op);
while(op!='+' && op!='-' && op!='*' && op!='/'){
    printf("%c is not a valid operator ! \n",op);
    printf("enter a valid operation :");
    scanf("\n%c",&op);
}
printf("enter the first number : ");
scanf("%d",&A);
printf("enter the second number : ");
scanf("%d",&B);
switch(op){
case '+':
printf("addition\n");
result=A+B;
printf("the result is : %.2f",result);
break;
case '-':
result=A-B;
printf("the result is : %.2f",result);
break;
case '*':
result=A*B;
printf("the result is : %.2f",result);
break;
case '/':
result=A/(float)B;
printf("the result is : %.2f",result);
break;
case '%':
result=A%B;
printf("the rest is : %.2f",result);
break;
default:
    printf("please type a real operation");
}
}
