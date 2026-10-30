/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00221280(s32);
extern u8 func_00850A70(void);
M2C_UNK func_001C47E0(void *, s8 *, M2C_UNK);       /* extern */
M2C_UNK func_008580E0(u8, M2C_UNK);                 /* extern */
extern char D_00591970[];
extern char D_008A31B0[];

s32 func_0080B190(void *arg0, void *arg1) {
    s32 var_v1;
    s8 *temp_v0;
    s8 *var_a0_2;
    s8 *var_a1;
    u8 temp_s0;
    u8 temp_v1;
    u8 var_a0;
    void *temp_a0;

    var_a0 = M2C_FIELD(arg1, u8 *, 0x17);
    if (M2C_FIELD(arg1, u8 *, 0x13) == 1) {
        if (func_00850A70() & 0xFF & 2) {
            var_a0 = 1;
        } else {
            var_a0 = 0;
        }
    }
    temp_v0 = func_00221280((s32) var_a0);
    if (temp_v0 != NULL) {
        func_001C47E0(arg0, temp_v0, 0x36);
        temp_s0 = M2C_FIELD(arg1, u8 *, 0x18);
        if (temp_s0 != 0xFF) {
            temp_a0 = ((void *)D_008A31B0) + (temp_s0 * 0x36);
            M2C_FIELD(arg1, void **, 0x24) = temp_a0;
            func_001C47E0(temp_a0, temp_v0, 0x36);
            var_v1 = 0xF;
            var_a0_2 = temp_v0;
            var_a1 = ((void *)D_00591970) + (temp_s0 * 0x24);
            do {
                var_v1 -= 1;
                *var_a1 = *var_a0_2;
                var_a0_2 += 1;
                var_a1 += 1;
            } while (var_v1 > 0);
            func_008580E0(M2C_FIELD(arg1, u8 *, 0x12), 1);
        }
        temp_v1 = M2C_FIELD(arg1, u8 *, 0x18);
        if (temp_v1 != 0xFF) {
            func_001C47E0(((void *)D_00591970) + (temp_v1 * 0x24) + 0xF, temp_v0 + 0xF, 0x15);
        }
        return 0;
    }
    return -1;
}
