/*
 * main.c
 *
 *  Created on: Jul 21, 2022
 *      Author: karim
 */
/*
 * main.c
 *
 *  Created on: Jul 21, 2022
 *      Author: karim
 */
#include "stdio.h"
int fact = 1 ;
int recursion_1 ( int x ) ;
int recursion_2 ( int x ) ;

int main ()
{
	int x;
	printf("enter number to git recurtion = " ) ;
	fflush(stdin) ; fflush(stdout) ;
	scanf("%d",&x) ;
	printf("fact = %d\n",recursion_1(x)) ;
	printf("fact = %d\n",recursion_2(x)) ;
	return 0 ;
}
int recursion_1 ( int x )

{
	int i = 1 , fact = 1 ;
	for ( i = 1 ; i<=x ; i++ )
	{
		fact *= i ;
	}
	return fact ;
}
int recursion_2 ( int x )
{
	if( x != 0 )
		return x*recursion_2(x-1) ;
	return fact ;
}


