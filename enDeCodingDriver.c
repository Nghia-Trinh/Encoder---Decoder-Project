/*
 * Test Driver to test functions declared in names.h and defined in
 *      instructionNames.c and registerNames.c.
 *
 * This program runs several loops to test all encodings/decodings
 *      between instruction names and opcodes/funct codes and between
 *      register names and numbers.
 *
 * Usage:
 *          name 
 *      where "name" is the name of the executable.
 *
 * Input:
 *      None.
 *
 * Output:
 *      This program prints (or should print) three tables: one of
 *      all I- and J-format instructions and their opcodes (in decimal),
 *      one of all R-format instructions and their funct codes (in decimal),
 *      and one of all 32 registers (register number and register name).
 *
 * Author:  Alyce Brady
 *
 * Creation Date:  December 2022
 *
 Name: Nolan
 Date: 1/19/23
 Title: Encode Decode
 Purpose: The code will take in an array and then check if they attend to the I-J format and the R--format
 */

/* include files go here */
#include <stdio.h>
#include "names.h"

int main (int argc, char *argv[])
{
    int count = 0, correctCount = 0;

    /* Test getIJInstName and getOpCode. */
    for ( int i = 0; i < 44; i++ )
    {
        char * instName = getIJInstName(i);
        if ( instName != NULL && *instName != '\0' )
        {
            int code = getOpCode(instName);
            printf("%d\t\t%s\t\t%d\n", i, instName, code);
            count++;
            if ( code == i )
                correctCount++;
        }
    }
    printf("Processed %d non-null I- and J-format instructions.", count);
    printf("  (%d correctly)\n\n", correctCount);

    /* Test getRInstName and getFunctCode. */
    count = correctCount = 0;
    for ( int i = 0; i < 44; i++ )
    {
        char * instName = getRInstName(i);
        if ( instName != NULL && *instName != '\0' )
        {
            int code = getFunctCode(instName);
            printf("%d\t\t%s\t\t%d\n", i, instName, code);
            count++;
            if ( code == i )
                correctCount++;
        }
    }
    printf("Processed %d non-null R-format instructions.", count);
    printf("  (%d correctly)\n\n", correctCount);

    /* Test getRegName and getRegNbr. */
    count = correctCount = 0;
    for ( int i = 0; i < 32; i++ )
    {
        char * regName = getRegName(i);
        if ( regName != NULL && *regName != '\0' )
        {
            int code = getRegNbr(regName); /*changed to getRegNbr */
            printf("%d\t\t%s\t\t%d\n", i, regName, code);
            count++;
            if ( code == i )
                correctCount++;
        }
    }
    printf("Processed %d non-null registers.", count);
    printf("  (%d correctly)\n\n", correctCount);

    return 0;
}
