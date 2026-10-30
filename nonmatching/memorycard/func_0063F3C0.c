/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E92B0(int);
extern void func_00656A70(void);
extern s32 func_0017F900(void);
extern s32 func_00649CD0(void);
extern s32 func_0063FB90(void);
s32 func_0061F950(M2C_UNK);                         /* extern */
s32 func_006204E0();                                /* extern */
s32 func_006210F0();                                /* extern */
s32 func_00624BE0(M2C_UNK);                         /* extern */
M2C_UNK func_006278E0();                            /* extern */
s32 func_00638080(s32);                             /* extern */
u8 func_0063F9B0();                                 /* extern */
s32 func_0063FAC0();                                /* extern */
M2C_UNK func_0063FD30();                            /* extern */
s32 func_00640010(M2C_UNK);                         /* extern */
s32 func_006459B0();                                /* extern */
s32 func_00648040();                                /* extern */
s32 func_00648BF0();                                /* extern */
s32 func_00648FC0(M2C_UNK);                         /* extern */
s32 func_00649970();                                /* extern */
M2C_UNK func_0064E3F0();                            /* extern */
M2C_UNK func_0064E810();                            /* extern */
s32 func_00652700();                                /* extern */
s32 func_00653700();                                /* extern */
s32 func_00654040();                                /* extern */
M2C_UNK func_00656540();                            /* extern */
M2C_UNK func_00656D90();                            /* extern */
extern s32 D_003E9DF8;
extern s32 D_003E9E24;
extern s32 D_003EA188;
extern char D_0065D898[];
extern char D_0065D960[];

void func_0063F3C0(void) {
    M2C_UNK var_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    func_0064E3F0();
    func_0064E810();
    switch ((*(u8 *)D_0065D960)) {                           /* switch 1; irregular */
    case 0x11:                                      /* switch 1 */
        temp_v0 = func_0061F950(2);
        switch (temp_v0) {                          /* switch 6; irregular */
        case 0:                                     /* switch 6 */
            break;
        case 3:                                     /* switch 6 */
            D_003E9E24 = 4;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        case 2:                                     /* switch 6 */
            D_003E9E24 = 3;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        case 1:                                     /* switch 6 */
            D_003E9E24 = 6;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        }
        break;
    case 0x10:                                      /* switch 1 */
        temp_v0_2 = func_0061F950(1);
        switch (temp_v0_2) {                        /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            break;
        case 1:                                     /* switch 5 */
            D_003E9E24 = 6;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        case 3:                                     /* switch 5 */
        case 2:                                     /* switch 5 */
            D_003E9E24 = 3;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        }
        break;
    case 0xF:                                       /* switch 1 */
        temp_v0_3 = func_0061F950(0);
        switch (temp_v0_3) {                        /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            break;
        case 1:                                     /* switch 4 */
            D_003E9E24 = 6;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        case 3:                                     /* switch 4 */
        case 2:                                     /* switch 4 */
            D_003E9E24 = 3;
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        }
        break;
    case 0x14:                                      /* switch 1 */
        switch (D_003E9DF8) {                       /* switch 3; irregular */
        case 0x47:                                  /* switch 3 */
            var_a0 = 6;
            break;
        case 0x46:                                  /* switch 3 */
            var_a0 = 6;
            break;
        case 0x3D:                                  /* switch 3 */
            var_a0 = 6;
            break;
        case 0x3C:                                  /* switch 3 */
            var_a0 = 6;
            break;
        case 0x3B:                                  /* switch 3 */
            var_a0 = 5;
            break;
        default:                                    /* switch 3 */
            var_a0 = 3;
            break;
        }
        if (func_00624BE0(var_a0) != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0xC:                                       /* switch 1 */
        if (func_00648FC0(1) != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0xB:                                       /* switch 1 */
        if (func_00648FC0(0) != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x6:                                       /* switch 1 */
        temp_v0_4 = func_00640010(-1);
        switch (temp_v0_4) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 1:                                     /* switch 2 */
            if (!((*(s32 *)D_0065D898) & 0x10000000)) {
                if (!((*(s32 *)D_0065D898) & 0x20000000)) {
                    D_003E9E24 = 2;
                } else {
                    D_003E9E24 = 6;
                }
            } else {
                D_003E9E24 = 5;
            }
        default:                                    /* switch 2 */
block_61:
            (*(u8 *)D_0065D960) = 0x1A;
            break;
        case 2:                                     /* switch 2 */
            D_003E9E24 = 1;
            goto block_61;
        }
        break;
    default:                                        /* switch 1 */
        if ((D_003E9DF8 != 0) && (func_0063FB90() != 0)) {
            (*(u8 *)D_0065D960) = 3;
        case 0x3:                                   /* switch 1 */
            func_00656D90();
            (*(u8 *)D_0065D960) = 4;
        }
        break;
    case 0x4:                                       /* switch 1 */
        if (func_0017F900() != 0) {
            func_006278E0();
            func_002E92B0(1);
            func_00656A70();
            func_00656540();
            (*(u8 *)D_0065D960) = 5;
        }
        break;
    case 0x5:                                       /* switch 1 */
        (*(u8 *)D_0065D960) = func_0063F9B0();
        break;
    case 0x7:                                       /* switch 1 */
        if (func_006204E0() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x8:                                       /* switch 1 */
        if (func_00648040() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x9:                                       /* switch 1 */
        if (func_00649CD0() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0xA:                                       /* switch 1 */
        if (func_00649970() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0xD:                                       /* switch 1 */
        if (func_00648BF0() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0xE:                                       /* switch 1 */
        if (func_006210F0() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x44:                                      /* switch 1 */
    case 0x12:                                      /* switch 1 */
    case 0x13:                                      /* switch 1 */
        if (func_00638080(D_003EA188) != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x15:                                      /* switch 1 */
        if (func_00654040() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x17:                                      /* switch 1 */
    case 0x16:                                      /* switch 1 */
        if (func_006459B0() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x18:                                      /* switch 1 */
        if (func_00653700() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x19:                                      /* switch 1 */
        if (func_00652700() != 0) {
            (*(u8 *)D_0065D960) = 0x1A;
        }
        break;
    case 0x1A:                                      /* switch 1 */
        if (func_0063FAC0() != 0) {
            D_003E9DF8 = 0;
            (*(u8 *)D_0065D960) = 0;
        }
        break;
    }
    func_0063FD30();
}
