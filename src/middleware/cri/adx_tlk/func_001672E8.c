/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00167320(int);
extern int ADXCRS_Unlock(void);
int func_001672E8(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = func_00167320(arg0);
    ADXCRS_Unlock();
    return r;
}
