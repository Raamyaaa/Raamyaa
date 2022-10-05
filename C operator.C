// Working of arithmetic operators
#include <stdio.h>
int main()
{
 int a = 9,b = 4, c;

 c = a+b;
 printf("a+b = %d \n",c);
 c = a-b;
 printf("a-b = %d \n",c);
 c = a*b;
 printf("a*b = %d \n",c);
 c = a/b;
 printf("a/b = %d \n",c);
 c = a%b;
 printf("Remainder when a divided by b = %d \n",c);

 return 0;
}
Outputa+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b=1
  // Working of increment and decrement operators
#include <stdio.h>
int main()
{
 int a = 10, b = 100;
 float c = 10.5, d = 100.5;
 printf("++a = %d \n", ++a);
 printf("--b = %d \n", --b);
 printf("++c = %f \n", ++c);
 printf("--d = %f \n", --d);
 return 0;
}
Output -
a+b = 13
a-b = 5
a*b = 36
a/b = 2
Remainder when a divided by b=1
// Working of assignment operators
#include <stdio.h>
int main()
{
 int a = 5, c;
 c = a; // c is 5
 printf("c = %d\n", c);
 c += a; // c is 10
 printf("c = %d\n", c);
 c -= a; // c is 5
 printf("c = %d\n", c);
 c *= a; // c is 25
 printf("c = %d\n", c);
 c /= a; // c is 5
 printf("c = %d\n", c);
 c %= a; // c = 0
 printf("c = %d\n", c);
 return 0;
} 
Outputc = 5
c = 10
c = 5
c = 25
c = 5
c = 0
   // Working of relational operators
#include <stdio.h>
int main()
{
 int a = 5, b = 5, c = 10;
 printf("%d == %d is %d \n", a, b, a == b);
 printf("%d == %d is %d \n", a, c, a == c);
 printf("%d > %d is %d \n", a, b, a > b);
 printf("%d > %d is %d \n", a, c, a > c);
 printf("%d < %d is %d \n", a, b, a < b);
 printf("%d < %d is %d \n", a, c, a < c);
 printf("%d != %d is %d \n", a, b, a != b);
 printf("%d != %d is %d \n", a, c, a != c);
 printf("%d >= %d is %d \n", a, b, a >= b);
 printf("%d >= %d is %d \n", a, c, a >= c);
 printf("%d <= %d is %d \n", a, b, a <= b);
 printf("%d <= %d is %d \n", a, c, a <= c);
 return 0;
}
 // Working of logical operators
#include <stdio.h>
int main()
{
 int a = 5, b = 5, c = 10, result;
 result = (a == b) && (c > b);
 printf("(a == b) && (c > b) is %d \n", result);
 result = (a == b) && (c < b);
 printf("(a == b) && (c < b) is %d \n", result);
 result = (a == b) || (c < b);
 printf("(a == b) || (c < b) is %d \n", result);
 result = (a != b) || (c < b);
 printf("(a != b) || (c < b) is %d \n", result);
 result = !(a != b);
 printf("!(a != b) is %d \n", result);
 result = !(a == b);
 printf("!(a == b) is %d \n", result);
 return 0;
} 
//Program to Compute Quotient and Remainder
#include <stdio.h>
int main() {
 int dividend, divisor, quotient, remainder;
 printf("Enter dividend: ");
 scanf("%d", &dividend);
 printf("Enter divisor: ");
 scanf("%d", &divisor);
 // Computes quotient
 quotient = dividend / divisor;
 // Computes remainder
 remainder = dividend % divisor;
 printf("Quotient = %d\n", quotient);
 printf("Remainder = %d", remainder);
 return 0;
} 
//Program to Find the Size of Variables
#include<stdio.h>
int main() {
 int intType;
 float floatType;
 double doubleType;
 char charType;
 // sizeof evaluates the size of a variable
 printf("Size of int: %zu bytes\n", sizeof(intType));
 printf("Size of float: %zu bytes\n", sizeof(floatType));
 printf("Size of double: %zu bytes\n", sizeof(doubleType));
 printf("Size of char: %zu byte\n", sizeof(charType));

 return 0;
} 
//Program Using the long keyword
#include <stdio.h>
int main() {
 int a;
 long b; // equivalent to long int b;
 long long c; // equivalent to long long int c;
 double e;
 long double f;
 printf("Size of int = %zu bytes \n", sizeof(a));
 printf("Size of long int = %zu bytes\n", sizeof(b));
 printf("Size of long long int = %zu bytes\n", sizeof(c));
 printf("Size of double = %zu bytes\n", sizeof(e));
 printf("Size of long double = %zu bytes\n", sizeof(f));

 return 0;
}
//Swap Numbers Using Temporary Variable
#include<stdio.h>
int main() { 
   double first, second, temp;
 printf("Enter first number: ");
 scanf("%lf", &first);
 printf("Enter second number: ");
 scanf("%lf", &second);
 // value of first is assigned to temp
 temp = first;
 // value of second is assigned to first
 first = second;
 // value of temp (initial value of first) is assigned to second
 second = temp;
 // %.2lf displays number up to 2 decimal points
 printf("\nAfter swapping, first number = %.2lf\n", first);
 printf("After swapping, second number = %.2lf", second);
 return 0;
} 
 //Swap Numbers Without Using Temporary Variables
