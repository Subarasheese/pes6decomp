/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_005926E4[];

s32 func_00A358F0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    u32 temp_v1;

    if ((arg3 < arg2) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x801) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x118)) & 0xFFFF) >= 0x50) && (M2C_FIELD(arg1, u8 *, 0x16) == 2)) {
        return 1;
    }
    if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg1, u16 *, 0x10C)) & 0xFFFF) < 0x21) && ((u32) (M2C_FIELD(arg1, u32 *, 0x114) + 0x20) < (u32) M2C_FIELD(arg0, u32 *, 0x114))) {
        return 1;
    }
    if ((((arg3 >= 8) && ((u32) M2C_FIELD(arg1, u32 *, 0x114) >= 0x181U)) || ((*(u8 *)D_00591E4C) != 0)) && (arg2 < 0x18)) {
        goto block_48;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x11C) < 0x01900001U) {
        goto block_14;
    }
    if ((arg3 + (*(u8 *)D_005926E4)) >= arg2) {
        goto block_48;
    }
block_14:
    if ((u32) M2C_FIELD(arg0, u32 *, 0x114) < (u32) (M2C_FIELD(arg1, u32 *, 0x114) + 0x180)) {
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31) && (arg2 < 0x29)) {
            goto block_48;
        }
        goto block_17;
    }
block_17:
    temp_v1 = M2C_FIELD(arg0, u32 *, 0x114);
    if ((temp_v1 < (u32) M2C_FIELD(arg1, u32 *, 0x114)) && (temp_v1 < 0x180U)) {
        goto block_48;
    }
    if ((*(u8 *)D_00591E4C) != 0) {
        if ((func_009B30B0(M2C_FIELD(arg1, u16 *, 0x26), M2C_FIELD(arg1, u16 *, 0x120)) & 0xFFFF) >= 0x40) {
            goto block_48;
        }
        goto block_29;
    }
block_29:
    if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) == 0) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x118)) & 0xFFFF) >= 0x60) {
            goto block_48;
        }
        goto block_32;
    }
block_32:
    if (arg2 < arg3) {
        if (((u32) M2C_FIELD(arg0, u32 *, 0x114) >= (u32) M2C_FIELD(arg1, u32 *, 0x114)) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) >= (u32) M2C_FIELD(((M2C_FIELD(arg1, u8 *, 0) * 4) + arg0), u32 *, 0x158))) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x61) {
                goto block_41;
            }
            goto block_42;
        }
block_41:
        return 0;
    }
block_42:
    if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(arg0, u16 *, 0x118)) & 0xFFFF) >= 0x40) {
        if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x40) && ((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x100U)) {
block_48:
            return 0;
        }
        goto block_45;
    }
block_45:
    return 1;
}
