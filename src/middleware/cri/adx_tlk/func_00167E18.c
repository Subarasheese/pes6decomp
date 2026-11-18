/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int func_00167E68(int, int, int);
extern int ADXCRS_Unlock(void);
int func_00167E18(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    func_00167E68(a, b, c);
    return ADXCRS_Unlock();
}
