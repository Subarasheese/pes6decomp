/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int func_00167FC8(int, int, int);
extern int ADXCRS_Unlock(void);
int func_00167F70(int a, int b, int c) {
    int r;
    ADXCRS_Lock(a, b, c);
    r = func_00167FC8(a, b, c);
    ADXCRS_Unlock();
    return r;
}
