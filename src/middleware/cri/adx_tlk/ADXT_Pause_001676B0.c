/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_Pause(int, int);
extern int ADXCRS_Unlock(void);
int ADXT_Pause(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    adxt_Pause(arg0, arg1);
    return ADXCRS_Unlock();
}
