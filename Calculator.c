#include <stdio.h>
int main() {
  char op;
int a,b, result;

printf("Enter operator(+,-,*,/):");
scanf("%c", &op);
printf("Enter two numbers; ");
scanf("%d %d", &a, &b);
switch(op) {

case'+':
result=a+b;
printf("Result=%.2d", result);
break;

case'-':
result=a-b;
printf("Result=%.2d", result);
break;

case'%':
result=a%b;
printf("Result=%.2d", result);
break;

case'/':
if(b!=0) {
result=a/b;
printf("Result=%.2d", result);
  break;
}
  else{
    printf("cannot divide by zero");
  }
  break;
  default:printf("Invalid operator");
}
  return 0;
}
