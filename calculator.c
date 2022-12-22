#include<stdio.h>

int main(){
int choice;
int number1, number2, result;

while (1) {
printf("What do you want to do?\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Check if the result is odd or even\n");
printf("6. Terminate\n");
scanf("%d", &choice);

switch (choice) {
case 1:
printf("Enter two numbers: \n");
scanf("%d%d", &number1, &number2);
result = number1 + number2;
printf("The result is %d\n\n", result);
break;

case 2:
printf("Enter two numbers: \n");
scanf("%d%d", &number1, &number2);
result = number1 - number2;
printf("The result is %d\n\n", result);
break;

case 3:
printf("Enter two numbers: \n");
scanf("%d%d", &number1, &number2);
result = number1 * number2;
printf("The result is %d\n\n", result);
break;

case 4:
printf("Enter two numbers: \n");
scanf("%d%d", &number1, &number2);
result = number1 / number2;
printf("The result is %d\n\n", result);
break;

case 5:
if (result % 2 == 0)
printf("The result is even.\n\n");
else
printf("The result is odd.\n\n");
break;

case 6:
printf("Terminated\n");
return 0;
default:
printf("Invalid option.\n\n");
}
}
}