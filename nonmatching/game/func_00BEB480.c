/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern void func_00B252E0(void);
extern int func_0029AC20(void);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
extern s32 func_00C01090(s32);
extern void func_0027B6D0(void *, s32);
M2C_UNK func_00297DF0(void **);                     /* extern */
void **func_00299FE0(M2C_UNK);                      /* extern */
M2C_UNK func_009E1CB0(M2C_UNK, u32);                /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
s32 func_00BA91C0();                                /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
extern char D_00591BE4[];
extern char D_00591E14[];
extern void *D_00CBD570;

void func_00BEB480(void) {
    s32 var_s0_2;
    s32 var_s1;
    u32 temp_a1;
    void **temp_v0;
    void **var_s0;

    func_00AD0A20();
    if ((u32) (*(u32 *)D_00591E14) < (u32) ((*(u8 *)D_00591BE4) * 5)) {
        func_00152130(0, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF);
    }
    if (D_00CBD570 != NULL) {
        var_s0 = func_00299FE0(0);
        var_s1 = 0;
        do {
            func_00297DF0(var_s0);
            var_s1 += 1;
            var_s0 += 0x3C;
        } while (var_s1 < 4);
    }
    if (D_00CBD570 != NULL) {
        temp_v0 = func_00299FE0(0);
        M2C_FIELD(D_00CBD570, f32 *, 0x110) = (f32) M2C_FIELD(M2C_FIELD(*temp_v0, void **, 0x10), f32 *, 0x110);
        M2C_FIELD(D_00CBD570, f32 *, 0x114) = (f32) M2C_FIELD(M2C_FIELD(*temp_v0, void **, 0x10), f32 *, 0x114);
        M2C_FIELD(D_00CBD570, f32 *, 0x118) = (f32) M2C_FIELD(M2C_FIELD(*temp_v0, void **, 0x10), f32 *, 0x118);
        func_0027B6D0(D_00CBD570, 0);
    }
    if (func_0029AC20() != 0) {
        return;
    }
    func_00BA92A0(func_00BF6270());
    if (func_00BA91C0() & 0x1008) {
        (*(u32 *)D_00591E14) = ((*(u8 *)D_00591BE4) * 5) + 1;
    }
    var_s0_2 = 5;
    if (func_002DCA30() != 0) {
        var_s0_2 = 4;
    }
    temp_a1 = (*(u32 *)D_00591E14) + 1;
    (*(u32 *)D_00591E14) = temp_a1;
    if ((u32) ((*(u8 *)D_00591BE4) * var_s0_2) >= temp_a1) {
        if ((temp_a1 >= 3U) && (func_00C01090(0x16) == 0) && (func_00C01090(0x1A) == 0)) {
            func_00B252E0();
        }
    } else {
        func_009E1CB0(3, temp_a1);
    }
}
