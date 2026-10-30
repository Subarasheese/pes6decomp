/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0098ED30(u8);                              /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];

s32 func_00A24F00(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    if (arg1 >= 0x140) {
        if ((*(u8 *)D_00591E4C) == 0) {
            if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x68) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x3001) && (func_009B33A0(arg0, (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C), (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C)) < 0x100000U)) {
                return 1;
            }
            goto block_4;
        }
block_4:
        temp_s0 = arg2 & 0xFFFF;
        if ((temp_s0 < 0x78) && ((arg1 >= 0x200) || (temp_s0 < 0x70))) {
            if ((M2C_FIELD(arg0, u16 *, 0x3A) == 4) && (temp_s0 >= 0x68) && (arg1 < 0x240)) {
                return 1;
            }
            if (((func_0098ED30(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 5) && (arg1 < 0x240) && (temp_s0 >= 0x50) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x40) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) >= 0x41)) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
    return 1;
}
