typedef struct matrix {
  double **uu;
  int ln1;
  int ln2;
} matrix;

void matrix_init(struct matrix * mm, int s1, int s2);

void matrix_set_ln(struct matrix * mm, int s1, int s2);
int matrix_get_ln1(struct matrix *mm);
int matrix_get_ln2(struct matrix *mm);

void matrix_alloc_uu(struct matrix * mm);
void matrix_set_uu(struct matrix * mm, int ii, int jj, double xx);

double matrix_get_uu(struct matrix * mm, int ii, int jj);
void matrix_free_uu(struct matrix * mm);
