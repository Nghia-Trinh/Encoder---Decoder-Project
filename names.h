/*
 * This file includes declarations for functions that associate MIPS
 * register names with their register numbers and MIPS instruction names
 * with their opcodes or function codes.
 */

#ifndef _NAMES_H
#define _NAMES_H

char * getIJInstName (int opcode);
char * getRInstName (int funct);
char * getRegName (int regNbr);

int   getOpCode(char * instrName);
int   getFunctCode(char * instrName);
int   getRegNbr (char * regName);

#endif
