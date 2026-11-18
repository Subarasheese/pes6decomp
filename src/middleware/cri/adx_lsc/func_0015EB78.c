/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_0015EBB8(int, int);
extern int ADXCRS_Unlock(void);
int func_0015EB78(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    func_0015EBB8(arg0, arg1);
    return ADXCRS_Unlock();
}
