/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00143300(void *, void *, s32, u8);
extern void func_00266420(int);
M2C_UNK func_00BCA370(void *);                      /* extern */
M2C_UNK func_00BCC630(s32, s32);                    /* extern */
M2C_UNK func_00BCC660(u16, u8);                     /* extern */
extern u8 D_003E9E88;
extern char Pes6MatchPlayers[];
extern char D_00591BB0[];

void func_00BCA220(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_s2;
    u16 temp_s1;
    u8 temp_s0;
    void *temp_v0;

    var_a1 = 0;
    var_s2 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        var_a0 = M2C_FIELD(arg0, s32 *, 0x28);
        if ((var_a0 != 0xF) && (var_a0 != 1) && (var_a0 != 0)) {
            goto block_6;
        }
        var_a0 = 0x2B;
        if ((*(u16 *)D_00591BB0) != 0x2B) {
block_6:
            var_s2 = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0xBC) != var_s2) {
            var_a1 = 1;
        }
        if (var_a1 == 1) {
            temp_s1 = (*(u16 *)D_00591BB0);
            temp_s0 = D_003E9E88;
            func_00BCC630(var_a0, var_a1);
            temp_v1 = temp_s1 & 0xFFFF;
            if ((temp_v1 < 0xCC) || (temp_v1 == 0x126)) {
                func_00266420(var_s2);
                func_00BCC660(temp_s1, temp_s0);
            }
            func_00BCA370(arg0);
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_v1_2 == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = temp_v1_2 % 23;
            }
            temp_v0 = M2C_FIELD(M2C_FIELD(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), void ***, 4), void **, 0x10), void **, 0x14);
            func_00143300(M2C_FIELD(temp_v0, void **, 0), M2C_FIELD(temp_v0, void **, 4), 0x7C, (u8) var_s2);
        }
        M2C_FIELD(arg0, s32 *, 0xBC) = var_s2;
    }
}
