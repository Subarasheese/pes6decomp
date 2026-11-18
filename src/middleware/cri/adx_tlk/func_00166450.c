/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int func_001664A0(int, int, int);
extern int ADXCRS_Unlock(void);
int func_00166450(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    func_001664A0(a, b, c);
    return ADXCRS_Unlock();
}
