/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00135C40(M2C_UNK);                     /* extern */
M2C_UNK func_00135CD0();                            /* extern */
M2C_UNK func_00135DA0(M2C_UNK *);                   /* extern */
M2C_UNK func_00135DC0(s32);                         /* extern */
M2C_UNK func_00135DE0(M2C_UNK);                     /* extern */
M2C_UNK func_00135E20(s32);                         /* extern */
M2C_UNK func_00135E40(M2C_UNK);                     /* extern */
M2C_UNK func_00135E60(s32);                         /* extern */
M2C_UNK func_00135E90(s32);                         /* extern */
s32 func_00135EC0();                                /* extern */
M2C_UNK func_00136DB0(M2C_UNK);                     /* extern */
s32 func_00140460();                                /* extern */
s32 func_00140470();                                /* extern */
s32 func_00140540();                                /* extern */
M2C_UNK func_00146C70(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_00153FC0(M2C_UNK, M2C_UNK, s32);           /* extern */
M2C_UNK func_00155A30();                            /* extern */
M2C_UNK func_00155A60();                            /* extern */
M2C_UNK func_0017FD90();                            /* extern */
M2C_UNK func_0017FE20();                            /* extern */
s32 func_001CDAA0();                                /* extern */
M2C_UNK func_002CAE80();                            /* extern */
M2C_UNK func_002CAEF0();                            /* extern */
extern char D_00902280[];
extern char D_00902298[];
extern char D_009022B0[];
extern char D_009022D0[];

void func_00901580(void) {
    s32 temp_v0;
    s32 temp_v0_2;

    func_0017FD90();
    func_00155A30();
    temp_v0 = func_00135EC0();
    func_00146C70(((void *)D_00902298), ((void *)D_00902280), temp_v0);
    func_002CAEF0();
    temp_v0_2 = func_00153FC0(4, 0x40, temp_v0);
    func_00135E90(temp_v0_2);
    func_00135E60(func_00140540());
    func_00135E40(0);
    func_00135E20(func_00140460());
    func_00135DE0(0);
    func_00135DC0(func_00140470());
    if (func_001CDAA0() == 0) {
        func_00135DA0(((void *)D_009022B0));
    } else {
        func_00135DA0(((void *)D_009022D0));
    }
    func_00135CD0();
    func_00136DB0(0x2A1C);
    func_00135C40(0);
    func_00135E90(0);
    func_00153FA0(temp_v0_2);
    func_002CAE80();
    func_00155A60();
    func_0017FE20();
}
