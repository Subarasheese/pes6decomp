/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int);
extern int func_001658C8(int);
extern int ADXCRS_Unlock(void);
int func_00165898(int arg0) {
    ADXCRS_Lock(arg0);
    func_001658C8(arg0);
    return ADXCRS_Unlock();
}
