/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int, int);
extern int adxf_Seek(int, int, int);
extern int ADXF_Unlock(void);
int ADXF_Seek(int a, int b, int c) {
    int r;
    ADXF_Lock(a, b, c);
    r = adxf_Seek(a, b, c);
    ADXF_Unlock();
    return r;
}
