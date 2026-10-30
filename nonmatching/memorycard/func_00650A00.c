/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D9C38(s32);
void func_00650A00(void *arg0, void *arg1) {
    s8 sp28;
    u8 sp29;
    u8 sp2A;
    u8 sp2B;
    s8 sp2C;
    u8 sp2D;
    u8 sp2E;
    u8 sp2F;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_v0;
    s8 *var_v1;
    u16 temp_a1;
    u32 temp_a2;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a4_3;
    u8 temp_a4_4;
    u8 temp_a4_5;

    var_v0 = 8;
    var_v1 = &sp28;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp28 = 0;
    temp_a4 = M2C_FIELD(arg1, u8 *, 9);
    sp29 = (((s32) ((M2C_FIELD(arg1, u8 *, 9) / 10) + (temp_a4 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a4 % 10);
    temp_a4_2 = M2C_FIELD(arg1, u8 *, 0xA);
    sp2A = (((s32) ((M2C_FIELD(arg1, u8 *, 0xA) / 10) + (temp_a4_2 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a4_2 % 10);
    temp_a4_3 = M2C_FIELD(arg1, u8 *, 0xB);
    sp2C = 0;
    sp2B = (((s32) ((M2C_FIELD(arg1, u8 *, 0xB) / 10) + (temp_a4_3 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a4_3 % 10);
    temp_a4_4 = M2C_FIELD(arg1, u8 *, 0xC);
    sp2D = (((s32) ((M2C_FIELD(arg1, u8 *, 0xC) / 10) + (temp_a4_4 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a4_4 % 10);
    temp_a4_5 = M2C_FIELD(arg1, u8 *, 0xD);
    sp2E = (((s32) ((M2C_FIELD(arg1, u8 *, 0xD) / 10) + (temp_a4_5 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a4_5 % 10);
    temp_a1 = M2C_FIELD(arg1, u16 *, 0xE);
    temp_a2 = temp_a1 - 0x7D0;
    sp2F = (((s32) (((temp_a1 - 0x7D0) / 10) + (temp_a2 >> 0x1F)) % 10) * 0x10) + ((s32) temp_a2 % 10);
    func_002D9C38((s32) &sp28);
    var_a0 = (s32) sp29 >> 4;
    if ((s32) sp29 < 0) {
        var_a0 = (s32) (sp29 + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s8 *, 6) = (s8) (((var_a0 % 10) * 0xA) + ((s32) (sp29 & 0xF) % 10));
    var_a0_2 = (s32) sp2A >> 4;
    if ((s32) sp2A < 0) {
        var_a0_2 = (s32) (sp2A + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s8 *, 5) = (s8) (((var_a0_2 % 10) * 0xA) + ((s32) (sp2A & 0xF) % 10));
    var_a0_3 = (s32) sp2B >> 4;
    if ((s32) sp2B < 0) {
        var_a0_3 = (s32) (sp2B + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s8 *, 4) = (s8) (((var_a0_3 % 10) * 0xA) + ((s32) (sp2B & 0xF) % 10));
    var_a0_4 = (s32) sp2D >> 4;
    if ((s32) sp2D < 0) {
        var_a0_4 = (s32) (sp2D + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s8 *, 3) = (s8) (((var_a0_4 % 10) * 0xA) + ((s32) (sp2D & 0xF) % 10));
    var_a0_5 = (s32) sp2E >> 4;
    if ((s32) sp2E < 0) {
        var_a0_5 = (s32) (sp2E + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s8 *, 2) = (s8) (((var_a0_5 % 10) * 0xA) + ((s32) (sp2E & 0xF) % 10));
    var_a0_6 = (s32) sp2F >> 4;
    if ((s32) sp2F < 0) {
        var_a0_6 = (s32) (sp2F + 0xF) >> 4;
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) (((var_a0_6 % 10) * 0xA) + ((s32) (sp2F & 0xF) % 10) + 0x7D0);
}
