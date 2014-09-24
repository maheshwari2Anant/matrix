#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

void matrix_init(struct matrix * mm, int s1, int s2){
  matrix_set_ln( mm , s1, s2 );
  matrix_alloc_uu( mm );
}


void matrix_set_ln(struct matrix * mm, int s1, int s2){ 
  (*mm).ln1 = s1;
  (*mm).ln2 = s2;
}

int matrix_get_ln1(struct matrix *mm){
  return( (*mm).ln1 );
}

int matrix_get_ln2(struct matrix *mm){
  return( (*mm).ln2 );
}

void matrix_alloc_uu(struct matrix * mm){ 

  int ii;

  (*mm).uu = malloc ( (*mm).ln1 * sizeof( double * ));
  for(ii=0;ii < (*mm).ln1 ; ii++)
    (*mm).uu[ii] = malloc ( (*mm).ln2 * sizeof ( double ) );
  
}

void matrix_set_uu(struct matrix * mm, int ii, int jj, double xx){
  (*mm).uu[ii][jj]=xx;
}

double matrix_get_uu(struct matrix * mm, int ii, int jj){
  return( (*mm).uu[ii][jj] );
}

void matrix_free_uu(struct matrix * mm){ 

  int ii;
  for(ii=0;ii < (*mm).ln1 ; ii++)
    free((*mm).uu[ii]);
  free((*mm).uu );
  
}
