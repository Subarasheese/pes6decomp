
int func_00103B58(int a0)
{
  int v2;
  int v5;
  int v3;
  int new_var;
  new_var = -4;
 do { } while (0);
  v2 = *((int *) (((char *) a0) + 0x0));
  v5 = *((int *) (((char *) a0) + 0xc));
  *((int *) (((char *) a0) + 0xc)) = 0;
  v3 = *((int *) (((char *) v5) + 0x0));
  *((int *) (((char *) v5) + 0x0)) = v3 + (((unsigned int) (((v2 + new_var) - v5) >> 2)) >> 2);
  return ((unsigned int) (((v2 + new_var) - v5) >> 2)) >> 2;
}
