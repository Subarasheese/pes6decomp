/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_001662F0(int);
extern int ADXCRS_Unlock(void);
int func_001662B8(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = func_001662F0(arg0);
    ADXCRS_Unlock();
    return r;
}
