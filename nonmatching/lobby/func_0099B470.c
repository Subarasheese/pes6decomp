/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001D6D30(s32, s32);
extern s32 func_001F0080(void *);
M2C_UNK vsprintf(M2C_UNK *, s32, s32);         /* extern */
void *func_001F0160(s32);                           /* extern */
extern char D_00A7D900[];

void func_0099B470(void *arg0, s32 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s64 arg6, s64 arg7, M2C_UNK arg_sp0) {
    s64 sp50;
    s64 sp58;
    s64 sp60;
    s64 sp68;
    s64 sp70;
    s64 sp78;
    s32 temp_v0;
    s32 var_v1;

    sp50 = arg2;
    sp58 = arg3;
    sp60 = arg4;
    sp68 = arg5;
    sp70 = arg6;
    sp78 = arg7;
    if (arg0 != NULL) {
        temp_v0 = func_001F0080(func_001F0160(func_001D6D30(M2C_FIELD(arg0, s32 *, 0x10), arg1)));
        if (temp_v0 != 0) {
            if (2 >= 8) {
                var_v1 = 0;
            } else {
                var_v1 = (8 - 2) * 8;
            }
            vsprintf(((void *)D_00A7D900), temp_v0, &arg_sp0 - var_v1);
            func_001DF820(M2C_FIELD(arg0, void **, 0xC), (s32) ((void *)D_00A7D900));
        }
    }
}
