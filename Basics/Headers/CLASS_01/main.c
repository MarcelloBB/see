// +--------------------------------
//  PROGRAM NAME : MAIN.C
//  AUTHOR       : MARCELLO BELANDA
//  DATE         : 23/10/21 
// +--------------------------------
//	    DESCRIPTION
// +--------------------------------
//  * THIS FILE CONTAINS THE MAIN
//    PROGRAM.
// +--------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "calculus.h"

int main()
{
	printf("\n\nHello, World!\n\n");
	
	// var int y,x
	int x = 5;
	float z = 4.3;
	int y = 4;

	// SumTwoArgs
	int Sum = SumTwoArgs(z, z);
	
	// CubeArgs
	int Cube = CubeArgs(x); 

	// SquareArgs
	int Square = SquareArgs(y);

	printf("PI = %f\n",_PI_);
	printf("Quadrado de %d: %d\n",y,Square);
	printf("Cubo de %d: %d\n",x,Cube);
	printf("Soma de %f com %f: %d\n",z,z,Sum);

	return 0;
}
