/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int adxt_Create(int, int, int);
extern int ADXCRS_Unlock(void);
int ADXT_Create(int a, int b, int c) {
    int r;
    ADXCRS_Lock(a, b, c);
    r = adxt_Create(a, b, c);
    ADXCRS_Unlock();
    return r;
}
