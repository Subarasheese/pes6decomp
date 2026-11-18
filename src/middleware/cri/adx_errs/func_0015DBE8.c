/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int);
extern int func_0015DC20(int);
extern int ADXF_Unlock(void);
int func_0015DBE8(int arg0) {
    int r;
    ADXF_Lock(arg0);
    r = func_0015DC20(arg0);
    ADXF_Unlock();
    return r;
}
