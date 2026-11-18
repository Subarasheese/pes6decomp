/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_GetNumSmpl(int);
extern int ADXCRS_Unlock(void);
int ADXT_GetNumSmpl(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = adxt_GetNumSmpl(arg0);
    ADXCRS_Unlock();
    return r;
}
