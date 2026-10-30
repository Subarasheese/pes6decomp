/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
extern s32 func_001F08B0(s32);
extern s32 func_002EC130(void *, s32);
M2C_UNK func_001C7F58(s32, s32);                    /* extern */
M2C_UNK func_002EC980(void *, M2C_UNK, u16);        /* extern */
M2C_UNK func_002ED080(void *, s32, s32);            /* extern */
extern char D_00B31E90[];
extern char D_00B31E94[];
extern char D_00B31E98[];
extern char D_00B31E9C[];
extern char D_00B31EA0[];
extern char D_00B31EA4[];

void func_00AF2C30(void *arg0) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    s32 *var_s1;
    s32 var_s3;
    u32 temp_v0;
    u32 var_s0;

    sp60 = (*(s32 *)D_00B31E90);
    sp64 = (*(f32 *)D_00B31E94);
    sp68 = (*(f32 *)D_00B31E98);
    sp6C = (*(f32 *)D_00B31E9C);
    sp70 = (*(f32 *)D_00B31EA0);
    sp74 = (*(f32 *)D_00B31EA4);
    temp_v0 = func_00AEFF50();
    if ((temp_v0 != 0) && (arg0 != NULL)) {
        var_s3 = 0;
        if ((s32) M2C_FIELD(temp_v0, u8 *, 0x231C) > 0) {
            var_s1 = &sp60;
            var_s0 = temp_v0;
            do {
                func_001C7F58(var_s0 + 0xA8, func_001F08B0(*var_s1));
                func_002ED080(arg0, var_s3, var_s0 + 8);
                var_s3 += 1;
                var_s1 += 4;
                var_s0 += 0x4A4;
            } while (var_s3 < (s32) M2C_FIELD(temp_v0, u8 *, 0x231C));
        }
        func_002EC130(arg0, 1);
        func_002EC980(arg0, 0, M2C_FIELD(temp_v0, u16 *, 8));
    }
}
