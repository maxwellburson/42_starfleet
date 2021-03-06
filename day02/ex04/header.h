#ifndef HEADER_H
# define HEADER_H

# include <string.h> //size_t

/*--------------------------------
  !! required structure
  --------------------------------*/


/*--------------------------------
  :) function you must implement
  --------------------------------*/
void countSort(unsigned char *utensils, int n);


/*--------------------------------
  ?? test function used in main
  --------------------------------*/
unsigned char *genRandomUstensils(int *n);
void printUtensils(unsigned char *utensils, int n);

/*--------------------------------
  &  your own other function
  --------------------------------*/

void get_counts(size_t *counts, unsigned char *utensils, int n);
void add_previous_counts(size_t *counts);
void sort_array(size_t *counts, unsigned char *utensils, unsigned char *new_arry, int n);

#endif
