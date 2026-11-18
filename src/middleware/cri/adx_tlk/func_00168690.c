/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int ADXT_StartMem2(int, int, int);
extern int ADXCRS_Unlock(void);
int func_00168690(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    ADXT_StartMem2(a, b, c);
    return ADXCRS_Unlock();
}
