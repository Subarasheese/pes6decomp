/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008B4680(M2C_UNK);                     /* extern */
s32 func_008BA000(s32 *, M2C_UNK);                  /* extern */
s32 func_008C13D0(s32, s32, s32);                   /* extern */
s32 func_008C1490(M2C_UNK, s32);                    /* extern */
M2C_UNK func_008C59E0(void *, s32);                 /* extern */
M2C_UNK func_008C5D40(void *, void *, s32);         /* extern */
M2C_UNK func_008C5DF0(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_008E19B0(void *);                      /* extern */
M2C_UNK func_008E1AB0(void *);                      /* extern */
extern char D_008EC490[];
extern char D_008EC4D0[];

void func_008E1FE0(void *arg0, s32 arg1, s32 arg2) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 *var_s1;
    s32 *var_s3;
    s32 var_a2;
    s32 var_s4;
    void *temp_a0;
    void *var_a1;
    void *var_s0;

    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    var_a2 = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    var_a1 = arg0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    do {
        temp_a0 = arg0 + var_a2;
        M2C_FIELD(temp_a0, s8 *, 0x20) = 1;
        var_a2 += 8;
        M2C_FIELD(var_a1, s32 *, 0x40) = 0;
        M2C_FIELD(var_a1, s32 *, 0x84) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x21) = 1;
        M2C_FIELD(var_a1, s32 *, 0x44) = 0;
        M2C_FIELD(var_a1, s32 *, 0x88) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x22) = 1;
        M2C_FIELD(var_a1, s32 *, 0x48) = 0;
        M2C_FIELD(var_a1, s32 *, 0x8C) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x23) = 1;
        M2C_FIELD(var_a1, s32 *, 0x4C) = 0;
        M2C_FIELD(var_a1, s32 *, 0x90) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x24) = 1;
        M2C_FIELD(var_a1, s32 *, 0x50) = 0;
        M2C_FIELD(var_a1, s32 *, 0x94) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x25) = 1;
        M2C_FIELD(var_a1, s32 *, 0x54) = 0;
        M2C_FIELD(var_a1, s32 *, 0x98) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x26) = 1;
        M2C_FIELD(var_a1, s32 *, 0x58) = 0;
        M2C_FIELD(var_a1, s32 *, 0x9C) = 0;
        M2C_FIELD(temp_a0, s8 *, 0x27) = 1;
        M2C_FIELD(var_a1, s32 *, 0x5C) = 0;
        M2C_FIELD(var_a1, s32 *, 0xA0) = 0;
        var_a1 += 0x20;
    } while (var_a2 < 0x10);
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    func_008C5D40(arg0, var_a1, var_a2);
    func_008C5DF0(arg0, 0xB, arg2, arg1);
    if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_008C1490(0x27, arg1);
    }
    func_008C59E0(arg0, func_001F08B0(0x3C0009));
    sp60 = 0;
    sp64 = 0;
    sp68 = 0;
    sp6C = 0;
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = func_008BA000(&sp60, 0);
    }
    func_008E1AB0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        var_s4 = 0;
        var_s3 = ((void *)D_008EC4D0);
        var_s1 = ((void *)D_008EC490);
        var_s0 = arg0;
        do {
            M2C_FIELD(var_s0, s32 *, 0x40) = func_008C13D0(M2C_FIELD(arg0, s32 *, 0x38), *var_s1, func_001F08B0(*var_s3));
            var_s4 += 1;
            var_s3 += 4;
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s4 < 0x10);
        M2C_FIELD(arg0, s32 *, 0x80) = func_008C13D0(M2C_FIELD(arg0, s32 *, 0x38), 0x6E, 0);
    }
    func_008E19B0(arg0);
    func_008B4680(1);
}
