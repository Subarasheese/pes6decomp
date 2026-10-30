/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0094C7B0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_009A5FE0();                                /* extern */
M2C_UNK func_009A8530();                            /* extern */
s32 func_009A8570();                                /* extern */
M2C_UNK func_00AE8190(s32);                         /* extern */
M2C_UNK func_00AE87A0(M2C_UNK);                     /* extern */
M2C_UNK func_00AE8B70();                            /* extern */
s32 func_00AEC4E0();                                /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;
extern void *D_003EAD6C;

s32 func_00B10DF0(void) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = D_003EAD6C;
    if (temp_s0 == NULL) {
        return 0;
    }
    func_00AE8B70();
    M2C_FIELD(D_003E7B0C, s8 *, 0x25) = (s8) M2C_FIELD(temp_s0, s32 *, 0x58);
    if (M2C_FIELD(temp_s0, s32 *, 0x78) == 1) {
        func_00AE87A0(0);
    } else {
        func_00AE87A0(1);
        func_00AE8190(M2C_FIELD(temp_s0, s32 *, 0x58));
        if (func_0094C7B0() == 0x36) {
            if (func_009A5FE0() == 0) {
                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                    func_00958000(0x66);
                } else {
                    func_00958000(0x68);
                }
            } else {
                func_00958000(0x67);
            }
        } else if (func_0094C7B0() == 0x37) {
            if (func_009A5FE0() == 0) {
                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                    func_00958000(0x6E);
                } else {
                    func_00958000(0x70);
                }
            } else {
                func_00958000(0x6F);
            }
        } else if (func_0094C7B0() == 0x39) {
            if (func_009A5FE0() == 0) {
                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                    func_00958000(0x77);
                } else {
                    func_00958000(0x79);
                }
            } else {
                func_00958000(0x78);
            }
        } else if (func_0094C7B0() == 0x3A) {
            if (func_009A5FE0() == 0) {
                if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                    func_00958000(0x8F);
                } else {
                    func_00958000(0x90);
                }
            } else {
                func_00958000(0x91);
            }
        }
    }
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x78);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        temp_v0 = func_009A8570();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0x16:                                  /* switch 2 */
            func_009A8530();
            return 3;
        case 0x1C:                                  /* switch 2 */
            func_009A8530();
            return 0xA;
        case 0x1D:                                  /* switch 2 */
            func_009A8530();
            return 0xB;
        case 0x19:                                  /* switch 2 */
            func_009A8530();
            return 4;
        case 0x17:                                  /* switch 2 */
            func_009A8530();
            return 5;
        case 0x18:                                  /* switch 2 */
            func_009A8530();
            return 6;
        case 0x1A:                                  /* switch 2 */
            func_009A8530();
            return 7;
        case 0x1B:                                  /* switch 2 */
            func_009A8530();
            return 8;
        case 0x1E:                                  /* switch 2 */
            func_009A8530();
            return 0xC;
        case 0x1F:                                  /* switch 2 */
            func_009A8530();
            return 0xD;
        case 0x20:                                  /* switch 2 */
            func_009A8530();
            return 0xE;
        case 0x21:                                  /* switch 2 */
            func_009A8530();
            return 0xF;
        case 0x15:                                  /* switch 2 */
            func_009A8530();
            return 0x11;
        case 0x23:                                  /* switch 2 */
            func_009A8530();
            return 0x11;
        case 0x6B:                                  /* switch 2 */
        case 0x22:                                  /* switch 2 */
            func_009A8530();
            M2C_FIELD(temp_s0, s32 *, 0x78) = 0;
            return 0;
        case 0x29:                                  /* switch 2 */
            func_009A8530();
            return 0x12;
        case 0x24:                                  /* switch 2 */
            func_009A8530();
            return 0x13;
        case 0x25:                                  /* switch 2 */
            func_009A8530();
            return 0x14;
        case 0x26:                                  /* switch 2 */
            func_009A8530();
            return 0x15;
        case 0x27:                                  /* switch 2 */
            func_009A8530();
            return 0x16;
        case 0x28:                                  /* switch 2 */
            func_009A8530();
            return 0x17;
        case 0x2A:                                  /* switch 2 */
            func_009A8530();
            return 0x18;
        case 0x2B:                                  /* switch 2 */
            func_009A8530();
            return 0x19;
        case 0x2C:                                  /* switch 2 */
            func_009A8530();
            return 0x1A;
        case 0x2D:                                  /* switch 2 */
            func_009A8530();
            return 0x1B;
        case 0x2E:                                  /* switch 2 */
            func_009A8530();
            return 0x1C;
        case 0x2F:                                  /* switch 2 */
            func_009A8530();
            return 0x1D;
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    case 0:                                         /* switch 1 */
        /* fallthrough */
    default:                                        /* switch 1 */
        return func_00AEC4E0();
    }
}
