/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *, s32);                 /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
M2C_UNK func_00BD4040(void *, s32);                 /* extern */
s32 func_00BD45B0(u16);                             /* extern */
s32 func_00BD4730(void *);                          /* extern */
extern char D_00591BE4[];

void func_00C342C0(void *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_v0;
    u16 temp_v1;
    u16 var_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 4);
    temp_s0 = M2C_FIELD(temp_v0, u8 *, 1) * 2;
    temp_s2 = M2C_FIELD(temp_v0, u8 *, 2) * 2;
    func_00B2ACF0();
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) == 0) {
        if ((func_00207D80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), temp_s2) != 0) && (func_00BBB8C0(0x64) >= 0x47)) {
            temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
            func_00209A00(temp_a0, M2C_FIELD(temp_a0, u16 *, 0x30), temp_s0 & 0xFFFF);
        }
    } else {
        temp_a0_2 = M2C_FIELD(arg0, void **, 0);
        var_s0 = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(temp_a0_2, M2C_FIELD(temp_a0_2, f32 *, 0x6C), M2C_FIELD(temp_a0_2, f32 *, 0x70));
        temp_v0_2 = M2C_FIELD(arg0, void **, 0);
        temp_a1 = func_009B3070(M2C_FIELD(temp_v0_2, u16 *, 0x2C), M2C_FIELD(temp_v0_2, u16 *, 0x26)) & 0xFFFF;
        temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
        temp_v1 = M2C_FIELD(temp_a0_3, u16 *, 0x30);
        switch (temp_v1) {                          /* irregular */
        case 0x4B8:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x4BB;
            } else {
                var_s0 = 0x4B9;
            }
            break;
        case 0x403:
        case 0x402:
            var_s0 = 0x401;
            break;
        case 0x40F:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x411;
            } else {
                var_s0 = 0x410;
            }
            break;
        case 0x417:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x41A;
            } else {
                var_s0 = 0x419;
            }
            break;
        case 0x418:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x46A;
            } else {
                var_s0 = 0x46B;
            }
            break;
        case 0x41E:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x422;
            } else {
                var_s0 = 0x421;
            }
            break;
        case 0x42F:
        case 0x42E:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x431;
            } else {
                var_s0 = 0x430;
            }
            break;
        case 0x430:
        case 0x431:
            var_s0 = 0x432;
            break;
        case 0x439:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x43C;
            } else {
                var_s0 = 0x43B;
            }
            break;
        case 0x440:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x444;
            } else {
                var_s0 = 0x443;
            }
            break;
        case 0x4B2:
        case 0x447:
            if ((temp_a1 & 0xFFFF) < 0x5000) {
                var_s0 = 0x449;
            } else {
                var_s0 = 0x448;
            }
            break;
        case 0x448:
        case 0x449:
            var_s0 = 0x44A;
            break;
        }
        if (var_s0 == 0) {
            func_00208610(temp_a0_3, temp_a1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0x3E) = 0;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = (s8) (((*(u8 *)D_00591BE4) * 2) + func_00BBB8C0((*(u8 *)D_00591BE4) * 2));
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = 0U;
            var_v0 = func_00BD45B0(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30)) & 0xFF;
            if (var_v0 == 7) {
                var_v0 = func_00BD4730(arg0);
            }
            func_00BD4040(arg0, var_v0 & 0xFF);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 1;
        } else {
            func_00209A00(temp_a0_3, var_s0, 0);
        }
    }
}
