/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0013E280();                                /* extern */
M2C_UNK func_0013E2A0(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002631D0(M2C_UNK);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00CD7B80();                            /* extern */
M2C_UNK func_00CDC7C0(s32);                         /* extern */
s32 func_00CDCD70();                                /* extern */
M2C_UNK func_00CDF630();                            /* extern */
s32 func_00CF4290();                                /* extern */
M2C_UNK func_00CF5900();                            /* extern */
M2C_UNK func_00CF59C0();                            /* extern */
M2C_UNK func_00CF5B40();                            /* extern */
M2C_UNK func_00CF5D80();                            /* extern */
M2C_UNK func_00CF6940();                            /* extern */
extern s32 D_003E7E50;
extern char D_00591DD5[];
extern char D_00591F2D[];
extern char D_00591F2E[];
extern char D_00591F38[];
extern char D_00CFFF20[];
extern char D_00CFFF3C[];
extern char D_00CFFF4C[];

void func_00CF4150(void) {
    s32 temp_v0;

    func_001C48E8(((void *)D_00CFFF20), 0, 0x38);
    (*(s32 *)D_00CFFF3C) = func_00CF4290();
    (*(s32 *)D_00CFFF4C) = 1;
    temp_v0 = func_002631D0(1);
    switch (temp_v0) {                              /* irregular */
    case 6:
    case 5:
        break;
    case 8:
        func_00CDC7C0(0);
        break;
    case 4:
        func_00CDC7C0(func_00CDCD70());
        break;
    case 3:
        func_00CDF630();
        func_00CF6940();
        func_00CF5B40();
        func_00CF59C0();
        func_00CF5900();
        func_00CF5D80();
        break;
    }
    func_009E1D30(1, 0);
    func_009E1D30(2, 0);
    (*(s8 *)D_00591F2D) = 0;
    (*(s8 *)D_00591F2E) = 0;
    (*(s8 *)D_00591DD5) = 0;
    func_00CD7B80();
    (*(s32 *)D_00591F38) = 0x7FFF;
    D_003E7E50 = func_0013E280();
    func_0013E2A0(2);
}
