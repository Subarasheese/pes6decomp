/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int);
extern int adxf_GetPtStat(int);
extern int ADXF_Unlock(void);
int ADXF_GetPtStat(int arg0) {
    int r;
    ADXF_Lock(arg0);
    r = adxf_GetPtStat(arg0);
    ADXF_Unlock();
    return r;
}
