/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_0023B380(M2C_UNK);                         /* extern */
M2C_UNK func_0023B3B0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00309420();                                /* extern */
M2C_UNK func_008C4F30();                            /* extern */
M2C_UNK func_008C5AA0();                            /* extern */
M2C_UNK func_008C5D00();                            /* extern */
M2C_UNK func_008C5F70();                            /* extern */
M2C_UNK func_008C6440();                            /* extern */
M2C_UNK func_008C6930();                            /* extern */
M2C_UNK func_008C6A90();                            /* extern */
M2C_UNK func_008C6C40();                            /* extern */
M2C_UNK func_008C9E80(s32);                         /* extern */
extern s32 D_003EA4A4;
extern s32 D_003EA4BC;
extern char D_00591F2C[];
extern char D_008E78A0[];

void func_008C8FB0(void) {
    if (((*(s32 *)D_008E78A0) == 0) && (func_0017F900() == 1)) {
        func_008C5D00();
    }
    func_008C6A90();
    if (D_003EA4BC == 1) {
        func_008C6C40();
        func_008C6440();
        func_008C5F70();
        func_008C5AA0();
        func_008C4F30();
    }
    if (func_00309420() != 0) {
        if (D_003EA4BC == 2) {
            func_008C6C40();
            func_008C6440();
            func_008C5F70();
            func_008C5AA0();
        }
        func_008C6930();
    }
    if (((*(u8 *)D_00591F2C) == 3) && (func_0023B380(0) != 0)) {
        func_0023B3B0(1, 0);
        func_0023B3B0(2, 0);
        func_0023B3B0(3, 0);
    }
    D_003EA4BC = 0;
    func_008C9E80(D_003EA4A4);
}
