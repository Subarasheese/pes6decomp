
extern int func_00105790();
void func_001067D0(int a0, int a1, int a2, int a3)
{
  int new_var;
  int buf[4];
  new_var = 0xFFFFFFF9;
  buf[0] = a0;
  buf[1] = (a1 << 24) >> 24;
  func_00105790(new_var, buf, a2, a3);
}
