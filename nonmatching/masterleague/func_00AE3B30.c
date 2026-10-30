/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void func_001EEE60(void *, void *);
extern u32 func_00AE3240(void);
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
s32 func_0095C4A0(u16);                             /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00AE1B90(s32, s32, f32 *);             /* extern */
M2C_UNK func_00AE21F0(s32, u8, void *);             /* extern */
M2C_UNK func_00AE5410(M2C_UNK);                     /* extern */
M2C_UNK func_00AE6710(s32, M2C_UNK);                /* extern */
extern f32 D_003E7CDC;

void func_00AE3B30(void) {
    f32 sp8C;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    s32 var_s5;
    u32 temp_v0;
    u8 temp_a1;
    u8 temp_s6;
    void *temp_a2;
    void *temp_s1;

    sp8C = D_003E7CDC;
    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x3DBC);
        temp_a2 = (temp_a0 * 0x314) + temp_v0;
        temp_a1 = M2C_FIELD(temp_a2, u8 *, 0x1290);
        if (temp_a1 != 1) {
            temp_s6 = M2C_FIELD(temp_a2, u8 *, 0xF9F);
            func_00AE21F0(temp_a0, temp_a1, temp_a2);
            var_s0 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3DCA) > 0) {
                do {
                    func_00AE6710(var_s0 & 0xFF, 0);
                    var_s0 = (var_s0 + 1) & 0xFF;
                } while (var_s0 < (s32) M2C_FIELD(temp_v0, u8 *, 0x3DCA));
            }
            var_s0_2 = 0;
            if ((s32) M2C_FIELD(temp_v0, u8 *, 0x3DCB) > 0) {
                do {
                    func_00AE6710(var_s0_2 & 0xFF, 1);
                    var_s0_2 = (var_s0_2 + 1) & 0xFF;
                } while (var_s0_2 < (s32) M2C_FIELD(temp_v0, u8 *, 0x3DCB));
            }
            var_s4 = 0;
            do {
                var_s5 = 0;
loop_9:
                func_00AE1B90(var_s4, var_s5, &sp8C);
                temp_s1 = temp_v0 + ((var_s4 & 0xFF) << 5) + ((var_s5 & 0xFF) * 4);
                func_001EEE60(M2C_FIELD(temp_s1, void **, 0x62C), &sp8C);
                func_001EEE60(M2C_FIELD(temp_s1, void **, 0x6EC), &sp8C);
                func_001EF900(M2C_FIELD(temp_s1, void **, 0x62C), 1);
                var_s5 = (var_s5 + 1) & 0xFF;
                if (var_s5 < 8) {
                    goto loop_9;
                }
                var_s4 = (var_s4 + 1) & 0xFF;
            } while (var_s4 < 6);
            func_00AE5410(0);
            func_00AE5410(1);
            temp_s1_2 = (temp_s6 & 0xFF) * 2;
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x608), 3, func_0095C4A0(M2C_FIELD((temp_s1_2 + ((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0)), u16 *, 0xF9A)));
            temp_s0 = (1 - (temp_s6 & 0xFF)) * 2;
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x60C), 2, func_0095C4A0(M2C_FIELD((temp_s0 + ((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0)), u16 *, 0xF9A)));
            func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x610), 4, M2C_FIELD((temp_s1_2 + ((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0)), u16 *, 0xF9A), 0);
            func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x614), 4, M2C_FIELD((temp_s0 + ((M2C_FIELD(temp_v0, s32 *, 0x3DBC) * 0x314) + temp_v0)), u16 *, 0xF9A), 0);
        }
    }
}
