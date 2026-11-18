/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int ADXT_StartSeamless(int);
extern int ADXCRS_Unlock(void);
int func_0015EA98(int arg0) {
    ADXCRS_Lock(arg0);
    ADXT_StartSeamless(arg0);
    return ADXCRS_Unlock();
}
