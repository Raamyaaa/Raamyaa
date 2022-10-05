// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates
#include <stdio.h>
int main() {
 int i;
 double number, sum = 0.0;
 for (i = 1; i <= 10; ++i) {
 printf("Enter n%d: ", i);
 scanf("%lf", &number);
 // if the user enters a negative number, break the loop
 if (number < 0.0) {
 break;
 }
 sum += number; // sum = sum + number;
 }
 printf("Sum = %.2lf", sum);
 return 0;
}
// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result
#include <stdio.h>
int main() {
 int i;
 double number, sum = 0.0;
 for (i = 1; i <= 10; ++i) {
 printf("Enter a n%d: ", i);
 scanf("%lf", &number);
 if (number < 0.0) {
 continue;
 }
 sum += number; // sum = sum + number;
 }
 printf("Sum = %.2lf", sum);
 return 0;
} 
// Program to create a simple calculator
#include <stdio.h>
int main() {
 char operation;
 double n1, n2;
 printf("Enter an operator (+, -, *, /): ");
 scanf("%c", &operation);
 printf("Enter two operands: ");
 scanf("%lf %lf",&n1, &n2);
 switch(operation)
 {
 case '+':
 printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
 break;
 case '-':
 printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
 break;
 case '*':
 printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
 break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
 break;
     // operator doesn't match any case constant +, -, *, /
 default:
 printf("Error! operator is not correct");
 }
 return 0;
} 
