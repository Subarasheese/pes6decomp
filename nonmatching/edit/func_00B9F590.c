/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021FBC0(u16);
s32 func_0021EB50(u16, M2C_UNK);                    /* extern */
s32 func_0021EE40(u16, M2C_UNK);                    /* extern */
s32 func_00B94720(u16, M2C_UNK, s32);               /* extern */
s32 func_00B94A90(u16);                             /* extern */
s32 func_00B94B10(u16);                             /* extern */
s32 func_00B95060(u16);                             /* extern */
void *func_00B9C490();                              /* extern */
s8 func_00BC59F0(u16, s32, M2C_UNK);                /* extern */
extern char D_00CE3680[];
extern char D_00CE3681[];
extern char D_00CE3682[];
extern char D_00CE38A0[];
extern char D_00CE38A4[];
extern char D_00CE38DE[];
extern char D_00CE38DF[];
extern char D_00CE38E4[];
extern char D_00CE391E[];
extern char D_00CE391F[];

void func_00B9F590(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    s32 temp_v0_2;
    s32 var_s0_2;
    s32 var_s1;
    s8 temp_v0_3;
    void *temp_v0;

    temp_v0 = func_00B9C490();
    M2C_FIELD(((void *)D_00CE3680), s8 *, 0) = 1;
    (*(s8 *)D_00CE3681) = (s8) M2C_FIELD(temp_v0, s32 *, 0x40);
    (*(s8 *)D_00CE3682) = (s8) M2C_FIELD(temp_v0, s32 *, 0x4C);
    if (arg0 == 1) {
        M2C_FIELD(((void *)D_00CE3680), s8 *, 3) = (s8) M2C_FIELD(temp_v0, s32 *, 0x34);
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CE3680);
    M2C_FIELD(((void *)D_00CE3680), u16 *, 4) = (u16) M2C_FIELD(temp_v0, u16 *, 0x3A);
    M2C_FIELD(((void *)D_00CE3680), s8 *, 6) = (s8) M2C_FIELD(temp_v0, s32 *, 0x24);
    M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35) = (u8) M2C_FIELD(temp_v0, s32 *, 0x44);
    M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34) = (u8) M2C_FIELD(temp_v0, s32 *, 0x48);
    do {
        M2C_FIELD(var_s0, s32 *, 8) = func_00B94720(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), 0, var_s1);
        M2C_FIELD(var_s0, s32 *, 0x10) = func_00B94720(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), 1, var_s1);
        M2C_FIELD(var_s0, s32 *, 0x18) = func_00B94720(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), 3, var_s1);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x28) = (s16) (func_00B94B10(M2C_FIELD(((void *)D_00CE3680), u16 *, 4)) & 0xFF);
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x2A) = (s16) (func_0021EB50(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), 0) & 0xFF);
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x2C) = (s16) (func_00B94A90(M2C_FIELD(((void *)D_00CE3680), u16 *, 4)) & 0xFF);
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x2E) = (s16) (func_0021EE40(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), 0) & 0xFF);
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x30) = 0;
    M2C_FIELD(((void *)D_00CE3680), s16 *, 0x32) = 0;
    M2C_FIELD(((void *)D_00CE3680), s32 *, 0x40) = func_00B95060(M2C_FIELD(((void *)D_00CE3680), u16 *, 4));
    temp_v0_2 = func_0021FBC0(M2C_FIELD(((void *)D_00CE3680), u16 *, 4));
    M2C_FIELD(((void *)D_00CE3680), s32 *, 0x44) = temp_v0_2;
    var_s0_2 = 0;
    (*(s32 *)D_00CE38E4) = temp_v0_2;
    var_s1_2 = ((void *)D_00CE38A0);
    (*(s32 *)D_00CE38A4) = M2C_FIELD(((void *)D_00CE3680), s32 *, 0x40);
    do {
        temp_v0_3 = func_00BC59F0(M2C_FIELD(((void *)D_00CE3680), u16 *, 4), var_s0_2 & 0xFF, 0);
        M2C_FIELD(var_s1_2, s8 *, 0x48) = temp_v0_3;
        var_s0_2 += 1;
        M2C_FIELD(var_s1_2, s8 *, 8) = temp_v0_3;
        var_s1_2 += 1;
    } while (var_s0_2 < 0x20);
    (*(u8 *)D_00CE391E) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
    (*(u8 *)D_00CE38DE) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x35);
    (*(u8 *)D_00CE391F) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
    (*(u8 *)D_00CE38DF) = M2C_FIELD(((void *)D_00CE3680), u8 *, 0x34);
}
