/** @file operations.h 
 * 	@brief Function prototypes for TGA file operations.
 * 
 * 	This file contains the prototype for the compare function,
 * 	as well as the compare_args type definition.
 * 
 * 	@author Michael Sherlock (https://github.com/remiliacmdlet)
 * 	@bug No known bugs.
 */

#ifndef OPERATIONS_H
#define OPERATIONS_H


/** @brief Type that stores the file locations for the TGA image
 * 		   files used in the compare functionality.
 * 
 * 	@param char* image_one | location of a TGA file
 * 	@param char* image_two | location of a TGA file 
 */
typedef struct {
	char* image_one;
	char* image_two;
} compare_args;


/** @brief Compares the values of two TGA files and returns 1 if the two
 * 		   files are identical.
 * 
 * @param compare_args myArgs | contains the file locations of the two TGA files meant to be compared.
 * @return integer value 1 if the TGA files are identical, different error codes if not identical.
 */
int compare(compare_args myArgs);


#endif