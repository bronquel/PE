/*****************************************************************/        	 
/*                                                               */        	 
/* Date        Description                            Author     */        	 
/* ----------  -------------------------------------  brad       */        	 
/*****************************************************************/        	 
#include <stdlib.h>   /* Standard function library header    	 */        	 
#include <stdio.h>	/* Standard input/out header           	     */        	 
/*****************************************************************/

/*****************************************************************        	 
A palindromic number reads the same both ways. The largest palindrome
made from the product of two 2-digit numbers is 9009 = 91 � 99.

Find the largest palindrome made from the product of two 3-digit numbers.

results where:
580085
514415
906609  <--
119911
99990
282282
141141
853358
650056
601106
*****************************************************************/

int main(int argc, char *argv[])
{
    for (int a = 999; a > 100; a--)
	{
		for (int b = 999; b > 100; b--)
		{
			if (  a*b / 100000 	== (a*b) % 10 	&&
			(a*b / 10000)%10  == (a*b / 10)%10  &&
			(a*b / 1000)%10   == (a*b / 100)%10  )
			{
				printf("%i\n",a*b);
			}
		}
	}
}

