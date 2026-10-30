/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0014A960(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_001CDAA0();                                /* extern */
M2C_UNK func_0024F520(M2C_UNK);                     /* extern */
M2C_UNK func_00251500();                            /* extern */
M2C_UNK func_002515D0();                            /* extern */
M2C_UNK func_002515F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00251610(M2C_UNK);                     /* extern */
M2C_UNK func_00251630(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00251890(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002518C0(M2C_UNK);                     /* extern */
M2C_UNK func_00251940(M2C_UNK);                     /* extern */
M2C_UNK func_00251960(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00251980(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_002519B0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00251A70(M2C_UNK);                     /* extern */
M2C_UNK func_00251AC0(M2C_UNK);                     /* extern */
s32 func_00251B70();                                /* extern */
s32 func_00251B90();                                /* extern */
M2C_UNK func_00251C40(s32 *);                       /* extern */
M2C_UNK func_00253C80();                            /* extern */
M2C_UNK func_00253F60(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00255B50();                            /* extern */
M2C_UNK func_002FC6E0(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_003060B0();                            /* extern */
extern s32 D_003E9C78;
extern char D_0058D890[];
extern char D_0058D894[];
extern M2C_UNK func_00253750;
extern M2C_UNK func_0026DFD0;

void func_0026E9C0(void) {
    s32 sp10;
    M2C_UNK *sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp5C;
    s32 var_v0;

    (*(s32 *)D_0058D894) = 0;
    if (func_001CDAA0() == 0) {
        var_v0 = 0x3C;
    } else if (func_001CDAA0() != 1) {
        var_v0 = 0x3C;
    } else {
        var_v0 = 0x32;
    }
    sp10 = var_v0;
    (*(s32 *)D_0058D890) = func_00251B70();
    sp40 = func_00251B70();
    sp3C = func_00251B90();
    sp20 = 0xF;
    sp18 = &func_0026DFD0;
    sp24 = 0xF;
    sp48 = 5;
    sp28 = 0xF;
    sp5C = 1;
    sp2C = 0x64;
    sp30 = 0x64;
    sp34 = 0x64;
    sp38 = 0x64;
    sp1C = 0;
    sp4C = 0;
    sp50 = 0;
    func_00251C40(&sp10);
    func_00251AC0(0x20000);
    func_00251A70(0x8000);
    func_0024F520(0);
    func_002518C0(7);
    func_002515D0();
    func_003060B0();
    func_00251890(0, 0, 0, 0);
    func_00251890(1, 1, 1, 1);
    func_00251890(2, 2, 1, 1);
    func_00251890(3, 3, 2, 2);
    func_00251890(4, 4, 1, 1);
    func_00251890(5, 5, 1, 1);
    func_00251890(6, 6, 1, 1);
    func_00251890(7, 3, 1, 1);
    func_00251940(0x2F);
    func_00251980(0, 0, 0, 0x27);
    func_00251980(0, 2, 0x28, 0x28);
    func_00251980(0, 3, 0x2F, 0x2F);
    func_00251980(0, 4, 0x2F, 0x2F);
    func_00251980(1, 1, 0x2C, 0x2F);
    func_00251980(1, 5, 0x2A, 0x2B);
    func_00251980(0, 6, 0x29, 0x29);
    func_002519B0(0, 0x7F, 0, 0);
    func_002519B0(1, 0x7F, 0, 0);
    func_002519B0(2, 0x7F, 0, 0);
    func_002519B0(3, 0x7F, 0, 0);
    func_002519B0(4, 0x7F, 0, 0);
    func_002519B0(5, 0x7F, 0, 0);
    func_002519B0(6, 0x7F, 0, 0);
    func_002519B0(7, 0x7F, 0, 0);
    func_00253C80();
    func_00255B50();
    func_00251500();
    func_00251630(0, 0xF);
    func_00251630(1, 0xF);
    func_00251630(2, 0xF);
    func_002FC6E0(D_003E9C78, 0, 0xF, 0, 0, 0, 0, 0);
    func_00253F60(0, 0xF, 0, 0, 0, 0, 0);
    func_00251960(0, 0x32);
    func_00251960(1, 0x32);
    func_0014A960(&func_00253750, 0);
    func_00251610(1);
    func_002515F0(0, 1);
    func_002515F0(1, 1);
    func_002515F0(2, 1);
}
