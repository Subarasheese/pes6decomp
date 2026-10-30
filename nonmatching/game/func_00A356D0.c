/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;

s32 func_00A356D0(void *arg0, void *arg1, s32 arg2) {
    u16 temp_v0;

    temp_v0 = M2C_FIELD(M2C_FIELD(arg1, void **, 4), u16 *, 0x30);
    switch (temp_v0) {                              /* irregular */
    case 0x3A:
    case 0x2EA:
    case 0x10B:
    case 0x89:
    case 0x37:
    case 0x36:
    case 0x58:
    case 0x2E2:
    case 0x2E1:
    case 0x2E5:
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x118)) & 0xFFFF) >= 0x50) && (arg2 < 0x180)) {
            return 1;
        }
    case 0x59:
    case 0x237:
    case 0x66:
    case 0x65:
    case 0x64:
    case 0x2D4:
    case 0x3AA:
    case 0x238:
    case 0x291:
    case 0x5D:
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x70) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg1, u16 *, 0x26)) & 0xFFFF) >= 0x70) {
                goto block_27;
            }
            goto block_29;
        }
block_27:
        if (arg2 < 0x200) {
            return 1;
        }
    default:
block_29:
        if ((M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) < -256.0f) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x140U) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < 0x800) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < (u32) M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 4) + arg0), u32 *, 0x158))) {
            return 1;
        }
        return 0;
    }
}
