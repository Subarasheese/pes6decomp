/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int);
extern int func_00167C00(int, int);
extern int ADXCRS_Unlock(void);
int func_00167BB8(int a, int b) {
    int r;
    ADXCRS_Lock(a, b);
    r = func_00167C00(a, b);
    ADXCRS_Unlock();
    return r;
}
