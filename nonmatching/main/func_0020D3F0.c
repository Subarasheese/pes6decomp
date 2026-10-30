/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
extern int func_0020D3E0(void);
extern void * func_001F01D0(s32);
extern s32 func_001DD3C0(s32);
M2C_UNK func_001DD560(s32);                         /* extern */
M2C_UNK func_001DD910(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_001F0590(s32);                         /* extern */
M2C_UNK func_0020CDC0();                            /* extern */

s32 func_0020D3F0(void *arg0) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a0;
    u8 temp_a0_2;

    var_s0 = M2C_FIELD(arg0, s32 *, 0);
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0x0:
        if (func_0020D3E0() == 0) {
            var_s0 += 1;
        case 0x1:
            temp_v0 = 0 & 1;
            M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~2) | (temp_v0 * 2));
            var_s0 = (var_s0 + 0x10) & ~0xF;
            M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~4) | (temp_v0 * 4));
        case 0x10:
            if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x10) << 0x3B) >> 0x3F) == 0) {
                if (func_001DD3C0(M2C_FIELD(arg0, s32 *, 4)) != 1) {
                    func_001DD910(M2C_FIELD(arg0, s32 *, 4));
                } else {
                    temp_a0 = M2C_FIELD(arg0, u8 *, 0x10);
                    if (((u64) ((s64) temp_a0 << 0x3C) >> 0x3F) == 0) {
                        M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((temp_a0 & ~2) | ((1 & 1) * 2));
                    }
                }
                if (func_001F01D0(M2C_FIELD(arg0, s32 *, 8)) == NULL) {
                    func_001F0590(M2C_FIELD(arg0, s32 *, 8));
                    goto block_34;
                }
                temp_a0_2 = M2C_FIELD(arg0, u8 *, 0x10);
                if (((u64) ((s64) temp_a0_2 << 0x3C) >> 0x3F) != 0) {
                    var_s0 += 1;
                } else {
                    M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((temp_a0_2 & ~4) | 4);
block_34:
                    var_s0 += 1;
                }
            } else {
                var_s0 = 0x30;
            }
        } else {
        case 0x50:
block_51:
            var_s1 = 1;
        }
        break;
    case 0x11:
        if (func_0017F900() != 0) {
            if (func_001DD3C0(M2C_FIELD(arg0, s32 *, 4)) == 1) {
                if (func_001F01D0(M2C_FIELD(arg0, s32 *, 8)) != NULL) {
                    var_s0 = (var_s0 + 0x10) & ~0xF;
                case 0x20:
                    func_0020CDC0();
                    var_s0 += 1;
                case 0x21:
                    var_s0 = (var_s0 + 0x10) & ~0xF;
                case 0x30:
                    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x10) << 0x3E) >> 0x3F) == 0) {
                        func_001DD560(M2C_FIELD(arg0, s32 *, 4));
                        M2C_FIELD(arg0, s32 *, 4) = 0;
                    }
                    if (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x10) << 0x3D) >> 0x3F) == 0) {
                        func_001F0210(M2C_FIELD(arg0, s32 *, 8));
                        M2C_FIELD(arg0, s32 *, 8) = 0;
                    }
                    var_s0 += 1;
                case 0x31:
                    var_s0 = (var_s0 + 0x10) & ~0xF;
                case 0x40:
                    var_s0 = (var_s0 + 0x10) & ~0xF;
                    goto block_51;
                }
                goto block_40;
            }
block_40:
            var_s0 = 0;
            M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~8) | 8);
        }
        break;
    }
    if (var_s1 == 1) {
        M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg0, u8 *, 0x10) & ~1) | (0 & 1));
    }
    M2C_FIELD(arg0, s32 *, 0) = var_s0;
    return var_s1;
}
