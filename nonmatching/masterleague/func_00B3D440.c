/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001B9DF0();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00961060();                            /* extern */
M2C_UNK func_00961090();                            /* extern */
M2C_UNK func_009A8530();                            /* extern */
s32 func_009A8570();                                /* extern */
M2C_UNK func_00B37B90();                            /* extern */
M2C_UNK func_00B38AA0(s32);                         /* extern */
M2C_UNK func_00B38F70();                            /* extern */
M2C_UNK func_00B39030();                            /* extern */
M2C_UNK func_00B39160(M2C_UNK);                     /* extern */
M2C_UNK func_00B39320();                            /* extern */
s32 func_00B3CD30();                                /* extern */
extern void *D_003E77B0;
extern void *D_003E7B0C;
extern void *D_003EAE64;

s32 func_00B3D440(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s0;

    temp_s0 = D_003EAE64;
    if (temp_s0 == NULL) {
        return 0;
    }
    func_00B39320();
    func_00B39030();
    func_00B38F70();
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x114);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        func_00B39160(0);
        break;
    default:                                        /* switch 1 */
        func_00B39160(1);
        func_00B38AA0(M2C_FIELD(temp_s0, s32 *, 0x58));
        if (func_001B9DF0() == 0) {
            if (!(M2C_FIELD(D_003E77B0, u32 *, 0x20) & 8)) {
                func_00958000(0);
            } else {
                func_00958000(2);
            }
        }
        break;
    }
    M2C_FIELD(D_003E7B0C, s8 *, 0x25) = (s8) M2C_FIELD(temp_s0, s32 *, 0x58);
    temp_v1_2 = M2C_FIELD(temp_s0, s32 *, 0x114);
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 1:                                         /* switch 2 */
        temp_v0 = func_009A8570();
        switch (temp_v0) {                          /* switch 3; irregular */
        case 0x30:                                  /* switch 3 */
            func_009A8530();
            return 9;
        case 0x31:                                  /* switch 3 */
            func_009A8530();
            return 0xA;
        case 0x32:                                  /* switch 3 */
            func_009A8530();
            return 0xB;
        case 0x33:                                  /* switch 3 */
            func_009A8530();
            return 0xC;
        case 0x34:                                  /* switch 3 */
            func_009A8530();
            return 0xD;
        case 0x35:                                  /* switch 3 */
            func_009A8530();
            return 0xE;
        case 0x36:                                  /* switch 3 */
            func_009A8530();
            return 0xF;
        case 0x37:                                  /* switch 3 */
            func_009A8530();
            return 0x10;
        case 0x38:                                  /* switch 3 */
            func_009A8530();
            return 0x11;
        case 0x39:                                  /* switch 3 */
            func_009A8530();
            return 0x12;
        case 0x3A:                                  /* switch 3 */
            func_009A8530();
            return 0x13;
        case 0x3B:                                  /* switch 3 */
            func_009A8530();
            return 0x14;
        case 0x3C:                                  /* switch 3 */
            func_009A8530();
            return 0x15;
        case 0x3D:                                  /* switch 3 */
            func_009A8530();
            return 0x16;
        case 0x3E:                                  /* switch 3 */
            func_009A8530();
            return 0x17;
        case 0x3F:                                  /* switch 3 */
            func_009A8530();
            return 0x18;
        case 0x40:                                  /* switch 3 */
            func_009A8530();
            return 0x19;
        case 0x41:                                  /* switch 3 */
            func_00961060();
            func_009A8530();
            return 0x23;
        case 0x42:                                  /* switch 3 */
            func_009A8530();
            return 0x1A;
        case 0x43:                                  /* switch 3 */
            func_009A8530();
            return 7;
        case 0x44:                                  /* switch 3 */
            func_009A8530();
            return 8;
        case 0x45:                                  /* switch 3 */
            func_009A8530();
            return 0x1B;
        case 0x46:                                  /* switch 3 */
            func_009A8530();
            return 0x1C;
        case 0x47:                                  /* switch 3 */
            func_009A8530();
            return 0x1D;
        case 0x48:                                  /* switch 3 */
            func_009A8530();
            return 0x1E;
        case 0x49:                                  /* switch 3 */
            func_009A8530();
            return 0x1F;
        case 0x4A:                                  /* switch 3 */
            func_009A8530();
            return 0x20;
        case 0x4B:                                  /* switch 3 */
            func_009A8530();
            return 2;
        case 0x4C:                                  /* switch 3 */
            func_009A8530();
            func_00961090();
            M2C_FIELD(temp_s0, s8 *, 0x118) = 3;
            M2C_FIELD(temp_s0, s32 *, 0x114) = 2;
            return 3;
        case 0x4D:                                  /* switch 3 */
            func_009A8530();
            return 4;
        case 0x4E:                                  /* switch 3 */
            func_009A8530();
            return 5;
        case 0x4F:                                  /* switch 3 */
            func_009A8530();
            return 6;
        case 0x51:                                  /* switch 3 */
            func_009A8530();
            return 0x25;
        case 0x6B:                                  /* switch 3 */
        case 0x50:                                  /* switch 3 */
            func_009A8530();
            M2C_FIELD(temp_s0, s32 *, 0x114) = 0;
            func_00B37B90();
            return 0;
        default:                                    /* switch 3 */
            return 0;
        }
        break;
    case 0:                                         /* switch 2 */
        /* fallthrough */
    default:                                        /* switch 2 */
        return func_00B3CD30();
    }
}
