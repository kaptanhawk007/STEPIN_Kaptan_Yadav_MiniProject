/**
 * @file fun.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-4
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUN_H__
#define __FUN_H__
#include <stdio.h>
#include <stdlib.h>



/**
 * @brief 
 * 
 * @return char** 
 */


char** boardcreation();

/**
 * @brief 
 * 
 * @param Board 
 */
void print(char** Board);

/**
 * @brief 
 * 
 * @param Board 
 * @return int 
 */
int isdraw(char** Board);
/**
 * @brief 
 * 
 * @param Board 
 * @param i 
 * @param j 
 * @return char 
 */

/**
 * @brief 
 * 
 * @param Board 
 * @param i 
 * @param j 
 * @return char 
 */
char winningmove(char** Board, int i, int j);

#endif
