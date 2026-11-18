/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00167680(int);
extern int ADXCRS_Unlock(void);
int func_00167648(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = func_00167680(arg0);
    ADXCRS_Unlock();
    return r;
}
