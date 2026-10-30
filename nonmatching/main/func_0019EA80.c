/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00145380(s32);
M2C_UNK func_0014E3B0(s32, u16, s32, s32, s32, s32, u8, u8); /* extern */
M2C_UNK func_0014E4E0(s32, s32, u16, void *, s32, s32); /* extern */
extern char D_00520314[];
extern char D_00520318[];
extern char D_0052031C[];

void func_0019EA80(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    u8 temp_a3;
    u8 temp_a6;
    u8 temp_a7;

    if ((*(s32 *)D_00520314) != 0) {
        if (arg1 != NULL) {
            temp_a7 = M2C_FIELD(arg1, u8 *, 2);
            temp_a6 = M2C_FIELD(arg1, u8 *, 1);
            temp_a3 = M2C_FIELD(arg1, u8 *, 0);
            func_0014E3B0((*(s32 *)D_00520314), (*(u16 *)D_0052031C), temp_a3 + ((s32) (arg2 * (M2C_FIELD(arg0, u8 *, 0) - temp_a3)) / arg3), temp_a6 + ((s32) (arg2 * (M2C_FIELD(arg0, u8 *, 1) - temp_a6)) / arg3), temp_a7 + ((s32) (arg2 * (M2C_FIELD(arg0, u8 *, 2) - temp_a7)) / arg3), arg3, temp_a6, temp_a7);
        } else {
            func_0014E4E0((*(s32 *)D_00520318), (*(s32 *)D_00520314), (*(u16 *)D_0052031C), arg0, arg2, arg3);
        }
        func_00145380(0x2751);
    }
}
