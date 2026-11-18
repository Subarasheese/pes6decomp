/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int, int);
extern int func_0015BBB8(int, int, int, int);
extern int ADXF_Unlock(void);
int func_0015BB50(int a, int b, int c, int d) {
    int r;
    ADXF_Lock(a, b, c, d);
    r = func_0015BBB8(a, b, c, d);
    ADXF_Unlock();
    return r;
}
