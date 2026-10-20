
float func_001046D0(int a0, int a1)
{
  float f0;
  float f1;
  ;
  *((float *) (((char *) a0) + 0x0)) = *((float *) (((char *) a1) + 0x0));
  f1 = *((float *) (((char *) a1) + 0x4));
  *((float *) (((char *) a0) + 0x4)) = f1;
  f0 = *((float *) (((char *) a1) + 0x8));
  *((float *) (((char *) a0) + 0x8)) = f0;
  return f0;
}
