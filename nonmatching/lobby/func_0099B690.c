/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
extern s32 func_001D6D30(s32, s32);
extern s32 func_001F0080(void *);
M2C_UNK vsprintf(M2C_UNK *, s32, s32);         /* extern */
void *func_001F0160(s32);                           /* extern */
extern char D_00A7D900[];

s32 func_0099B690(s32 arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, M2C_UNK arg_sp0) {
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;
    s64 sp80;
    s64 sp88;
    s32 temp_v0;
    s32 var_v1;

    sp60 = arg2;
    sp68 = arg3;
    sp70 = arg4;
    sp78 = arg5;
    sp80 = arg6;
    sp88 = arg7;
    if (arg0 == 0) {
        return 0;
    }
    temp_v0 = func_001F0080(func_001F0160(func_001D6D30(arg0, arg1)));
    if (temp_v0 != 0) {
        if (2 >= 8) {
            var_v1 = 0;
        } else {
            var_v1 = (8 - 2) * 8;
        }
        vsprintf(((void *)D_00A7D900), temp_v0, &arg_sp0 - var_v1);
        return func_001D6E70(arg0, (s32) ((s64) ((s64) arg1 << 0x20) >> 0x20), (s32) ((void *)D_00A7D900));
    }
    return 0;
}
