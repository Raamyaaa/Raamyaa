#include <stdio.h>
int main() {
 char op;
 double first, second;
 printf("Enter an operator (+, -, *, /): ");
 scanf("%c", &op);
 printf("Enter two operands: ");
 scanf("%lf %lf", &first, &second);
 switch (op) {
 case '+':
 printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
 break;
 case '-':
 printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
 break;
 case '*':
 printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
 break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
 break;
 // operator doesn't match any case constant
 default:
 printf("Error! operator is not correct");
 }
 return 0;
}
77 //ATM money dispatch count while currencies are 1000,500 and 100
#include<stdio.h>
#include<conio.h>
int totalThousand =1000;
int totalFiveFundred =1000;
int totalOneHundred =1000;
void main(){
 unsigned long withdrawAmount; 
  unsigned long totalMoney;
 int thousand=0,fiveHundred=0,oneHundred=0;
 clrscr();
 printf("Enter the amount in multiple of 100: ");
 scanf("%lu",&withdrawAmount);
 if(withdrawAmount %100 != 0){
 printf("Invalid amount;");
 getch();
 return;
 }
 totalMoney = totalThousand * 1000 + totalFiveFundred* 500 + totalOneHundred*100;
 if(withdrawAmount > totalMoney){
 printf("Sorry,Insufficient money");
 getch();
 return;
 }
 thousand = withdrawAmount / 1000;
 if(thousand > totalThousand)
 thousand = totalThousand;
 withdrawAmount = withdrawAmount - thousand * 1000;
  if (withdrawAmount > 0){
 fiveHundred = withdrawAmount / 500;
 if(fiveHundred > totalFiveFundred)
 fiveHundred = totalFiveFundred;
 withdrawAmount = withdrawAmount - fiveHundred * 500;
 }
 if (withdrawAmount > 0)
 oneHundred = withdrawAmount / 100;
 printf("Total 1000 note: %d\n",thousand);
 printf("Total 500 note: %d\n",fiveHundred);
 printf("Total 100 note: %d\n",oneHundred);
 getch();
} 
//Display day for the entered date by user
#include<stdio.h>
#include<conio.h>
#include<math.h>
int fm(int date, int month, int year) {
 int fmonth, leap;
 //leap function 1 for leap & 0 for non-leap
   if ((year % 100 == 0) && (year % 400 != 0))
 leap = 0;
 else if (year % 4 == 0)
 leap = 1;
 else
 leap = 0;
 fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
 + (5 * month + month / 9) / 2;
 //bring it in range of 0 to 6
 fmonth = fmonth % 7;
 return fmonth;
}
//----------------------------------------------
int day_of_week(int date, int month, int year) { 
  int dayOfWeek;
 int YY = year % 100;
 int century = year / 100;
 printf("\nDate: %d/%d/%d \n", date, month, year);
 dayOfWeek = 1.25 * YY + fm(date, month, year) + date - 2 * (century % 4);
 //remainder on division by 7
 dayOfWeek = dayOfWeek % 7;
 switch (dayOfWeek) {
 case 0:
 printf("weekday = Saturday");
 break;
 case 1:
 printf("weekday = Sunday");
 break;
 case 2:
 printf("weekday = Monday");
 break;
 case 3:
 printf("weekday = Tuesday");
 break;
 case 4:
 printf("weekday = Wednesday");
 break;
 case 5:
 printf("weekday = Thursday");
 break;
 case 6:
 printf("weekday = Friday");
 break;
 default:
 printf("Incorrect data");
 } 
return 0;
  }
//------------------------------------------
void main() {
 int date, month, year;
 //clrscr();
 printf("\nEnter the year ");
 scanf("%d", &year);
 printf("\nEnter the month ");
 scanf("%d", &month);
 printf("\nEnter the date ");
 scanf("%d", &date);
 day_of_week(date, month, year);
 getch();
}
/**********
Output :
Enter the year 2015
Enter the month 12
Enter the date 16
Date: 16/12/2015
weekday = Wednesday
************/
//PRINT DIAMOND SHAPE
#include <stdio.h>
#include <conio.h>
void main()
{
 int n, c, k, space = 1;
 clrscr();

 printf("Enter number of rows\n");
 scanf("%d", &n);

 space = n - 1;

 for (k = 1; k <= n; k++)
 {
 for (c = 1; c <= space; c++)
 printf(" ");

 space--;

 for (c = 1; c <= 2*k-1; c++)
 printf("*"); 
 printf("\n");
 }

 space = 1;

 for (k = 1; k <= n - 1; k++)
 {
 for (c = 1; c <= space; c++)
 printf(" ");

 space++;

 for (c = 1 ; c <= 2*(n-k)-1; c++)
 printf("*");

 printf("\n");
 }

 getch();
} 
