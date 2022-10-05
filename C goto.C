// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
#include <stdio.h>
int main() {
 const int maxInput = 100;
 int i;
 double number, average, sum = 0.0;
 for (i = 1; i <= maxInput; ++i) {
 printf("%d. Enter a number: ", i);
 scanf("%lf", &number);

 // go to jump if the user enters a negative number
 if (number < 0.0) {
 goto jump;
 }
 sum += number;
 }
jump:
 average = sum / (i - 1);
 printf("Sum = %.2f\n", sum);
 printf("Average = %.2f", average);
 return 0;
} 
//Program to Check Even or Odd
#include <stdio.h>
int main() {
 int num;
 printf("Enter an integer: ");
   scanf("%d", &num);
 // true if num is perfectly divisible by 2
 if(num % 2 == 0)
 printf("%d is even.", num);
 else
 printf("%d is odd.", num);

 return 0;
}
32 //Program to Check Odd or Even Using the Ternary Operator
  #include <stdio.h>
int main() {
 int num;
 printf("Enter an integer: ");
 scanf("%d", &num);

 (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
 return 0;
}
33 //Program to Check Vowel or consonant
//Program to Check Vowel or consonant
#include <ctype.h>
#include <stdio.h>
int main() {
 char c;
 int lowercase_vowel, uppercase_vowel;
 printf("Enter an alphabet: ");
 scanf("%c", &c);
 // evaluates to 1 if variable c is a lowercase vowel
 lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
 // evaluates to 1 if variable c is a uppercase vowel
 uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
 // Show error message if c is not an alphabet
 if (!isalpha(c))
 printf("Error! Non-alphabetic character.");
 else if (lowercase_vowel || uppercase_vowel)
 printf("%c is a vowel.", c);
 else
 printf("%c is a consonant.", c);
 return 0;
}
//Find the largest number among the three numbers entered by the user.
#include <stdio.h>
int main() {
 double n1, n2, n3; 
  printf("Enter three different numbers: ");
 scanf("%lf %lf %lf", &n1, &n2, &n3);
 // if n1 is greater than both n2 and n3, n1 is the largest
 if (n1 >= n2 && n1 >= n3)
 printf("%.2f is the largest number.", n1);
 // if n2 is greater than both n1 and n3, n2 is the largest
 if (n2 >= n1 && n2 >= n3)
 printf("%.2f is the largest number.", n2);
 // if n3 is greater than both n1 and n2, n3 is the largest
 if (n3 >= n1 && n3 >= n2)
 printf("%.2f is the largest number.", n3);
 return 0;
}
//Find the largest number among the three numbers entered by the user.
#include <stdio.h>
int main() {
 double n1, n2, n3;
 printf("Enter three numbers: ");
 scanf("%lf %lf %lf", &n1, &n2, &n3);
 // if n1 is greater than both n2 and n3, n1 is the largest
 if (n1 >= n2 && n1 >= n3)
 printf("%.2lf is the largest number.", n1);
 // if n2 is greater than both n1 and n3, n2 is the largest
 else if (n2 >= n1 && n2 >= n3)
 printf("%.2lf is the largest number.", n2);
 // if both above conditions are false, n3 is the largest
 else
 printf("%.2lf is the largest number.", n3);
 return 0;
} 
//Find the largest number among the three numbers entered by the user.
#include <stdio.h>
int main() {
 double n1, n2, n3;
 printf("Enter three numbers: ");
 scanf("%lf %lf %lf", &n1, &n2, &n3);
 // outer if statement
 if (n1 >= n2) { 
   // inner if...else
 if (n1 >= n3)
 printf("%.2lf is the largest number.", n1);
 else
 printf("%.2lf is the largest number.", n3);
 }
 // outer else statement
 else {
 // inner if...else
 if (n2 >= n3)
 printf("%.2lf is the largest number.", n2);
 else
 printf("%.2lf is the largest number.", n3);
 }
//Program to Check Leap Year
#include <stdio.h>
int main() {
 int year;
 printf("Enter a year: ");
 scanf("%d", &year);
 // leap year if perfectly divisible by 400
 if (year % 400 == 0) {
 printf("%d is a leap year.", year);
 }
 // not a leap year if divisible by 100
 // but not divisible by 400
 else if (year % 100 == 0) {
 printf("%d is not a leap year.", year);
 }
 // leap year if not divisible by 100
 // but divisible by 4
 else if (year % 4 == 0) {
 printf("%d is a leap year.", year);
 }
 // all other years are not leap years
 else {
 printf("%d is not a leap year.", year);
 }
 return 0;
} 
//Check Positive or Negative Using Nested if...else
#include <stdio.h>
int main() {
 double num;
 printf("Enter a number: ");
 scanf("%lf", &num);
 if (num <= 0.0) {
 if (num == 0.0)
 printf("You entered 0."); 
   else
 printf("You entered a negative number.");
 }
 else
 printf("You entered a positive number.");
 return 0;
}
//Check Positive or Negative Using if...else Ladder
#include <stdio.h>
int main() {
 double num;
 printf("Enter a number: ");
 scanf("%lf", &num);
 if (num < 0.0)
 printf("You entered a negative number.");
 else if (num > 0.0)
 printf("You entered a positive number.");
 else
 printf("You entered 0.");
 return 0;
}
//Program to Check Alphabet
#include <stdio.h>
int main() {
 char c;
 printf("Enter a character: ");
 scanf("%c", &c);
 if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
 printf("%c is an alphabet.", c);
 else
 printf("%c is not an alphabet.", c);
 return 0;
} 
//Sum of Natural Numbers Using for Loop
#include <stdio.h>
int main() {
 int n, i, sum = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 for (i = 1; i <= n; ++i) {
 sum += i;
 }
 printf("Sum = %d", sum);
 return 0;
} 
  //Sum of Natural Numbers Using while Loop
#include <stdio.h>
int main() {
 int n, i, sum = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 i = 1;
 while (i <= n) {
 sum += i;
 ++i;
 }
 printf("Sum = %d", sum);
 return 0;
}
//Read Input Until a Positive Integer is Entered
#include <stdio.h>
int main() {
 int n, i, sum = 0;
 do {
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 } while (n <= 0);
 for (i = 1; i <= n; ++i) {
 sum += i;
 }
 printf("Sum = %d", sum);
 return 0;
} 
//Factorial of a Number
#include <stdio.h>
int main() {
 int n, i;
 unsigned long long fact = 1;
 printf("Enter an integer: ");
 scanf("%d", &n);
 // shows error if the user enters a negative integer
 if (n < 0)
 printf("Error! Factorial of a negative number doesn't exist.");
 else  {
    for (i = 1; i <= n; ++i) {
 fact *= i;
 }
 printf("Factorial of %d = %llu", n, fact);
 }
 return 0;
}
//Multiplication Table Up to 10
#include <stdio.h>
int main() {
 int n, i;
 printf("Enter an integer: ");
 scanf("%d", &n);
 for (i = 1; i <= 10; ++i) {
 printf("%d * %d = %d \n", n, i, n * i);
 }
 return 0;
}
//Multiplication Table Up to a range
   for (i = 1; i <= n; ++i) {
 fact *= i;
 }
 printf("Factorial of %d = %llu", n, fact);
 }
 return 0;
}
#include <stdio.h>
int main() {
 int n, i, range;
 printf("Enter an integer: ");
 scanf("%d", &n);
 // prompt user for positive range
 do {
 printf("Enter the range (positive integer): ");
 scanf("%d", &range);
 } while (range <= 0);
 for (i = 1; i <= range; ++i) {
 printf("%d * %d = %d \n", n, i, n * i);
 }
 return 0;
} 
//Fibonacci Series up to n terms
#include <stdio.h>
int main() {
 int i, n;
   // initialize first and second terms
 int t1 = 0, t2 = 1;
 // initialize the next term (3rd term)
 int nextTerm = t1 + t2;
 // get no. of terms from user
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 // print the first two terms t1 and t2
 printf("Fibonacci Series: %d, %d, ", t1, t2);
 // print 3rd to nth terms
 for (i = 3; i <= n; ++i) {
 printf("%d, ", nextTerm);
 t1 = t2;
 t2 = nextTerm;
 nextTerm = t1 + t2;
 }
 return 0;
} 
//Fibonacci Sequence Up to a Certain Number
#include <stdio.h>
int main() {
 int t1 = 0, t2 = 1, nextTerm = 0, n;
 printf("Enter a positive number: ");
 scanf("%d", &n);
 // displays the first two terms which is always 0 and 1
 printf("Fibonacci Series: %d, %d, ", t1, t2);
 nextTerm = t1 + t2;
 while (nextTerm <= n) {
 printf("%d, ", nextTerm);
 t1 = t2;
 t2 = nextTerm;
 nextTerm = t1 + t2;
 }
 return 0;
} 
//Example #1: GCD Using for loop and if Statement
#include <stdio.h>
int main()
{
 int n1, n2, i, gcd;
 printf("Enter two integers: ");
 scanf("%d %d", &n1, &n2);
 for(i=1; i <= n1 && i <= n2; ++i)
 {
 // Checks if i is factor of both integers
 if(n1%i==0 && n2%i==0)
 gcd = i;
 }
 printf("G.C.D of %d and %d is %d", n1, n2, gcd);
 return 0;
} 
//Example #2: GCD Using while loop and if...else Statement
#include <stdio.h>
int main()
{
 int n1, n2;

 printf("Enter two positive integers: ");
 scanf("%d %d",&n1,&n2);
 while(n1!=n2)
 {
 if(n1 > n2)
 n1 -= n2;
 else
 n2 -= n1;
 }
 printf("GCD = %d",n1);
 return 0;
}
//Example #3: GCD for both positive and negative numbers
#include <stdio.h>
int main()
{
 int n1, n2;
 printf("Enter two integers: ");
 scanf("%d %d",&n1,&n2);
 // if user enters negative number, sign of the number is changed to positive
 n1 = ( n1 > 0) ? n1 : -n1;
 n2 = ( n2 > 0) ? n2 : -n2;
 while(n1!=n2)
 { 
    if(n1 > n2)
 n1 -= n2;
 else
 n2 -= n1;
 }
 printf("GCD = %d",n1);
 return 0;
} 
//LCM using while and if
#include <stdio.h>
int main() {
 int n1, n2, max;
 printf("Enter two positive integers: ");
 scanf("%d %d", &n1, &n2);
 // maximum number between n1 and n2 is stored in max
 max = (n1 > n2) ? n1 : n2;
 while (1) {
 if (max % n1 == 0 && max % n2 == 0) {
 printf("The LCM of %d and %d is %d.", n1, n2, max);
 break;
 }
 ++max;
 }
 return 0;
}
//LCM Calculation Using GCD
#include <stdio.h>
int main() {
 int n1, n2, i, gcd, lcm;
 printf("Enter two positive integers: ");
 scanf("%d %d", &n1, &n2);
 for (i = 1; i <= n1 && i <= n2; ++i) {

 // check if i is a factor of both integers
 if (n1 % i == 0 && n2 % i == 0)
 gcd = i;
 }
 lcm = (n1 * n2) / gcd;
 printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
 return 0; 
  }
