/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int, int, int, int);
extern int adxf_LoadPartition(int, int, int, int, int, int);
extern int ADXF_Unlock(void);
int ADXF_LoadPartition(int a, int b, int c, int d, int e, int f) {
    int r;
    ADXF_Lock(a, b, c, d, e, f);
    r = adxf_LoadPartition(a, b, c, d, e, f);
    ADXF_Unlock();
    return r;
}
