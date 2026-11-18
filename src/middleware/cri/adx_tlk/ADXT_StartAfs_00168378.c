/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int adxt_StartAfs(int, int, int);
extern int ADXCRS_Unlock(void);
int ADXT_StartAfs(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    adxt_StartAfs(a, b, c);
    return ADXCRS_Unlock();
}
