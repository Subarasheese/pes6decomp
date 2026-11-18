/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_0015EF00(int);
extern int ADXCRS_Unlock(void);
int func_0015EED0(int arg0) {
    ADXCRS_Lock(arg0);
    func_0015EF00(arg0);
    return ADXCRS_Unlock();
}
