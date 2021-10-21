// +--------------------------------
//  PROGRAM NAME : MAIN.C
//  AUTHOR       : MARCELLO BELANDA
//  DATE         : 21/10/21
// +--------------------------------

// ALWAYS INCLUDE HEADER FILE
#include "functions.h"

// MAIN 
#include <stdio.h>

int main(){
	// USING CONSTS
	printf("PI     = %f\n",PI);
	printf("MY NUM = %d\n",MY_NUMBER);
	
	int n = show("Marcello");

	// USING FUNCS
	printf("%d",n);
	
	int a = sum(10, 20);

	printf("%d\n",a);

	return 0;
}
