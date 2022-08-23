#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <string.h>

// GLOBAL CONSTANTS
#define TITLE "DECIMAL TO RADIX-i converter"
#define AUTHOR "Londani Tshikhudo"
#define YEAR 2022



char* Dec2RadixI(int decValue, int radValue);

int main (void)
{
	printf("*****************************\n%s\nWritten by: %s\nDate: %d\n*****************************\n",TITLE, AUTHOR,YEAR);

int Dec, radii, sol, rem;

printf("Enter a decimal number: ");
scanf("%d",&Dec);
char symbol[] = {'A','B','C','D','E','F','G','H','I','J'};
while(Dec>=0)
{
   printf("The number you have entered is %d\n",Dec);

   printf("Enter a radix for the converter between 2 and 16: ");
   scanf("%d",&radii);
   printf("The radix you have entered is:%d\n",radii);
        //log2Dec
   printf("The log2 of the number is %.2f\n",log2(Dec));

   sol=(Dec/radii);
   printf("The integer result of the number divided by %d is %d\n",radii,sol);

   //Remainder of Decimal divided by radix-i
   rem = (Dec%radii);
   printf("The remainder is %d\n", rem);
   printf("The radix-%d value is ",radii);
    int r=0, number[50];
   while(Dec)
   {
        char* convert = Dec2RadixI(Dec,radii); //convert the remainder
        Dec = Dec/radii;
        if (convert < 10)
            convert = convert+48;
        else
            convert = symbol[(int)convert-10];
        number[r] = convert; //Array number
        r++; //incrementing r
   }
   for (int z = --r ;z>=0;z--)
	      printf("%c",number[z]); //Print char

   printf("\nEnter a decimal number: ");  scanf("%d",&Dec);
   }
printf("EXIT");
return 0;
}

char* Dec2RadixI(int decValue, int radValue) //function (i)
{

    char* results;
    int rem = decValue % radValue; //remainder dec value and rad value
    results = rem;
    return results;
}
