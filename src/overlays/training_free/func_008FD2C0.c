/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001EEE60(s32, char *);
s32 func_00C74BF0(char *, s32);
extern char D_003AB520[];

void func_008FD2C0(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001EEE60(M2C_FIELD(arg0, s32 *, 0x18), ((char *)D_003AB520) + (arg1 * 4));
        func_00C74BF0(arg0 + 8, arg1);
    }
}
