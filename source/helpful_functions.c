#include "../include/helpful_functions.h"

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>

#include "../include/constants.h"


//----------------
//! Cleans screen
//----------------
void clearScreen()
{
    printf(CLEAR_SCREEN);
}


//-----------------------------------------------------------------------
//! Compares two numbers in double format
//!
//! @param [in] a First double number
//! @param [in] b Second double number
//!#include <stddef.h>
//! @return True if a is equal to b and False if a is not equal to b
//-----------------------------------------------------------------------
bool equatTwoDoubles (double a, double b)
{
    return (fabs(a - b) < EPS);
}

//-----------------------------------------------------------------------
//! Compares two numbers in double format
//!
//! @param [in] a First double number
//! @param [in] b Second double number
//!
//! @return True if a is greater than b and False if a is less than b
//-----------------------------------------------------------------------
bool compareGreaterTwoDoubles (double a, double b)
{
    return (a - b > EPS);
}

//-----------------------------------------------------------------------
//! Compares two numbers in double format
//!
//! @param [in] a First double number
//! @param [in] b Second double number
//!
//! @return True if b is greater than a and False if b is less than a
//-----------------------------------------------------------------------
bool compareLesserTwoDoubles (double a, double b)
{
    return (b - a > EPS);
}

//----------------------------------------------
//! Swaps two numbers in double format
//!
//! @param [out] a     First variable
//! @param [out] b     Second variable
//! @param [in]  size  Size of type of variable
//!
//! @note Variables need to be in one type
//----------------------------------------------
void swap(void* a, void* b, size_t size)
{
    //asserts

    char temp = 0;
    uint8_t* ua = (uint8_t*) a;
    uint8_t* ub = (uint8_t*) b;
    for (uint8_t i = 0; i < size; i++)
    {
        memcpy(&temp, ua + i, sizeof(uint8_t));
        memcpy(ua + i, ub + i, sizeof(uint8_t));
        memcpy(ub + i, &temp, sizeof(uint8_t));
    }
}


//------------------------------------------------------
//! Checks if number is negative or positive infinity
//!
//! @param [in] n double number
//!
//! @return True or False
//------------------------------------------------------
bool isInf(double n)
{
    return n == INFINITY || n == -INFINITY;
}


//----------------------------
//! Checks if number is NaN
//!
//! @param [in] n double number
//!
//! @return True or False
//----------------------------
bool isNan(double n)
{
    return n != n;
}


//-----------------------------
//! Checks if number is finite
//!
//! @param [in] n double number
//!
//! @return True or False
//-----------------------------
bool isFinite(double n)
{
    if (isInf(n))
    {
        return 0;
    }

    return !isNan(n);
}
