/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern short D_003B31D0;
int func_002D9600(void);
void func_00105410(void *);
int func_002D9740(void) {
    int status[4];
    int result;
    if (func_002D9600()) {
        result = D_003B31D0;
    } else {
        func_00105410(status);
        result = status[0] >> 21;
        if (((unsigned int)status[0] >> 13 & 7) == 0) result = 540;
    }
    return result;
}
