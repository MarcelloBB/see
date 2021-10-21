// +--------------------------------
//  PROGRAM NAME : FUNCTIONS.C
//  AUTHOR       : MARCELLO BELANDA
//  DATE         : 21/10/21 
// +--------------------------------
//	    DESCRIPTION
// +--------------------------------
//  * THIS FILE CONTAINS THE FUNCS
//    DECLARED IN `FUNCTIONS.H`
// +--------------------------------

// IMPORTING THE MAIN
#include "functions.h"

// MAIN ...

// SHOW (MSG)
void show(char MSG[]){
	printf("%s\n",MSG);
	return 0;
}

// SUM_ARGS (NUM_a, NUM_b)
int sum(int NUM_a, int NUM_b) {
	return NUM_a + NUM_b;
}

