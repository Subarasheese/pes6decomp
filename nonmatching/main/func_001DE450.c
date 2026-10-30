/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F4380(s32);
extern s32 func_001DD520(s32);
extern int func_001DE9D0(void);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_001C7E10(M2C_UNK *);                       /* extern */
M2C_UNK func_001DE770();                            /* extern */
M2C_UNK func_001DE8A0();                            /* extern */
extern char D_003D28B0[];
extern char D_0052AE20[];
extern char D_0052AE24[];
extern char D_0052AE28[];
extern char D_0052AE2C[];
extern char D_0052AE30[];
extern char D_0052AE34[];
extern char D_0052AE38[];
extern char D_0052AE3C[];
extern char D_0052AE40[];
extern char D_0052AE41[];

s32 func_001DE450(s32 arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s32 *temp_v0_2;
    s32 temp_v0;
    s32 var_v0;

    if ((arg0 != 0) && (func_001C7E10(((void *)D_003D28B0)) != 0)) {
        func_001C48E8(((void *)D_0052AE20), 0, 0x3C);
        temp_v0 = func_001DD520(arg1);
        (*(s32 *)D_0052AE20) = temp_v0;
        if (temp_v0 != 0) {
            (*(s32 *)D_0052AE38) = arg1;
            temp_v0_2 = func_001F4380(arg1);
            if (temp_v0_2 != NULL) {
                (*(s32 *)D_0052AE34) = *temp_v0_2;
                (*(s32 *)D_0052AE24) = *temp_v0_2;
                (*(s32 *)D_0052AE28) = *temp_v0_2;
            } else {
                (*(s32 *)D_0052AE34) = arg1;
                (*(s32 *)D_0052AE24) = 0x3F800000;
                (*(s32 *)D_0052AE28) = 0x3F800000;
            }
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 0;
    }
    if (var_v0 == 0) {
        return 0;
    }
    (*(s32 *)D_0052AE2C) = arg0;
    (*(s32 *)D_0052AE30) = 0;
    (*(s8 *)D_0052AE40) = 0xFF;
    if (arg2 >= 0) {
        var_f0 = (f32) arg2;
    } else {
        var_f0 = 2.0f * (f32) (((u32) arg2 >> 1) | (arg2 & 1));
    }
    (*(f32 *)D_0052AE3C) = var_f0;
    if (func_001DE9D0() == 5) {
        func_001DE8A0();
    } else {
        func_001DE770();
    }
    return ((*(u8 *)D_0052AE41) + 1) & 0xFF;
}
