/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int, int, int, int);
extern int func_0015BFF8(int, int, int, int, int, int);
extern int ADXF_Unlock(void);
int func_0015BF70(int a, int b, int c, int d, int e, int f) {
    int r;
    ADXF_Lock(a, b, c, d, e, f);
    r = func_0015BFF8(a, b, c, d, e, f);
    ADXF_Unlock();
    return r;
}
