// +--------------------------------
//  PROGRAM NAME : CALCULUS.H
//  AUTHOR       : MARCELLO BELANDA
//  DATE         : 23/10/21 
// +--------------------------------

#ifndef CALCULUS_H_INCLUDED
#define CALCULUS_H_INCLUDED

// |CONST| _PI_
#define _PI_       3.1415

// |CONST| _FAVNUM_
#define _FAVNUM_  27

// |FUNC|  SumTwoArgs
int SumTwoArgs (int ArgA, int ArgB)
{
	return ArgA + ArgB;
}

// |FUNC|  CubeArgs
int CubeArgs(int num)
{
	return num * num * num;
}

// |FUNC|  SquareArgs
int SquareArgs(int num)
{
	return num * num;
}

#endif
