/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_GetStat(int);
extern int ADXCRS_Unlock(void);
int ADXT_GetStat(int arg0) {
    int r;
    ADXCRS_Lock(arg0);
    r = adxt_GetStat(arg0);
    ADXCRS_Unlock();
    return r;
}
