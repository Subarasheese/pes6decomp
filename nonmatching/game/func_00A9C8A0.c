/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_009B3070(s32, s32);
s32 func_00BC03A0(u16);                             /* extern */
extern char D_00591F24[];

s32 func_00A9C8A0(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_v0;
    u16 temp_a0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_v0, u16 *, 0x30);
    switch (temp_a0) {                              /* switch 1; irregular */
    case 0x30A:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0xC00);
block_170:
        return var_v0 & 0xFFFF;
    case 0xF4:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x2000);
        goto block_170;
    case 0xCC:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x1C00);
        goto block_170;
    case 0xE2:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xD)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xE8:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x6000)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x1C1:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, 0x1000);
        goto block_170;
    case 0x2AF:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xD)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x2AC:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xC)) & 0xFFFF, 0x2800);
        goto block_170;
    case 0x105:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x6800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xDD:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1C00)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x104:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x4800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x103:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x2B2:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xEC:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, 0x1400);
        goto block_170;
    case 0xFF:                                      /* switch 1 */
        temp_s0 = (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1;
        var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + (temp_s0 * (func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x4C00) & 0xFFFF) & 0xFFFF));
        goto block_170;
    case 0x18B:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x28), 0x1000);
        goto block_170;
    case 0x346:                                     /* switch 1 */
    case 0x34C:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2C00)) & 0xFFFF, 0xC00);
        goto block_170;
    case 0xF7:                                      /* switch 1 */
    case 0xD:                                       /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xC)) & 0xFFFF, 0x1C00);
        goto block_170;
    case 0xC:                                       /* switch 1 */
    case 0x227:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x225:                                     /* switch 1 */
    case 0x107:                                     /* switch 1 */
    case 0x29C:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x6000)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x2D2:                                     /* switch 1 */
    case 0xCB:                                      /* switch 1 */
    case 0x248:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xA:                                       /* switch 1 */
    case 0xDF:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2A00)) & 0xFFFF, 0x1A00);
        goto block_170;
    case 0x30B:                                     /* switch 1 */
    case 0x307:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xD)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x116:                                     /* switch 1 */
    case 0x199:                                     /* switch 1 */
    case 0xD4:                                      /* switch 1 */
    case 0xFC:                                      /* switch 1 */
    case 0xD0:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x2800)) & 0xFFFF, 0x2000);
        goto block_170;
    case 0x25:                                      /* switch 1 */
    case 0xE9:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x3800)) & 0xFFFF, 0x2000);
        goto block_170;
    case 0xF8:                                      /* switch 1 */
    case 0x106:                                     /* switch 1 */
    case 0xE6:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, 0x2000);
        goto block_170;
    case 0xF:                                       /* switch 1 */
    case 0xC9:                                      /* switch 1 */
    case 0xD2:                                      /* switch 1 */
    case 0xCE:                                      /* switch 1 */
    case 0xDA:                                      /* switch 1 */
    case 0xDC:                                      /* switch 1 */
    case 0xE7:                                      /* switch 1 */
    case 0x24A:                                     /* switch 1 */
    case 0xE0:                                      /* switch 1 */
    case 0xE4:                                      /* switch 1 */
    case 0xD8:                                      /* switch 1 */
    case 0xEE:                                      /* switch 1 */
    case 0xF9:                                      /* switch 1 */
    case 0xFA:                                      /* switch 1 */
    case 0xF0:                                      /* switch 1 */
    case 0x102:                                     /* switch 1 */
    case 0xEB:                                      /* switch 1 */
    case 0x343:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xD1:                                      /* switch 1 */
    case 0x1CA:                                     /* switch 1 */
    case 0x389:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x2800);
        goto block_170;
    case 0xD7:                                      /* switch 1 */
    case 0xE3:                                      /* switch 1 */
    case 0xF6:                                      /* switch 1 */
    case 0xD5:                                      /* switch 1 */
    case 0xF5:                                      /* switch 1 */
    case 0xD6:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) - (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x366:                                     /* switch 1 */
    case 0x306:                                     /* switch 1 */
    case 0x233:                                     /* switch 1 */
    case 0x305:                                     /* switch 1 */
    case 0x308:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x1400);
        goto block_170;
    case 0x18F:                                     /* switch 1 */
    case 0x203:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (s32) M2C_FIELD(arg0, u16 *, 0x26), 0x2800);
        goto block_170;
    case 0xD3:                                      /* switch 1 */
    case 0xCF:                                      /* switch 1 */
    case 0xF3:                                      /* switch 1 */
    case 0xD9:                                      /* switch 1 */
    case 0xE1:                                      /* switch 1 */
    case 0xFB:                                      /* switch 1 */
    case 0xDE:                                      /* switch 1 */
    case 0xF1:                                      /* switch 1 */
    case 0xCA:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x1800)) & 0xFFFF, 0x1800);
        goto block_170;
    case 0xB4:                                      /* switch 1 */
    case 0xB3:                                      /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + 0x7FFF + 1) & 0xFFFF, 0x1800);
        goto block_170;
    case 0x18D:                                     /* switch 1 */
        var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(temp_v0, u8 *, 0x2D) != 0) ? -1 : 1) * 0x7000)) & 0xFFFF, 0x1800);
        goto block_170;
    default:                                        /* switch 1 */
        temp_v0_2 = func_00BC03A0(temp_a0);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 25:                                    /* switch 2 */
            return arg1;
        case 28:                                    /* switch 2 */
            var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x1800);
            goto block_170;
        case 6:                                     /* switch 2 */
        case 0:                                     /* switch 2 */
            if ((*(u8 *)D_00591F24) == 1) {
                return arg1;
            }
            var_v0 = func_009B32D0(arg1, (M2C_FIELD(arg0, u16 *, 0x26) + (((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1) << 0xB)) & 0xFFFF, 0x1800);
            goto block_170;
        default:                                    /* switch 2 */
            return arg1;
        }
        break;
    }
}
