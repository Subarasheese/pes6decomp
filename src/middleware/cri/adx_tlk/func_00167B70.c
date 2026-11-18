/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00167BB0(int, int);
extern int ADXCRS_Unlock(void);
int func_00167B70(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    func_00167BB0(arg0, arg1);
    return ADXCRS_Unlock();
}
