/* compiler: ee-gcc-2.96 */
extern int ADXF_Lock(int);
extern int func_0015E278(int, int);
extern int ADXF_Unlock(void);
int func_0015E238(int arg0, int arg1) {
    ADXF_Lock(arg0);
    func_0015E278(arg0, arg1);
    return ADXF_Unlock();
}
