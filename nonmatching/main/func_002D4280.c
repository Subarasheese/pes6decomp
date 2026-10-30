/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, s32);                    /* extern */
extern void *D_003E9D8C;
extern char D_00592742[];
extern char D_005E5D60[];
extern char D_005E5D62[];
extern char D_005E5D64[];
extern char D_005E5D68[];
extern char D_005E5D6C[];

void func_002D4280(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a0_5;
    s32 var_a0_6;
    s32 var_a0_7;
    s32 var_a0_8;
    s32 var_a0_9;
    s32 var_s0;
    u8 var_a0_10;

    if ((*(s32 *)D_005E5D68) & 0x4000) {
        if (((*(u8 *)D_00592742) != 4) && (var_s0 = 1, (((*(u8 *)D_005E5D60) & 1) == 1))) {

        } else {
            var_s0 = 0;
        }
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x10), var_s0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x14), var_s0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x30), var_s0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x34), var_s0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x24), var_s0 & 0xFF);
        func_001D7D60(M2C_FIELD(D_003E9D8C, s32 *, 0x2C), var_s0 & 0xFF);
    }
    if ((*(s32 *)D_005E5D68) & 0x2000) {
        if ((*(s32 *)D_005E5D64) & 0x2000) {
            (*(s16 *)D_005E5D62) = 0;
            (*(u8 *)D_005E5D60) |= 4;
            var_a0 = (*(s32 *)D_005E5D6C) | 1;
        } else {
            var_a0 = (*(s32 *)D_005E5D6C) & ~1;
        }
        (*(s32 *)D_005E5D6C) = var_a0;
    }
    if ((*(s32 *)D_005E5D68) & 0x1000) {
        if ((*(s32 *)D_005E5D64) & 0x1000) {
            (*(s16 *)D_005E5D62) = 0;
            (*(u8 *)D_005E5D60) &= 0xFB;
            var_a0_2 = (*(s32 *)D_005E5D6C) | 2;
        } else {
            var_a0_2 = (*(s32 *)D_005E5D6C) & ~2;
        }
        (*(s32 *)D_005E5D6C) = var_a0_2;
    }
    if ((*(s32 *)D_005E5D68) & 0x800) {
        if ((*(s32 *)D_005E5D64) & 0x800) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_3 = (*(s32 *)D_005E5D6C) | 0x2000 | 0x20;
        } else {
            var_a0_3 = (*(s32 *)D_005E5D6C) & ~0x2000 & ~0x20;
        }
        (*(s32 *)D_005E5D6C) = var_a0_3;
    }
    if ((*(s32 *)D_005E5D68) & 0x400) {
        if ((*(s32 *)D_005E5D64) & 0x400) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_4 = (*(s32 *)D_005E5D6C) | 0x1000 | 0x10;
        } else {
            var_a0_4 = (*(s32 *)D_005E5D6C) & ~0x1000 & ~0x10;
        }
        (*(s32 *)D_005E5D6C) = var_a0_4;
    }
    if ((*(s32 *)D_005E5D68) & 0x200) {
        if ((*(s32 *)D_005E5D64) & 0x200) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_5 = (*(s32 *)D_005E5D6C) | 0x80;
        } else {
            var_a0_5 = (*(s32 *)D_005E5D6C) & ~0x80;
        }
        (*(s32 *)D_005E5D6C) = var_a0_5;
    }
    if ((*(s32 *)D_005E5D68) & 0x100) {
        if ((*(s32 *)D_005E5D64) & 0x100) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_6 = (*(s32 *)D_005E5D6C) | 0x40;
        } else {
            var_a0_6 = (*(s32 *)D_005E5D6C) & ~0x40;
        }
        (*(s32 *)D_005E5D6C) = var_a0_6;
    }
    if ((*(s32 *)D_005E5D68) & 0x80) {
        if ((*(s32 *)D_005E5D64) & 0x80) {
            (*(s16 *)D_005E5D62) = 0;
            (*(s32 *)D_005E5D6C) |= 0x100;
            (*(u8 *)D_005E5D60) &= 0xFB;
        } else {
            (*(s32 *)D_005E5D6C) &= ~0x100;
        }
    }
    if ((*(s32 *)D_005E5D68) & 0x20) {
        if ((*(s32 *)D_005E5D64) & 0x20) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_7 = (*(s32 *)D_005E5D6C) | 0x400;
        } else {
            var_a0_7 = (*(s32 *)D_005E5D6C) & ~0x400;
        }
        (*(s32 *)D_005E5D6C) = var_a0_7;
    }
    if ((*(s32 *)D_005E5D68) & 0x40) {
        if ((*(s32 *)D_005E5D64) & 0x40) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_8 = (*(s32 *)D_005E5D6C) | 0x800;
        } else {
            var_a0_8 = (*(s32 *)D_005E5D6C) & ~0x800;
        }
        (*(s32 *)D_005E5D6C) = var_a0_8;
    }
    if ((*(s32 *)D_005E5D68) & 0x10) {
        if ((*(s32 *)D_005E5D64) & 0x10) {
            (*(s16 *)D_005E5D62) = 0;
            var_a0_9 = (*(s32 *)D_005E5D6C) | 0x200;
        } else {
            var_a0_9 = (*(s32 *)D_005E5D6C) & ~0x200;
        }
        (*(s32 *)D_005E5D6C) = var_a0_9;
    }
    temp_a2 = (*(s32 *)D_005E5D64) & 0x1000;
    if (temp_a2 != 0) {
        var_a0_10 = (*(u8 *)D_005E5D60) & 0xFB;
        goto block_72;
    }
    temp_a1 = (*(s32 *)D_005E5D64) & 0x2000;
    if (temp_a1 == 0) {
        temp_a0 = (*(s32 *)D_005E5D64) & 0x80;
        if ((temp_a0 != 0) || (((*(s32 *)D_005E5D68) & 0x80) && (temp_a0 == 0))) {
            var_a0_10 = (*(u8 *)D_005E5D60) & 0xFB;
            goto block_72;
        }
        temp_a0_2 = (*(s32 *)D_005E5D64) & 0x20;
        if (((temp_a0_2 != 0) || (((*(s32 *)D_005E5D68) & 0x20) && (temp_a0_2 == 0))) && ((((*(s32 *)D_005E5D68) & 0x2000) && (temp_a1 == 0)) || (temp_a2 != 0))) {
            var_a0_10 = (*(u8 *)D_005E5D60) & 0xFB;
            goto block_72;
        }
    } else {
        var_a0_10 = (*(u8 *)D_005E5D60) | 4;
block_72:
        (*(u8 *)D_005E5D60) = var_a0_10;
    }
}
