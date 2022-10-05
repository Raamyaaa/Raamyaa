#include <stdio.h>
int main()
{
 int testInteger = 5;
 printf("Number = %d", testInteger);
 return 0;
}
#include <stdio.h>
int main()
{
 float number1 = 13.5;
 double number2 = 12.4;
 printf("number1 = %f\n", number1);
 printf("number2 = %lf", number2);
 return 0;
}
#include <stdio.h>
int main()
{
 char chr = 'a';
 printf("character = %c", chr);
 return 0;
} 
#include <stdio.h>
int main()
{
 int testInteger;
 printf("Enter an integer: ");
 scanf("%d", &testInteger);
 printf("Number = %d",testInteger);
 return 0;
}
Example of float and double input and output
#include <stdio.h>
int main() 
  {
 float num1;
 double num2;
 printf("Enter a number: ");
 scanf("%f", &num1);
 printf("Enter another number: ");
 scanf("%lf", &num2);
 printf("num1 = %f\n", num1);
 printf("num2 = %lf", num2);
 return 0;
}
Character I/O
#include <stdio.h>
int main()
{
 char chr;
 printf("Enter a character: ");
 scanf("%c",&chr);
 printf("You entered %c.", chr);
 return 0;
}
ASCII I/O
#include <stdio.h>
int main()
{
 char chr;
 printf("Enter a character: ");
 scanf("%c", &chr);
 // When %c is used, a character is displayed
 printf("You entered %c.\n",chr);
 // When %d is used, ASCII value is displayed
 printf("ASCII value is %d.", chr);
 return 0;
} 
#include <stdio.h>
int main()
{
 int a;
 float b;
 printf("Enter integer and then a float: ");
   // Taking multiple inputs
 scanf("%d%f", &a, &b);
 printf("You entered %d and %f", a, b);
 return 0;
} 
#include <stdio.h>
#include <conio.h>
void main()
{
 int a;
 printf("Enter an integer\n");
 scanf("%d", &a);
 printf("Integer that you have entered is %d\n", a);
}
Output -
Enter an integer
2
Integer that you have entered is 2
  #include <stdio.h>
int main()
{
 int number;
 printf( "Please enter a number: " );
 scanf( "%d", &number);
 printf( "You entered %d", number );
 return 0;
} 
Output
Run1 -
Please enter a number: 10
You entered 10
Run2 -
Please enter a number: 20
You entered 20
#include <stdio.h>
  void main()
{
 int a, b, c;
 printf("Enter two numbers to add\n");
 scanf("%d%d",&a,&b);
 c = a + b;
 printf("Sum of entered numbers = %d\n",c);

}
Output -
Enter two numbers to add
2
3
Sum of entered numbers = 5
  //Float and Double Input/Output
#include <stdio.h>
int main()
{
 float num1;
 double num2;
 printf("Enter a number: ");
 scanf("%f", &num1);
 printf("Enter another number: ");
 scanf("%lf", &num2);
 printf("num1 = %f\n", num1);
 printf("num2 = %lf", num2);
 return 0;
} 
