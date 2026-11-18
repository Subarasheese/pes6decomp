/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_Stop(int);
extern int ADXCRS_Unlock(void);
int ADXT_Stop(int arg0) {
    ADXCRS_Lock(arg0);
    adxt_Stop(arg0);
    return ADXCRS_Unlock();
}
