/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_008D4A50(char *, s32);
extern s32 func_008D4A60(char *, s32);
extern void func_008D4DF0(s32, s32, s32, s32);

void func_008E2A50(char *arg0, s32 arg1, s32 arg2, s32 arg3, char *arg4) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    func_008D4DF0((s32) (arg0 + 4), arg1, arg2, arg3);
    func_008D4A60(arg0 + 4, M2C_FIELD(arg4, s32 *, 0));
    func_008D4A50(arg0 + 4, M2C_FIELD(arg4, s32 *, 4));
}
