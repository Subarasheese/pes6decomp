/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_001DA4B0(s32);
extern s32 func_0021DF90(s32);
extern s32 func_0017F900(void);
M2C_UNK func_001B8DC0();                            /* extern */
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001DD560(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_002DED00(s32);                         /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_00825610();                            /* extern */
M2C_UNK func_0084A620(M2C_UNK);                     /* extern */
M2C_UNK func_008804D0();                            /* extern */
M2C_UNK func_008B34C0();                            /* extern */
M2C_UNK func_008B36F0();                            /* extern */
s32 func_008C94A0();                                /* extern */
extern s32 D_003E9A4C;
extern s32 D_003E9A50;
extern s32 D_003E9A60;
extern char D_008E7868[];
extern char D_008E7878[];

s32 func_0023B690(void) {
    switch (D_003E9A4C) {                           /* irregular */
    case 3:
        func_0081D240(0);
        D_003E9A4C = 0;
        func_008B34C0();
        func_001B8DC0();
        func_008B34C0();
        func_001F0210(func_0021DF90(0x13));
        func_001E7140(func_0021E000(0x154U));
        func_001E7140(func_0021E000(0x157U));
        func_001D5C40(0x10385);
        func_001D5C40(0x10391);
        func_001D5C40(0x1003C);
        func_001D5C40(0x103A0);
        func_001D5C40(0x1038F);
        func_001D5C40(0x10344);
        func_001DD560(1);
        func_001DA4B0(2);
        D_003E9A50 = 0;
        func_008804D0();
        func_002DED00(D_003E9A60);
        return 1;
    case 0:
        func_0084A620(1);
        func_008B36F0();
        D_003E9A4C += 1;
block_13:
    default:
        return 0;
    case 1:
        if (func_0017F900() == 1) {
            func_00825610();
            (*(s32 *)D_008E7878) = 0;
            (*(s32 *)D_008E7868) = 0;
            D_003E9A4C = D_003E9A4C;
        }
        goto block_13;
    case 2:
        if (func_008C94A0() == 2) {
            D_003E9A4C += 1;
        }
        goto block_13;
    }
}
