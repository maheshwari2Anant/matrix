#include "matrix.h"
#include <stdio.h>

int main(){

  matrix m;
  // test init
  matrix_init(&m,2,3);

  // get lengths
  printf("%d %d\n",matrix_get_ln1(&m),matrix_get_ln2(&m));
  int ii,jj;
  for (jj=0; jj<matrix_get_ln1(&m); jj++)
    for (ii=0; ii<matrix_get_ln2(&m); ii++){
      // test set
      matrix_set_uu(&m,jj,ii,4.444 + (double) ii + (double) jj );
      // test get
      printf("%d %d %3.3f\n",jj,ii,matrix_get_uu(&m,jj,ii));
    }
}
