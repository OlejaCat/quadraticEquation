#ifndef SOLVE_QUADRATIC_H
#define SOLVE_QUADRATIC_H

#include "constants.h"

typedef enum NumberOfRoots
{
    NumberOfRoots_INFINITE_ROOTS = -1,
    NumberOfRoots_ZERO_ROOTS     =  0,
    NumberOfRoots_ONE_ROOT       =  1,
    NumberOfRoots_TWO_ROOTS      =  2,
} NumberOfRoots;

NumberOfRoots solveEquation(Coefficients user_input, double* first_root, double* second_root);
NumberOfRoots LinearEquation(double a, double b, double* first_root);
NumberOfRoots quadraticEquation(double a, double b, double c, double* first_root, double* second_root);

#endif // SOLVE_QUDRATIC_H
