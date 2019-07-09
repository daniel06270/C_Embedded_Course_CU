/******************************************************************************
 * Copyright (C) 2019 by Daniel Martinez
 *
 *****************************************************************************/
/**
 * Stats.h 
 * First assigment header file of the course Embedded Software 
 *
 * Along this document the different functions required for this assigment are 
 * programmed. 
 *
 * Daniel Martinez Jimenez
 * 2019/07/05
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * FUNCTION: Print_statistics
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
 */
void print_statistics(unsigned char *array, int length);

/**
 * FUNCTION: print_array
 *
 *  Given an array of data and a length, prints the array to the screen
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
void print_array(unsigned char *array, int length);

/**
 * FUNCTION: find_median
 *
 * Given an array of data and a length, returns the median value
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
unsigned char find_median(unsigned char *array, int length);

/**
 * FUNCTION: find_mean
 *
 * Given an array of data and a length, returns the mean
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
unsigned int find_mean(unsigned char *array, int length);

/**
 * FUNCTION: find_maximum
 *
 * Given an array of data and a length, returns the maximum
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
unsigned char find_maximum(unsigned char *array, int length);

/**
 * FUNCTION: find_minimum
 *
 * Given an array of data and a length, returns the minimum
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
unsigned char find_minimum(unsigned char *array, int length);

/**
 * FUNCTION: sort_array
 *
 * Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * INPUT PARAMETERS:
 * char* array: Array which is going to be treated
 * int length: Length of the array
 * 
 * RETURN PARAMETERS:
 * NONE
*/
void sort_array(unsigned char *array, int length);



#endif /* __STATS_H__ */
