/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int ADXT_GetTimeSfreq(int, int, int);
extern int ADXCRS_Unlock(void);
int func_00165B28(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    ADXT_GetTimeSfreq(a, b, c);
    return ADXCRS_Unlock();
}
