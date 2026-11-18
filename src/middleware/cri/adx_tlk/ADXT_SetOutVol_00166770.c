/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_SetOutVol(int, int);
extern int ADXCRS_Unlock(void);
int ADXT_SetOutVol(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    adxt_SetOutVol(arg0, arg1);
    return ADXCRS_Unlock();
}
