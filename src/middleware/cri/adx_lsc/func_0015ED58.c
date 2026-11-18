/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int func_0015EDA8(int, int, int);
extern int ADXCRS_Unlock(void);
int func_0015ED58(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    func_0015EDA8(a, b, c);
    return ADXCRS_Unlock();
}
