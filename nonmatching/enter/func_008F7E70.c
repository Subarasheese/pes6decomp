/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6BitSet_Write(void *, int, int);
M2C_UNK func_00312150(s32 *, s32);                  /* extern */
M2C_UNK func_00312230(s32 *, s32);                  /* extern */

s32 func_008F7E70(void *arg0, void *arg1) {
    s32 sp40;
    u8 sp44;
    s32 sp4C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    u8 temp_a2;
    u8 temp_a4;
    u8 temp_a6;
    u8 temp_v0;

    temp_s2 = M2C_FIELD(arg1, s32 *, 8);
    func_00312150(&sp4C, temp_s2);
    func_00312230(&sp40, temp_s2);
    sp44 = (sp44 & ~1) | (sp4C == 2);
    sp44 = (sp44 & ~2) | ((sp4C == 3) * 2);
    temp_a6 = (sp44 & ~4) | ((sp4C == 7) * 4);
    sp44 = temp_a6;
    temp_a4 = (temp_a6 & ~8) | ((sp4C == 4) * 8);
    sp44 = temp_a4;
    temp_a2 = (temp_a4 & ~0x10) | ((sp4C == 6) * 0x10);
    sp44 = temp_a2;
    temp_v0 = (temp_a2 & ~0x20) | ((sp4C == 5) << 5);
    sp44 = temp_v0;
    Pes6BitSet_Write(arg0, 0x52, M2C_FIELD(arg1, s32 *, 0xC) != 4);
    Pes6BitSet_Write(arg0, 0x53, sp40 == 2);
    Pes6BitSet_Write(arg0, 0x54, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x55, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x56, (s32) ((u64) ((s64) temp_v0 << 0x3D) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x57, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x58, sp40 == 3);
    Pes6BitSet_Write(arg0, 0x59, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x5A, (s32) ((u64) ((s64) temp_v0 << 0x3E) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x5B, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x5C, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x5D, sp40 == 4);
    Pes6BitSet_Write(arg0, 0x5E, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x5F, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x60, (s32) ((u64) ((s64) temp_v0 << 0x3D) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x61, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x62, sp40 == 5);
    Pes6BitSet_Write(arg0, 0x63, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x64, (s32) ((u64) ((s64) temp_v0 << 0x3E) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x65, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x66, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x67, sp40 == 6);
    Pes6BitSet_Write(arg0, 0x68, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x69, (s32) ((u64) ((s64) temp_v0 << 0x3E) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x6A, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x6B, (s32) ((u64) ((s64) temp_v0 << 0x3A) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x6C, sp40 == 7);
    Pes6BitSet_Write(arg0, 0x6D, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x6E, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x6F, (s32) ((u64) ((s64) temp_v0 << 0x3D) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x70, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x71, sp40 == 8);
    Pes6BitSet_Write(arg0, 0x72, temp_v0 & 1);
    Pes6BitSet_Write(arg0, 0x73, (s32) ((u64) ((s64) temp_v0 << 0x3E) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x74, (s32) ((u64) ((s64) temp_v0 << 0x3C) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x75, (s32) ((u64) ((s64) temp_v0 << 0x3A) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x76, (s32) ((u64) ((s64) temp_v0 << 0x3B) >> 0x3F));
    Pes6BitSet_Write(arg0, 0x77, sp40 == 9);
    Pes6BitSet_Write(arg0, 0x78, sp40 == 0xA);
    Pes6BitSet_Write(arg0, 0x79, sp40 == 0xB);
    Pes6BitSet_Write(arg0, 0x7A, sp40 == 0xC);
    Pes6BitSet_Write(arg0, 0x7B, sp40 == 0xD);
    Pes6BitSet_Write(arg0, 0x7C, sp40 == 0xE);
    Pes6BitSet_Write(arg0, 0x7D, sp40 == 0xF);
    Pes6BitSet_Write(arg0, 0x7E, sp40 == 0x10);
    Pes6BitSet_Write(arg0, 0x7F, sp40 == 0x11);
    Pes6BitSet_Write(arg0, 0x80, sp40 == 0x12);
    Pes6BitSet_Write(arg0, 0x81, sp40 == 0x13);
    if (!(temp_v0 & 1)) {
        if (((u64) ((s64) sp44 << 0x3E) >> 0x3F) == 0) {
            if (((u64) ((s64) sp44 << 0x3D) >> 0x3F) == 0) {
                if (((u64) ((s64) sp44 << 0x3C) >> 0x3F) == 0) {
                    if (((u64) ((s64) sp44 << 0x3B) >> 0x3F) == 0) {
                        if (((u64) ((s64) sp44 << 0x3A) >> 0x3F) == 0) {
                            if (((u64) ((s64) sp44 << 0x39) >> 0x3F) == 0) {
                                M2C_FIELD(arg1, s8 *, 3) = 0;
                            } else {
                                temp_v1 = M2C_FIELD(arg1, s32 *, 4);
                                switch (temp_v1) {  /* switch 7; irregular */
                                case 5:             /* switch 7 */
                                    M2C_FIELD(arg1, s8 *, 3) = 0x1E;
                                    break;
                                case 4:             /* switch 7 */
                                    M2C_FIELD(arg1, s8 *, 3) = 0x14;
                                    break;
                                case 3:             /* switch 7 */
                                    M2C_FIELD(arg1, s8 *, 3) = 0xA;
                                    break;
                                default:            /* switch 7 */
                                    M2C_FIELD(arg1, s8 *, 3) = 0;
                                    break;
                                }
                            }
                        } else {
                            temp_v1_2 = M2C_FIELD(arg1, s32 *, 4);
                            switch (temp_v1_2) {    /* switch 6; irregular */
                            case 5:                 /* switch 6 */
                                M2C_FIELD(arg1, s8 *, 3) = 0x1E;
                                break;
                            case 4:                 /* switch 6 */
                                M2C_FIELD(arg1, s8 *, 3) = 0x14;
                                break;
                            case 3:                 /* switch 6 */
                                M2C_FIELD(arg1, s8 *, 3) = 7;
                                break;
                            default:                /* switch 6 */
                                M2C_FIELD(arg1, s8 *, 3) = 0;
                                break;
                            }
                        }
                    } else {
                        temp_v1_3 = M2C_FIELD(arg1, s32 *, 4);
                        switch (temp_v1_3) {        /* switch 5; irregular */
                        case 5:                     /* switch 5 */
                            M2C_FIELD(arg1, s8 *, 3) = 0x32;
                            break;
                        case 4:                     /* switch 5 */
                            M2C_FIELD(arg1, s8 *, 3) = 0x28;
                            break;
                        case 3:                     /* switch 5 */
                            M2C_FIELD(arg1, s8 *, 3) = 0x1E;
                            break;
                        default:                    /* switch 5 */
                            M2C_FIELD(arg1, s8 *, 3) = 0;
                            break;
                        }
                    }
                } else {
                    temp_v1_4 = M2C_FIELD(arg1, s32 *, 4);
                    switch (temp_v1_4) {            /* switch 4; irregular */
                    case 5:                         /* switch 4 */
                        M2C_FIELD(arg1, s8 *, 3) = 0x1E;
                        break;
                    case 4:                         /* switch 4 */
                        M2C_FIELD(arg1, s8 *, 3) = 0x14;
                        break;
                    case 3:                         /* switch 4 */
                        M2C_FIELD(arg1, s8 *, 3) = 7;
                        break;
                    default:                        /* switch 4 */
                        M2C_FIELD(arg1, s8 *, 3) = 0;
                        break;
                    }
                }
            } else {
                temp_v1_5 = M2C_FIELD(arg1, s32 *, 4);
                switch (temp_v1_5) {                /* switch 3; irregular */
                case 5:                             /* switch 3 */
                    M2C_FIELD(arg1, s8 *, 3) = 0x3C;
                    break;
                case 4:                             /* switch 3 */
                    M2C_FIELD(arg1, s8 *, 3) = 0x1E;
                    break;
                case 3:                             /* switch 3 */
                    M2C_FIELD(arg1, s8 *, 3) = 0x14;
                    break;
                default:                            /* switch 3 */
                    M2C_FIELD(arg1, s8 *, 3) = 0;
                    break;
                }
            }
        } else {
            temp_a0 = M2C_FIELD(arg1, s32 *, 4);
            switch (temp_a0) {                      /* switch 2; irregular */
            case 5:                                 /* switch 2 */
                M2C_FIELD(arg1, s8 *, 3) = 0xA;
                break;
            case 4:                                 /* switch 2 */
                M2C_FIELD(arg1, s8 *, 3) = 5;
                break;
            case 3:                                 /* switch 2 */
                M2C_FIELD(arg1, s8 *, 3) = 2;
                break;
            default:                                /* switch 2 */
                M2C_FIELD(arg1, s8 *, 3) = 0;
                break;
            }
        }
    } else {
        temp_a0_2 = M2C_FIELD(arg1, s32 *, 4);
        switch (temp_a0_2) {                        /* switch 1; irregular */
        case 5:                                     /* switch 1 */
            M2C_FIELD(arg1, s8 *, 3) = 0xA;
            break;
        case 4:                                     /* switch 1 */
            M2C_FIELD(arg1, s8 *, 3) = 5;
            break;
        case 3:                                     /* switch 1 */
            M2C_FIELD(arg1, s8 *, 3) = 2;
            break;
        default:                                    /* switch 1 */
            M2C_FIELD(arg1, s8 *, 3) = 0;
            break;
        }
    }
    return 1;
}
