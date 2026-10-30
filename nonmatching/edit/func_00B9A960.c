/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_002E8BA0(s32);                         /* extern */
s32 func_002E8C60();                                /* extern */
M2C_UNK func_00B90900();                            /* extern */
M2C_UNK func_00B911B0();                            /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B950A0();                            /* extern */
M2C_UNK func_00B950E0();                            /* extern */
s32 func_00B9AC00();                                /* extern */
M2C_UNK func_00B9ACC0();                            /* extern */
s32 func_00B9AE90(s32);                             /* extern */
M2C_UNK func_00B9D270();                            /* extern */
s32 func_00B9D2A0(s32);                             /* extern */
s32 func_00B9D680(s32);                             /* extern */
M2C_UNK func_00B9D8C0();                            /* extern */
M2C_UNK func_00B9E970();                            /* extern */
M2C_UNK func_00B9E9E0();                            /* extern */
M2C_UNK func_00B9F890(M2C_UNK);                     /* extern */
s32 func_00B9FBB0(s32);                             /* extern */
M2C_UNK func_00BC65A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC65E0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
extern char D_00CE3F40[];
extern char D_00CE3F44[];
extern char D_00CE3F48[];
extern char D_00CE3F4C[];
extern char D_00CE3F50[];
extern char D_00CE3F54[];
extern char D_00CE3F58[];
extern char D_00CE3F5C[];
extern char D_00CE3F60[];
extern char D_00CE3F64[];
extern char D_00CE3F68[];
extern char D_00CE3F6C[];
extern char D_00CE3F70[];
extern char D_00CE3F74[];
extern char D_00CE3F7A[];
extern char D_00CE4078[];

s32 func_00B9A960(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    switch ((*(s32 *)D_00CE4078)) {                           /* switch 1; irregular */
    default:                                        /* switch 1 */
        func_00BC65E0(0xA);
        func_001C48E8(((void *)D_00CE3F40), 0, 0x134);
        (*(s32 *)D_00CE3F40) = 0;
        (*(s32 *)D_00CE3F44) = 0;
        (*(s32 *)D_00CE3F48) = 1;
        (*(s32 *)D_00CE3F60) = 0;
        (*(s32 *)D_00CE3F5C) = 0;
        (*(s32 *)D_00CE3F58) = 0;
        (*(s32 *)D_00CE3F54) = 0;
        (*(s32 *)D_00CE3F50) = 0;
        (*(s32 *)D_00CE3F4C) = 0;
        (*(s32 *)D_00CE3F64) = 1;
        (*(s32 *)D_00CE3F68) = 0;
        (*(s32 *)D_00CE3F6C) = 0;
        (*(s32 *)D_00CE3F70) = 0;
        (*(s32 *)D_00CE3F74) = 0;
        (*(s16 *)D_00CE3F7A) = 0;
        func_00B9D270();
        func_00B9D8C0();
        func_00B9E9E0();
        func_00B911B0();
        func_00B950E0();
        func_00B90900();
        func_00BC6910(0x2A001D);
        func_00B91440(3);
        (*(s32 *)D_00CE4078) = 1;
        /* fallthrough */
    case 0x1:                                       /* switch 1 */
        if (func_00B9AC00() != 0) {
            (*(s32 *)D_00CE4078) = 0x10;
        }
        break;
    case 0x10:                                      /* switch 1 */
        temp_v0 = func_00B9D2A0((*(s32 *)D_00CE4078));
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 2:                                     /* switch 2 */
            (*(s32 *)D_00CE4078) = 0x40;
            break;
        case 1:                                     /* switch 2 */
            (*(s32 *)D_00CE4078) = 0x20;
            break;
        }
        break;
    case 0x20:                                      /* switch 1 */
        if (func_00B9AE90((*(s32 *)D_00CE4078)) == 1) {
            (*(s32 *)D_00CE4078) = 0x30;
        }
        break;
    case 0x30:                                      /* switch 1 */
        temp_v0_2 = func_00B9D680((*(s32 *)D_00CE4078));
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            break;
        case 2:                                     /* switch 3 */
            (*(s32 *)D_00CE4078) = 0x20;
            break;
        case 1:                                     /* switch 3 */
            (*(s32 *)D_00CE4078) = 0x40;
            break;
        }
        break;
    case 0x40:                                      /* switch 1 */
        func_002E8BA0((*(s32 *)D_00CE4078));
        if (func_002E8C60() != 0) {
            (*(s32 *)D_00CE4078) = 0;
            func_00B9E970();
            func_00B950A0();
            func_00B9F890(0x18);
            func_00BC65A0(0xB);
            func_00BC65A0(0xA);
            (*(s32 *)D_00CE4078) = 0x41;
        }
        break;
    case 0x41:                                      /* switch 1 */
        if (func_00B9FBB0((*(s32 *)D_00CE4078)) != 0) {
            var_s0 = 1;
        }
        break;
    }
    if (var_s0 == 0) {
        func_00B9ACC0();
    }
    return var_s0;
}
