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
void SHOW(char MSG[]){
	printf("%s\n",MSG);
}

// SUM_ARGS (NUM_a, NUM_b)
int SUM_ARGS(int NUM_a, int NUM_b) {
	return NUM_a + NUM_b;
}

