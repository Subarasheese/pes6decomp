/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_0015EE98(int);
extern int ADXCRS_Unlock(void);
int func_0015EE60(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = func_0015EE98(arg0);
    ADXCRS_Unlock();
    return r;
}
