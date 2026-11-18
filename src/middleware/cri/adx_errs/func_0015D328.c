/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int);
extern int func_0015D380(int, int, int);
extern int ADXF_Unlock(void);
int func_0015D328(int a, int b, int c) {
    int r;
    ADXF_Lock(a, b, c);
    r = func_0015D380(a, b, c);
    ADXF_Unlock();
    return r;
}
