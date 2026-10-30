/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022C1E0(void);
extern s32 func_00226710(void);
void *func_0022C140(s32);                           /* extern */
extern void *D_003E77B0;

void func_00239480(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s1;
    u8 *temp_v0;
    u8 var_v1;
    u8 var_v1_2;
    void *temp_v0_2;

    if ((func_00231240() != 1) && !(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8) && (temp_v0 = func_0022C1E0(), (temp_v0 != NULL))) {
        temp_a0 = func_00226710() & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 0x37:
            var_a0 = 1;
            var_v1 = 2;
block_41:
            var_s1 = var_a0 & 0xFF;
            temp_s0 = var_v1 & 0xFF;
            if (var_s1 < temp_s0) {
loop_42:
                if (func_00231240() != 1) {
                    func_0022C140(var_s1 & 0xFF);
                }
                if (func_00231240() == 1) {
                    var_v1_2 = 0;
                } else {
                    temp_v0_2 = func_0022C140(var_s1 & 0xFF);
                    if (temp_v0_2 == NULL) {
                        var_v1_2 = 0;
                    } else {
                        var_v1_2 = M2C_FIELD(temp_v0_2, u8 *, 0xA);
                    }
                }
                if ((var_v1_2 & 0xFF) <= 0) {
                    var_s1 += 1;
                    if (var_s1 >= temp_s0) {
                        goto block_53;
                    }
                    goto loop_42;
                }
            } else {
block_53:
                M2C_FIELD(D_003E77B0, u32 *, 0x20) = (u32) (M2C_FIELD(D_003E77B0, u32 *, 0x20) | 8);
            }
            break;
        case 0x35:
            var_a0 = 1;
            var_v1 = 2;
            goto block_41;
        case 0x31:
            var_a0 = 2;
            var_v1 = 3;
            goto block_41;
        case 0x30:
            var_a0 = 1;
            var_v1 = 2;
            goto block_41;
        case 0x2B:
            var_a0 = 2;
            var_v1 = 3;
            goto block_41;
        case 0x2A:
            var_a0 = 1;
            var_v1 = 2;
            goto block_41;
        case 0x3A:
        case 0xA:
        case 0x9:
        case 0x8:
        case 0x5:
        case 0x4:
        case 0x3:
        case 0x2:
            var_v1 = *temp_v0;
            var_a0 = 0;
            goto block_41;
        case 0x39:
        case 0x2D:
            var_a0 = 0;
            var_v1 = 1;
            goto block_41;
        }
    }
}
