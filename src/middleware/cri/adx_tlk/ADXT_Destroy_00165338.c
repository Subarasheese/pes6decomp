/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int adxt_Destroy(int);
extern int ADXCRS_Unlock(void);
int ADXT_Destroy(int arg0) {
    ADXCRS_Lock(arg0);
    adxt_Destroy(arg0);
    return ADXCRS_Unlock();
}
