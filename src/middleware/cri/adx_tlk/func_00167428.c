/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00167468(int, int);
extern int ADXCRS_Unlock(void);
int func_00167428(int arg0, int arg1) {
    ADXCRS_Lock(arg0);
    func_00167468(arg0, arg1);
    return ADXCRS_Unlock();
}
