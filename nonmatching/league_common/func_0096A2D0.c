/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
extern void * func_0022C1E0(void);
extern s32 func_00230380(void);
extern s32 func_00226710(void);
extern s32 func_0022C140(s32);
extern u8 func_00239BE0(u8);
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_00955520(M2C_UNK, s32);                /* extern */
M2C_UNK func_0098D520(M2C_UNK);                     /* extern */
M2C_UNK func_0099E5A0();                            /* extern */
M2C_UNK func_0099EA10(u8);                          /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;

s32 func_0096A2D0(void) {
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s2;
    u8 temp_s0_2;
    u8 var_s0;
    u8 var_s2_2;
    void *temp_s0;
    void *temp_s1;

    var_s2 = -1;
    temp_s1 = func_00229460();
    temp_s0 = func_0022C1E0();
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else {
        temp_v0 = func_00226710() & 0xFF;
        switch (temp_v0) {                          /* irregular */
        case 0x36:
        case 0x34:
        case 0x1A:
        case 0x18:
        case 0x16:
        case 0x14:
        case 0x12:
        case 0xF:
        case 0xD:
        case 0xB:
            if ((temp_s1 != NULL) && (((s32) M2C_FIELD(temp_s1, u8 *, 0x4AB8) % 2) != 0) && (func_00230380() == 0)) {
                var_s0 = M2C_FIELD(temp_s1, u8 *, 0x4AB6);
                if ((s32) var_s0 < (s32) M2C_FIELD(temp_s1, u8 *, 0x4ABA)) {
loop_27:
                    func_00955520(0, var_s0 & 0xFF);
                    func_0098D520(0);
                    if (var_s0 != M2C_FIELD(temp_s1, u8 *, 0x4AB6)) {
                        var_s0 += 1;
                        if ((s32) var_s0 >= (s32) M2C_FIELD(temp_s1, u8 *, 0x4ABA)) {

                        } else {
                            goto loop_27;
                        }
                    }
                }
            }
            break;
        case 0x39:
        case 0x2D:
        case 0x3A:
        case 0xA:
        case 0x9:
        case 0x8:
        case 0x5:
        case 0x4:
        case 0x3:
        case 0x2:
            if (temp_s0 != NULL) {
                temp_s0_2 = M2C_FIELD(temp_s0, u8 *, 1);
                if (M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) {
                    temp_v0_2 = func_0022C140((s32) temp_s0_2);
                    if (temp_v0_2 != 0) {
                        var_s2_2 = M2C_FIELD(temp_v0_2, u8 *, 1);
                        temp_s1_2 = func_00239BE0(M2C_FIELD(temp_v0_2, u8 *, 9)) & 0xFF;
                        if (temp_s1_2 >= (s32) var_s2_2) {
                            do {
                                func_0099E5A0();
                                func_0099EA10(temp_s0_2);
                                var_s2_2 += 1;
                            } while (temp_s1_2 >= (s32) var_s2_2);
                        }
                    }
                }
            }
            break;
        }
        var_s2 = 0x1B;
        func_0094C790(1);
    }
    if (var_s2 != -1) {
        func_0094C790(0);
    }
    return var_s2;
}
