/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int);
extern int adxf_ReadNw(int, int, int);
extern int ADXF_Unlock(void);
int ADXF_ReadNw(int a, int b, int c) {
    int r;
    ADXF_Lock(a, b, c);
    r = adxf_ReadNw(a, b, c);
    ADXF_Unlock();
    return r;
}
