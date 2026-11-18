/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int);
extern int adxf_Close(int);
extern int ADXF_Unlock(void);
int ADXF_Close(int arg0) {
    ADXF_Lock(arg0);
    adxf_Close(arg0);
    return ADXF_Unlock();
}
