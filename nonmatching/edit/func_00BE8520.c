/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A6D50(M2C_UNK);                     /* extern */
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
s32 func_001BE4D0(M2C_UNK);                         /* extern */
M2C_UNK func_0020B600(u8);                          /* extern */
M2C_UNK func_00271FB0();                            /* extern */
M2C_UNK func_00272170();                            /* extern */
M2C_UNK func_0027A880(M2C_UNK);                     /* extern */
M2C_UNK func_002CB730(M2C_UNK);                     /* extern */
M2C_UNK func_00B90880();                            /* extern */
M2C_UNK func_00B90900();                            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00B9F910(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00B9FBC0(s32);                         /* extern */
M2C_UNK func_00BC4010();                            /* extern */
M2C_UNK func_00BC65A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC65E0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6910(M2C_UNK);                     /* extern */
M2C_UNK func_00BC6930();                            /* extern */
M2C_UNK func_00BE8700(M2C_UNK);                     /* extern */
s32 func_00BFE390();                                /* extern */
M2C_UNK func_00BFE3D0();                            /* extern */
s32 func_00BFE3F0();                                /* extern */
M2C_UNK func_00BFE400();                            /* extern */
extern s32 D_003EB064;
extern char D_00591BCA[];
extern char D_00CB5998[];
extern char D_00CB599C[];

s32 func_00BE8520(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    switch (D_003EB064) {                           /* irregular */
    case 0:
        if ((*(u8 *)D_00591BCA) == 0xC) {
            (*(u8 *)D_00591BCA) = 0;
        }
        func_0020B600((*(u8 *)D_00591BCA));
        func_00272170();
        func_00B90880();
        func_00BFE400();
        func_001A6D50(0x13);
        D_003EB064 = D_003EB064;
        /* fallthrough */
    case 1:
        if (func_00B9F910(0, 0) != 0) {
            func_00B91490(2);
            func_001B6460(1);
            func_00BC6930();
            func_00BC6910(0x20001A);
            func_00BC4010();
            func_00BC65E0(0xB);
            func_002CB730(0xB);
            temp_s0 = (*(s32 *)D_00CB599C);
            var_s2 = (*(s32 *)D_00CB5998);
            var_s1 = 0;
            if (temp_s0 > 0) {
                do {
                    func_00B9FBC0(var_s2);
                    var_s1 += 1;
                    var_s2 += 0xC;
                } while (var_s1 < temp_s0);
            }
            func_002CB730(1);
            D_003EB064 += 1;
        case 2:
            if ((func_00BFE390() != 0) && (func_00BFE3F0() != 0) && (func_001BE4D0(0) != 0)) {
                func_00BFE3D0();
                D_003EB064 += 1;
            case 3:
                if (func_00B9FBB0() != 0) {
                    func_00271FB0();
                    func_0027A880(0);
                    func_00B90900();
                    func_00BE8700(0);
                    func_00BC65A0(0xB);
                    D_003EB064 = 0;
                    return 2;
                }
                goto block_18;
            }
            goto block_18;
        }
block_18:
    default:
        return 1;
    }
}
