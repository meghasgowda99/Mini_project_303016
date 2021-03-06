/**
 * @file conversion_operation.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __CONVERSION_OPERATIONS_H__
#define __CONVERSION_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio_ext.h>
#include <string.h>
#include <time.h>


long int Bin_to_Dec(long int); /* Takes in the input of a binary number and converts it to Decimal*/ 
long int Bin_to_Oct(long int); /* Takes in the input of a binary number and converts it to Octal*/
long int Bin_to_Hex(long int); /* Takes in the input of a binary number and converts it to Hexadecimal*/
long int Dec_to_Bin(long int); /* Takes in the input of a decimal number and converts it to binary*/
long int Dec_to_Oct(long int); /* Takes in the input of a decimal number and converts it to octal*/
long int Dec_to_Hex(long int); /* Takes in the input of a decimal number and converts it to hexadecimal*/
long int Oct_to_Bin(long int); /* Takes in the input of a octal number and converts it to binary*/
long int Oct_to_Dec(long int); /* Takes in the input of a octal number and converts it to decimal*/
long int Oct_to_Hex(long int); /* Takes in the input of a octal number and converts it to Hexadecimal*/

 
#endif 
