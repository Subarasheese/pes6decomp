/* compiler: ee-gcc-2.96 */
extern int ADXCRS_Lock(int, int, int);
extern int ADXT_EntryAfs(int, int, int);
extern int ADXCRS_Unlock(void);
int func_0015E980(int a, int b, int c) {
    ADXCRS_Lock(a, b, c);
    ADXT_EntryAfs(a, b, c);
    return ADXCRS_Unlock();
}
