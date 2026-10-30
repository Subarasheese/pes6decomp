/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern void func_001BC300(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00960FA0(M2C_UNK);                     /* extern */
M2C_UNK func_00B0AA50();                            /* extern */
M2C_UNK func_00B0ABE0(u8);                          /* extern */
M2C_UNK func_00B0AEB0(u8);                          /* extern */
M2C_UNK func_00B0AF30();                            /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
M2C_UNK func_00B0EDF0();                            /* extern */
M2C_UNK func_00B0EF90();                            /* extern */
M2C_UNK func_00B151F0();                            /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
s32 func_00B152D0(u8, s32);                         /* extern */
M2C_UNK func_00B15300(s32);                         /* extern */
s32 func_00B26EF0(s32);                             /* extern */
M2C_UNK func_00B34FE0();                            /* extern */
extern char D_00B7FBF0[];
extern char D_00B7FBF4[];
extern char D_00B7FBF8[];
extern char D_00B7FBFC[];
extern char D_00B7FC00[];
extern char D_00B7FC04[];
extern char D_00B7FC08[];
extern char D_00B7FC0C[];
extern char D_00B7FC10[];
extern char D_00B7FC14[];
extern char D_00B7FC18[];
extern char D_00B7FC1C[];

s32 func_00B11150(void) {
    s32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s32 *var_s1;
    s32 temp_s1;
    u32 temp_v0;
    u32 var_s2;
    void *temp_v0_2;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0xBF4) != 6) {
            func_00960FA0(1);
            func_00B0EDF0();
            M2C_FIELD(temp_v0, s32 *, 0xC28) = 0;
            temp_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
            temp_v0_2 = M2C_FIELD(temp_v0, void **, 0xC3C);
            M2C_FIELD(temp_v0_2, f32 *, 0) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC40);
            M2C_FIELD(temp_v0_2, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC44);
            func_00B34FE0();
            func_00B15300(func_00B26EF0(temp_s1));
            if (func_00B152D0(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) == 0) {
                func_00B151F0();
            }
            func_00B0AF30();
            func_00B0AEB0(M2C_FIELD(temp_v0, u8 *, 0xC0E));
            func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
            func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
            func_00958000(0x24);
        } else {
            func_00B0EF90();
            sp40 = (*(s32 *)D_00B7FBF0);
            sp44 = (*(f32 *)D_00B7FBF4);
            sp48 = (*(f32 *)D_00B7FBF8);
            sp4C = (*(f32 *)D_00B7FBFC);
            sp50 = (*(f32 *)D_00B7FC00);
            sp54 = (*(f32 *)D_00B7FC04);
            sp58 = (*(f32 *)D_00B7FC08);
            sp5C = (*(f32 *)D_00B7FC0C);
            sp60 = (*(f32 *)D_00B7FC10);
            sp64 = (*(f32 *)D_00B7FC14);
            sp68 = (*(f32 *)D_00B7FC18);
            sp6C = (*(f32 *)D_00B7FC1C);
            if (func_00B15370() != 0) {
                func_001BC300();
                var_s2 = 0;
                var_s1 = &sp40;
                do {
                    func_001BC3D0(0, M2C_FIELD(var_s1, s32 *, 0), M2C_FIELD(var_s1, s32 *, 4), M2C_FIELD(var_s1, s32 *, 8));
                    var_s2 += 1;
                    var_s1 += 0xC;
                } while (var_s2 < 4U);
            }
            func_00B0ABE0(M2C_FIELD(temp_v0, u8 *, 0xBF5));
            func_00B0AA50();
        }
        func_0026E840(0x84028400);
    }
    return 0;
}
