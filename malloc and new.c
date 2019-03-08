C++:
  int*    pi = new int;
  double* pd = new double;
  delete p;

C:
  int*    p = (int*) malloc(sizeof(int));
  double* q = (double*) malloc(sizeof(double));
  free(p);
