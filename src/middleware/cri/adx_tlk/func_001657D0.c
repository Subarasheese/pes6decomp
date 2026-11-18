/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00165810(int, int);
extern int ADXCRS_Unlock(void);
int func_001657D0(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    func_00165810(arg0, arg1);
    return ADXCRS_Unlock();
}