#include <stdio.h>
int main() {
 double a, b;
 printf("Enter a: ");
 scanf("%lf", &a);
 printf("Enter b: ");
 scanf("%lf", &b);
 // swapping
 // a = (initial_a - initial_b)
 a = a - b;
 // b = (initial_a - initial_b) + initial_b = initial_a
 b = a + b;
 // a = initial_a - (initial_a - initial_b) = initial_b
 a = b - a;
 // %.2lf displays numbers up to 2 decimal places
 printf("After swapping, a = %.2lf\n", a);
 printf("After swapping, b = %.2lf", b);
 return 0;
} 
8 If-Else-If
// Program to display a number if it is negative
#include <stdio.h>
int main() {
 int number;
  printf("Enter an integer: ");
 scanf("%d", &number);
 // true if number is less than 0
 if (number < 0) {
 printf("You entered %d.\n", number);
 }
 printf("The if statement is easy.");
 return 0;
} 
// Check whether an integer is odd or even
#include <stdio.h>
int main() {
 int number;
 printf("Enter an integer: ");
 scanf("%d", &number);
 // True if the remainder is 0
 if (number%2 == 0) {
 printf("%d is an even integer.",number);
 }
 else {
 printf("%d is an odd integer.",number);
 }
 return 0;
} 
// Program to relate two integers using =, > or < symbol
#include <stdio.h>
int main() {
 int number1, number2;
 printf("Enter two integers: ");
 scanf("%d %d", &number1, &number2);
 //checks if the two integers are equal.
 if(number1 == number2) {
 printf("Result: %d = %d",number1,number2);
 }
 //checks if number1 is greater than number2.
 else if (number1 > number2) {
 printf("Result: %d > %d", number1, number2);
 }
 //checks if both test expressions are false
 else {
 printf("Result: %d < %d",number1, number2);
 }
 return 0; 
  }
 //Nested If-else-if
#include <stdio.h>
int main() {
 int number1, number2;
 printf("Enter two integers: ");
 scanf("%d %d", &number1, &number2);
 if (number1 >= number2) {
 if (number1 == number2) {
 printf("Result: %d = %d",number1,number2);
 }
 else {
 printf("Result: %d > %d", number1, number2);
 }
 }
 else {
 printf("Result: %d < %d",number1, number2);
 }
 return 0;
} 
// Print numbers from 1 to 10
#include <stdio.h>
int main() {
 int i;
 for (i = 1; i < 11; ++i)
 {
 printf("%d ", i);
 }
 return 0;
}
24 // Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers
#include <stdio.h>
int main()
{
 int num, count, sum = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &num);
 // for loop terminates when num is less than count
 for(count = 1; count <= num; ++count)
 {
 sum += count;
 }
 printf("Sum = %d", sum);
 return 0;
}
// Print numbers from 1 to 5
#include <stdio.h>
int main() {
 int i = 1;

 while (i <= 5) {
 printf("%d\n", i);
 ++i;
 }
 return 0;
}
// Program to add numbers until the user enters zero
int main() {
 double number, sum = 0;
 // the body of the loop is executed at least once
 do {
 printf("Enter a number: ");
 scanf("%lf", &number);
 sum += number;
 }
 while(number != 0.0);
 printf("Sum = %.2lf",sum);
 return 0;
} 
