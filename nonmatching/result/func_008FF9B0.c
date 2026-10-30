/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00154090(M2C_UNK);                     /* extern */
M2C_UNK func_001A5BE0(M2C_UNK);                     /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, s32);              /* extern */
s32 func_0021E4B0(u16, M2C_UNK, M2C_UNK, u16);      /* extern */
s32 func_00225520(u8);                              /* extern */
s32 func_0026C760();                                /* extern */
M2C_UNK func_002CAE20();                            /* extern */
M2C_UNK func_002CBAF0(M2C_UNK);                     /* extern */
M2C_UNK func_0081CCA0(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_0081E0B0();                            /* extern */
M2C_UNK func_0081E1D0();                            /* extern */
s8 func_009066E0();                                 /* extern */
M2C_UNK func_009113C0();                            /* extern */
M2C_UNK func_0091D640(M2C_UNK);                     /* extern */
M2C_UNK func_0091DBB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00BC5BE0();                            /* extern */
extern void *D_003E77B0;
extern char D_0058D7A6[];
extern char D_0058D7A7[];
extern char D_0058D7AA[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591C09[];
extern char D_008B144E[];
extern char D_0091ED80[];
extern char D_00921D44[];
extern char D_00921D50[];
extern char D_00921D81[];
extern M2C_UNK *D_00921DC8;
extern M2C_UNK func_00904070;
extern M2C_UNK func_0090E020;

void func_008FF9B0(void) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    if (((*(s8 *)D_0058D7AA) != 0) && (func_0026C760() == 0)) {
        func_001A5BE0(3);
        (*(s32 *)D_0091ED80) = 0xA;
        func_002CBAF0(0xA);
    } else {
        if (func_0026C760() != 0) {
            func_00BC5BE0();
            func_002CAE20();
        }
        (*(s32 *)D_0091ED80) = 0xC;
        func_00154090(0xC);
    }
    if ((*(u8 *)D_00591C09) == 2) {
        var_v0 = func_00225520(M2C_FIELD(D_003E77B0, u8 *, 0x2C));
    } else {
        var_v0 = func_0021E4B0((*(u16 *)D_00591BB0), 0, 0, (*(u16 *)D_00591BB0));
    }
    func_001C7F58(((void *)D_00921D50), var_v0);
    if ((*(u8 *)D_00591C09) == 2) {
        var_v0_2 = func_00225520(M2C_FIELD(D_003E77B0, u8 *, 0x2D));
    } else {
        var_v0_2 = func_0021E4B0((*(u16 *)D_00591BB2), 0, 0, (*(u16 *)D_00591BB2));
    }
    func_001C7F58(((void *)D_00921D81), var_v0_2);
    if ((*(s8 *)D_0058D7A7) != 0) {
        func_009113C0();
        (*(s32 *)D_00921D44) = 0;
        D_00921DC8 = &func_0090E020;
        return;
    }
    if ((*(u8 *)D_00591C09) == 7) {
        func_009113C0();
        (*(s32 *)D_00921D44) = 0;
        D_00921DC8 = &func_00904070;
        return;
    }
    (*(s8 *)D_0058D7A6) = func_009066E0();
    func_009113C0();
    (*(s32 *)D_00921D44) = 0;
    D_00921DC8 = &func_00904070;
    if ((*(s8 *)D_0058D7AA) != 0) {
        func_0081D240(1);
        func_0081CCA0(0);
        var_s0 = 0;
        do {
            if (var_s0 == 0) {
                func_0081E1D0();
            } else {
                func_0081E0B0();
            }
            var_s0 += 1;
        } while (var_s0 < 2);
        if (func_0026C760() != 0) {
            temp_s0 = (*(s8 *)D_008B144E) & 1;
            func_0091DBB0(temp_s0, 0);
            func_0091DBB0(1 - temp_s0, 0);
            func_0091D640(3);
        }
    }
}
