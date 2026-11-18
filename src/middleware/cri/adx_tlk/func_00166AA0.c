/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_00166AD0(int);
extern int ADXCRS_Unlock(void);
int func_00166AA0(int arg0) {
    ADXCRS_Lock(arg0);
    func_00166AD0(arg0);
    return ADXCRS_Unlock();
}