54 //Program to Count the Number of Digits
#include <stdio.h>
int main() {
 long long n;
 int count = 0;
 printf("Enter an integer: ");
 scanf("%lld", &n);

 // iterate at least once, then until n becomes 0
 // remove last digit from n in each iteration
 // increase count by 1 in each iteration
 do {
 n /= 10;
 ++count;
 } while (n != 0);
 printf("Number of digits: %d", count);
} 
//Reverse an Integer
#include <stdio.h>
int main() {
 int n, reverse = 0, remainder;
 printf("Enter an integer: ");
 scanf("%d", &n);
 while (n != 0) {
 remainder = n % 10;
 reverse = reverse * 10 + remainder;
 n /= 10;
 }
 printf("Reversed number = %d", reverse);
 return 0;
} 
//Power of a Number Using the while Loop
#include <stdio.h>
int main() {
 int base, exp;
 long double result = 1.0;
 printf("Enter a base number: ");
 scanf("%d", &base);
 printf("Enter an exponent: ");
 scanf("%d", &exp);
 while (exp != 0) {
 result *= base;
 --exp;
 }
 printf("Answer = %.0Lf", result);
 return 0;
} 
//Power Using pow() Function
#include <math.h>
#include <stdio.h>
int main() {
 double base, exp, result;
 printf("Enter a base number: ");
 scanf("%lf", &base);
 printf("Enter an exponent: ");
 scanf("%lf", &exp);
 // calculates the power
 result = pow(base, exp);
 printf("%.1lf^%.1lf = %.2lf", base, exp, result);
 return 0;
} 
8 An integer is a palindrome if the reverse of that number is equal to the original number.
//Program to Check Palindrome
#include <stdio.h>
int main() {
 int n, reversed = 0, remainder, original;
 printf("Enter an integer: ");
 scanf("%d", &n);
 original = n;
 // reversed integer is stored in reversed variable
 while (n != 0) {
 remainder = n % 10;
 reversed = reversed * 10 + remainder;
 n /= 10;
 }
 // palindrome if orignal and reversed are equal
 if (original == reversed)
 printf("%d is a palindrome.", original); 
   else
 printf("%d is not a palindrome.", original);
 return 0;
} 
//Program to Check Prime Number
#include <stdio.h>
int main() {
 int n, i, flag = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 // 0 and 1 are not prime numbers
 // change flag to 1 for non-prime number
 if (n == 0 || n == 1)
 flag = 1;
 for (i = 2; i <= n / 2; ++i) {
 // if n is divisible by i, then n is not prime
 // change flag to 1 for non-prime number
 if (n % i == 0) {
 flag = 1;
 break;
 }
 }
 // flag is 0 for prime numbers
 if (flag == 0)
 printf("%d is a prime number.", n);
 else
 printf("%d is not a prime number.", n);
 return 0;
} 
Display Prime Numbers Between Two Intervals
#include <stdio.h>
int main() {
 int low, high, i, flag;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d", &low, &high);
 printf("Prime numbers between %d and %d are: ", low, high);
 // iteration until low is not equal to high
 while (low < high) {
 flag = 0; 
  // ignore numbers less than 2
 if (low <= 1) {
 ++low;
 continue;
 }
 // if low is a non-prime number, flag will be 1
 for (i = 2; i <= low / 2; ++i) {
 if (low % i == 0) {
 flag = 1;
 break;
 }
 }
 if (flag == 0)
 printf("%d ", low);
 // to check prime for the next number
 // increase low by 1
 ++low;
 }
 return 0;
}
Display Prime Numbers when Larger Number is Entered first
#include <stdio.h>
int main() {
 int low, high, i, flag, temp;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d", &low, &high);
 // swap numbers if low is greather than high
 if (low > high) {
 temp = low;
 low = high;
 high = temp;
 }
 printf("Prime numbers between %d and %d are: ", low, high);
 while (low < high) {
 flag = 0;
 // ignore numbers less than 2
 if (low <= 1) {
 ++low;
 continue;
 } 
for (i = 2; i <= low / 2; ++i) {
 if (low % i == 0) {
 flag = 1;
 break;
 } 
  }
 if (flag == 0)
 printf("%d ", low);
 ++low;
 }
 return 0;
} 
