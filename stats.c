/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * Stats.c
 * Source code from first assigment of the Embedded Course
 *
 *
 * Daniel Martinez Jimenez
 * 2019/07/05
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

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
void print_statistics(unsigned char *array, int length){

  // present the array using print_array
  printf("This is the array introduced as argument:\n");
  print_array(array,length);  
  printf("These are the statistics of the matrix given:\n");
  // get minimum using find_minimum and print it
  int min = find_minimum(array,length);
  printf("Minimum: %d\n",min);
  // get maximum using find_maximum and print it
  int max = find_maximum(array,length);
  printf("Maximum: %d\n",max);
  // get mean using mean and print it
  int mean = find_mean(array,length);
  printf("Mean: %d\n",mean);
  // get median using median and print it
  int median = find_median(array,length);
  printf("Median: %d\n",median);	
}


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
void print_array(unsigned char *array, int length){

  printf("{ ");
  for (int i = 0; i<length-1; i++){
    printf("%d, ",array[i]);
  }
  printf("%d ",array[length-1]);
  printf("}\n");
}

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
unsigned char find_median(unsigned char *array, int length){

  unsigned char result = 0;
  sort_array(array,length);
  
  if(length%2 == 0){
     result = (array[length/2-1] + array[length/2])/2;
  }else{
     result = array[length/2];
  }
  return result;
}

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
unsigned int find_mean(unsigned char *array, int length){

  int addition = 0;
  for (int i = 0; i<length; i++){
    addition += array[i];
  }
  return addition/length;

}
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
unsigned char find_maximum(unsigned char *array, int length){
  unsigned char maximum = 0;

  for (int i = 0; i<length; i++){
    if (array[i]>maximum){
      maximum = array[i];
    }
  }
  return maximum;
}
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
unsigned char find_minimum(unsigned char *array, int length){
  unsigned char minimum = 0;

  for (int i = 0; i<length; i++){
    if (array[i]<minimum){
      minimum = array[i];
    }
  }
  return minimum;
}
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
void sort_array(unsigned char *array, int length){
  unsigned char aux;
  unsigned int n = 1;

  while(n!=0){
    n = 0;
    for (int i = 0; i<length-1; i++){
      if (array[i]<array[i+1]){
        n++;
        aux = array[i];
        array[i] = array[i+1];
        array[i+1] = aux;
      }
    }
  }
  


}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   254,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
  sort_array(test,SIZE);
  print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
