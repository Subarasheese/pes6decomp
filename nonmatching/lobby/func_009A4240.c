/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0081DDE0(s32, s8 *);                   /* extern */
M2C_UNK func_0081DF10(s32, M2C_UNK);                /* extern */
s32 func_008204A0(s32);                             /* extern */
M2C_UNK func_00999C10(s32, M2C_UNK);                /* extern */
M2C_UNK func_00999F20(s32, M2C_UNK, s32);           /* extern */
s32 func_0099AE70(s32);                             /* extern */
M2C_UNK func_0099B470(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0099B530(s32, s32, s32);               /* extern */
M2C_UNK func_0099D2A0(s32, s64);                    /* extern */
M2C_UNK func_0099D490(s32, s32);                    /* extern */

void func_009A4240(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    s8 sp9C;
    s8 sp9D;
    s8 sp9E;
    s8 sp9F;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_v0;
    s64 var_s0;

    if (arg0 != NULL) {
        func_0099B530(M2C_FIELD(arg0, s32 *, 8), func_001F08B0(0x01FD0013), arg1 & 0xFFFF);
        switch (arg2) {                             /* irregular */
        case 0:
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0xC), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0xC), 2, func_001F08B0(0x6C005F));
            sp9C = 0x1F;
            sp9D = 0x2E;
            sp9E = 0x99;
            sp9F = 0xFF;
            func_0081DDE0(M2C_FIELD(arg0, s32 *, 0xC), &sp9C);
            break;
        case 1:
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0xC), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0xC), 2, func_001F08B0(0x6C0061));
            sp9C = 0x1F;
            sp9D = 0x99;
            sp9E = 0x5C;
            sp9F = 0xFF;
            func_0081DDE0(M2C_FIELD(arg0, s32 *, 0xC), &sp9C);
            break;
        case 2:
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0xC), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0xC), 2, func_001F08B0(0x6C0060));
            sp9C = 0xCC;
            sp9D = 0x42;
            sp9E = 0x29;
            sp9F = 0xFF;
            func_0081DDE0(M2C_FIELD(arg0, s32 *, 0xC), &sp9C);
            break;
        default:
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0xC), 0);
            break;
        }
        temp_s3 = arg3 & 0xFFFF;
        if (temp_s3 == 0xFFFF) {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), 0);
            func_00999C10(M2C_FIELD(arg0, s32 *, 0x14), 0);
        } else {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x10), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0x10), 3, func_0099AE70(arg3));
            func_00999C10(M2C_FIELD(arg0, s32 *, 0x14), 1);
            func_00999F20(M2C_FIELD(arg0, s32 *, 0x14), 1, temp_s3);
        }
        func_0099B470(M2C_FIELD(arg0, s32 *, 0x18), 6, arg4 & 0xFFFF);
        temp_s1 = arg5 & 0xFFFF;
        if (temp_s1 == 0xFFFF) {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x1C), 0);
            func_00999C10(M2C_FIELD(arg0, s32 *, 0x20), 0);
        } else {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x1C), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0x1C), 4, func_0099AE70(arg5));
            func_00999C10(M2C_FIELD(arg0, s32 *, 0x20), 1);
            func_00999F20(M2C_FIELD(arg0, s32 *, 0x20), 1, temp_s1);
        }
        func_0099B470(M2C_FIELD(arg0, s32 *, 0x24), 7, arg6 & 0xFFFF);
        if (arg_sp0 == 0) {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x28), 0);
        } else {
            func_0081DF10(M2C_FIELD(arg0, s32 *, 0x28), 1);
            func_0099B470(M2C_FIELD(arg0, s32 *, 0x28), 5, arg_sp0);
        }
        temp_v0 = func_008204A0(arg7);
        var_s0 = 1;
        if ((temp_v0 != 1) && (temp_v0 != 0)) {

        } else {
            var_s0 = 0;
        }
        func_0099D490(M2C_FIELD(arg0, s32 *, 0x2C), temp_v0);
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 0x2C), (s64) (var_s0 << 0x38) >> 0x38);
    }
}
