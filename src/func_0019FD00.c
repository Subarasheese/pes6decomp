
int func_0019FD00(int a0, int a1)
{
  int new_var;
  int v2;
 do { new_var = a1 & 65535; v2 = *((int *) (((char *) a0) + 0xc)); } while (0);
  return v2 + (((new_var << 1) + new_var) << 4);
}
