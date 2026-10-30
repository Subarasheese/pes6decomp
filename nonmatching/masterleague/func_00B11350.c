/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
M2C_UNK func_002F3A00(s32);                         /* extern */
M2C_UNK func_002F3AE0(s32, f32 *);                  /* extern */
M2C_UNK func_002F3F30(s32, M2C_UNK, M2C_UNK, s8 *); /* extern */
s32 func_0095F420(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_0099B4B0();                                /* extern */
void *func_00B15370();                              /* extern */
s32 func_00B223F0(s32);                             /* extern */
extern char D_00B7FA34[];
extern char D_00B7FB90[];
extern char D_00B7FB94[];
extern char D_00B7FB98[];
extern char D_00B7FB9C[];

s32 func_00B11350(void) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s8 sp8C;
    s8 sp8D;
    s8 sp8E;
    s8 sp8F;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_s4;
    s32 var_s5;
    s32 var_v0;
    s8 *var_v1;
    u64 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    var_v0 = 4;
    var_v1 = &sp8C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_00B15370();
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s32 *, 0xAE0) == 0) {
            return 0;
        }
        temp_s0 = func_00225820() & 0xFF;
        temp_s1 = func_00B223F0(temp_s0);
        var_s4 = 0;
        var_s5 = 0;
        do {
            temp_v0_2 = func_00994C60(temp_s0 & 0xFF, var_s5);
            if ((temp_v0_2 != NULL) && (M2C_FIELD(temp_v0_2, u16 *, 4) != 0) && ((M2C_FIELD(temp_v0_2, u8 *, 0) & 1) != 1)) {
                temp_v1 = (u64) ((s64) (u16) M2C_FIELD(temp_v0_2, u8 *, 0) << 0x35) >> 0x3C;
                if ((temp_v1 != 3) && (temp_v1 != 2)) {

                } else {
                    var_s4 += M2C_FIELD(temp_v0_2, u16 *, 6);
                    if (func_0099B4B0() != 1) {
                        var_s4 += (u16) M2C_FIELD(temp_v0_2, u16 *, 8) >> 1;
                    }
                }
            }
            var_s5 += 1;
        } while (var_s5 < 0x25);
        if (temp_s1 >= var_s4) {
            return 0;
        }
        sp70 = (*(f32 *)D_00B7FB90);
        sp74 = (*(f32 *)D_00B7FB94);
        sp78 = (*(f32 *)D_00B7FB98);
        sp7C = (*(f32 *)D_00B7FB9C);
        M2C_FIELD(temp_v0, s32 *, 0xC04) = func_0095F420(((void *)D_00B7FA34), 1, 0, 0);
        sp8C = 0xFF;
        sp8D = 0xDC;
        sp8F = 0xFF;
        sp8E = 0x28;
        func_002F3F30(M2C_FIELD(temp_v0, s32 *, 0xC04), 0, 0, &sp8C);
        func_002F3A00(M2C_FIELD(temp_v0, s32 *, 0xC04));
        func_002F3AE0(M2C_FIELD(temp_v0, s32 *, 0xC04), &sp70);
        return 1;
    }
    return 0;
}
