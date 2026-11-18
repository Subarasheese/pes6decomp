/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int);
extern int adxf_GetStat(int);
extern int ADXF_Unlock(void);
int ADXF_GetStat(int arg0) {
    int r;
    ADXF_Lock(arg0);
    r = adxf_GetStat(arg0);
    ADXF_Unlock();
    return r;
}
