/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int, int);
extern int ADXF_GetNumReqSct(int, int);
extern int ADXF_Unlock(void);
int func_0015DD78(int a, int b) {
    int r;
    ADXF_Lock(a, b);
    r = ADXF_GetNumReqSct(a, b);
    ADXF_Unlock();
    return r;
}
