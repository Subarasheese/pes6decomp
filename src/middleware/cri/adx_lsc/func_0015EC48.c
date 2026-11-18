/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int, int);
extern int func_0015ECA8(int, int, int, int);
extern int ADXCRS_Unlock(void);
int func_0015EC48(int a, int b, int c, int d) {
    ADXCRS_Lock(a, b, c, d);
    func_0015ECA8(a, b, c, d);
    return ADXCRS_Unlock();
}
