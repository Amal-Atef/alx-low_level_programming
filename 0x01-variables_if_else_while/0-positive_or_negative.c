#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 *Return: Always 0 (Success)
 */
 int main(void)
 {
         int n;

         stand(time(0));
         n =rand() - RAND_MAX/2;
         if (n>0)
         {
                 print("%d is positive\n" ,n);
         }
         else
         {
                 print("%d is negative\n" ,n);
         }
         return (0);
}
