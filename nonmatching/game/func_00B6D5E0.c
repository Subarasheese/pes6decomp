/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00979270(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B3480(void *, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_00B6D3E0(void **);                     /* extern */
M2C_UNK func_00BA90E0(void **, u16, u16, f32);      /* extern */
s32 func_00BBB7F0(M2C_UNK);                         /* extern */
extern s32 D_003E74CC;
extern char D_0058E7F0[];

void func_00B6D5E0(void **arg0) {
    s32 temp_s2;
    s32 temp_v1_2;
    s32 var_a0;
    u16 temp_a2;
    u16 temp_v1;
    u8 *var_a3;
    u8 var_a2;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v1_3;

    temp_s0 = *arg0;
    temp_a0 = M2C_FIELD(temp_s0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    if ((temp_v1 == 0x38C) || (temp_v1 == 0x393)) {
        if (M2C_FIELD(temp_s0, s32 *, 0x1C) < 0x241) {
            func_002075B0(temp_a0, 0x489, 0, 8);
            M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
        }
    }
    if (func_00979270(*arg0, 0) != 0) {
        M2C_FIELD(*arg0, s16 *, 0x3C) = 0;
        temp_v0 = *arg0;
        temp_v1_2 = M2C_FIELD(temp_v0, s32 *, 0x94);
        if (temp_v1_2 & 2) {
            M2C_FIELD(temp_v0, s32 *, 0x94) = (s32) (temp_v1_2 & ~2);
        }
        temp_a1 = *arg0;
        if (M2C_FIELD(temp_a1, s32 *, 0x98) != 0) {
            var_a3 = ((void *)D_0058E7F0);
            var_a2 = (*(u8 *)D_0058E7F0);
            var_a0 = 0;
            if ((s32) var_a2 < 0x17) {
                do {
                    if ((M2C_FIELD(var_a3, s32 *, 0x94) & 4) && (M2C_FIELD(var_a3, u16 *, 0x18) == 7)) {
                        var_a0 += 1;
                    }
                    var_a2 += 1;
                    var_a3 += 0x240;
                } while ((s32) var_a2 < 0x17);
            }
            if (var_a0 < 3) {
                goto block_14;
            }
            goto block_18;
        }
block_18:
        if ((func_009B3070(M2C_FIELD(temp_a1, u16 *, 0x26), M2C_FIELD(temp_a1, u16 *, 0x2C)) & 0xFFFF) < 0x1000) {
            M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
            M2C_FIELD(*arg0, s32 *, 0x6C) = 0;
            M2C_FIELD(*arg0, s32 *, 0x70) = 0;
            func_00B6D3E0(arg0);
            func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
        } else {
block_14:
            func_002075B0(M2C_FIELD(*arg0, void **, 4), 0x384, 0, 8);
            temp_s2 = func_009B3480(*arg0, 0xC6526400, 0) & 0xFFFF;
            M2C_FIELD(*arg0, u16 *, 0x2C) = (u16) (temp_s2 + func_00BBB7F0(0x100));
            M2C_FIELD(*arg0, s16 *, 0x18) = 5;
            temp_a2 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30);
            func_00BA90E0(arg0, M2C_FIELD(*arg0, u16 *, 0x2C), temp_a2, (f32) (M2C_FIELD(((temp_a2 * 4) + D_003E74CC), s32 *, 0x2FD8) - 2));
            temp_v1_3 = *arg0;
            M2C_FIELD(M2C_FIELD(temp_v1_3, void **, 4), s8 *, 0x2D) = (s8) ((((M2C_FIELD(temp_v1_3, u16 *, 0x2C) - M2C_FIELD(temp_v1_3, u16 *, 0x26)) + 0x10000) & 0xFFFF) < 0x8001);
            M2C_FIELD(*arg0, s32 *, 0x1C) = 0;
        }
    }
}
