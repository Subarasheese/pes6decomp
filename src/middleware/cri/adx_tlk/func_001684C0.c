/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int, int);
extern int func_00168520(int, int, int, int);
extern int ADXCRS_Unlock(void);
int func_001684C0(int a, int b, int c, int d) {
    ADXCRS_Lock(a, b, c, d);
    func_00168520(a, b, c, d);
    return ADXCRS_Unlock();
}
