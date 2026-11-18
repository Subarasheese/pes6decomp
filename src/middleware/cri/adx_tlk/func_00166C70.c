/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00166CA0(int);
extern int ADXCRS_Unlock(void);
int func_00166C70(int arg0) {
    ADXCRS_Lock(arg0);
    func_00166CA0(arg0);
    return ADXCRS_Unlock();
}
