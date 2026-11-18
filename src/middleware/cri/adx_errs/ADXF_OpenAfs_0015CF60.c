/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int);
extern int adxf_OpenAfs(int, int);
extern int ADXF_Unlock(void);
int ADXF_OpenAfs(int a, int b) {
    int r;
    ADXF_Lock(a, b);
    r = adxf_OpenAfs(a, b);
    ADXF_Unlock();
    return r;
}
