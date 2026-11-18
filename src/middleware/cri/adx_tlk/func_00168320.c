/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00168360(int, int);
extern int ADXCRS_Unlock(void);
int func_00168320(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    func_00168360(arg0, arg1);
    return ADXCRS_Unlock();
}
