/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B30B0(s32, s32);
s32 func_0099DFF0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_005926E8[];

void func_00A80CF0(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    u16 temp_s1;
    u16 temp_s2;
    void *temp_s0_2;
    void *temp_v0;

    temp_a3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    if (temp_a3 >= 0x3000) {
        temp_a2 = 0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC);
        var_a0 = 8;
        if (temp_a2 < temp_a3) {
            temp_v1 = temp_a3 - temp_a2;
            var_v0 = temp_v1 >> 9;
            if (temp_v1 < 0) {
                var_v0 = (s32) (temp_v1 + 0x1FF) >> 9;
            }
            var_a0 = var_v0 + 8;
            goto block_7;
        }
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (((temp_a3 + 0x800) >= temp_a1) || (temp_a1 >= temp_a2)) {
block_7:
            temp_s3 = func_002AE670(var_a0);
            if ((M2C_FIELD(arg0, s32 *, 0x98) != 2) && ((0x1100 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x28), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x28) && ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x69) && (temp_a0 = M2C_FIELD(arg0, s32 *, 0x98), (temp_a0 != 3)) && (temp_a0 != 4) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x64000U) && (temp_s2 = M2C_FIELD(arg0, u16 *, 0x28), temp_s1 = M2C_FIELD(arg0, u16 *, 0x10C), temp_v0 = ((*(u8 *)D_005926E8) * 4) + Pes6Ball_Current, temp_s0 = (((temp_s1 - temp_s2) + 0x10000) & 0xFFFF) < 0x8001, (temp_s0 != (((((func_009B3480(arg0, M2C_FIELD(temp_v0, f32 *, 0x47C), M2C_FIELD(temp_v0, f32 *, 0xB7C)) & 0xFFFF) - temp_s2) + 0x10000) & 0xFFFF) < 0x8001))) && ((func_009B30B0((s32) temp_s2, (s32) temp_s1) & 0xFFFF) < 0x61)) {
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x61) {
                    goto block_17;
                }
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) M2C_FIELD(arg0, u16 *, 0x26)) & 0xFFFF) < 0x18) {

                } else {
block_17:
                    temp_s0_2 = Pes6Ball_Current;
                    if ((temp_s3 >= (s32) M2C_FIELD(temp_s0_2, u16 *, 0x6E)) && ((func_009B30B0(func_0099DFF0(arg0), (s32) M2C_FIELD(temp_s0_2, u16 *, 0x58)) & 0xFFFF) < 0x19)) {
                        M2C_FIELD(arg0, s16 *, 0x18) = 0x80;
                    }
                }
            }
        }
    }
}
