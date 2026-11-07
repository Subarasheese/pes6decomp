/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0017A700(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0017F900();                                /* extern */
M2C_UNK func_001B8380(M2C_UNK);                     /* extern */
M2C_UNK func_001B9030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0023B030();                            /* extern */
M2C_UNK func_0023FAA0();                            /* extern */
M2C_UNK func_00241620(M2C_UNK);                     /* extern */
M2C_UNK func_00245390();                            /* extern */
M2C_UNK func_0024CAE0(M2C_UNK *);                   /* extern */
s32 func_0026DA40(M2C_UNK);                         /* extern */
M2C_UNK func_002FC740(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00363C40();                            /* extern */
M2C_UNK func_008B36F0();                            /* extern */
M2C_UNK func_008CC580();                            /* extern */
M2C_UNK func_00941E60();                            /* extern */
M2C_UNK func_00941ED0();                            /* extern */
extern char D_003AA200[];
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern char D_003AA3A0[];
extern char D_003AA3A1[];
extern char D_003AA3A2[];
extern char D_003AA3A3[];
extern char D_003AA3A4[];
extern char D_003AA3A5[];
extern char D_003AA3A6[];
extern char D_003AA3A7[];
extern s32 D_003E9A88;
extern s8 D_003E9E80;
extern char D_0053C300[];
extern char D_00591C09[];
extern char D_00591DD4[];

void func_0023FFA0(void) {
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_00591C09);
    if ((func_0026DA40(1) == 0) && (func_0017F900() == 1)) {
        func_008B36F0();
        func_0023B030();
        (*(s8 *)D_00591DD4) = 1;
        (*(s8 *)D_003AA235) = 0;
        (*(s8 *)D_003AA3A1) = 0;
        (*(s8 *)D_003AA269) = 0;
        (*(s8 *)D_003AA3A2) = 0;
        (*(s8 *)D_003AA29D) = 0;
        (*(s8 *)D_003AA3A3) = 0;
        (*(s8 *)D_003AA2D1) = 0;
        (*(s8 *)D_003AA3A4) = 0;
        (*(s8 *)D_003AA305) = 0;
        (*(s8 *)D_003AA3A5) = 0;
        (*(s8 *)D_003AA339) = 0;
        (*(s8 *)D_003AA3A6) = 0;
        (*(s8 *)D_003AA36D) = 0;
        (*(s8 *)D_003AA3A7) = 0;
        (*(s8 *)D_003AA201) = -1;
        D_003E9E80 = 0;
        (*(s8 *)D_003AA3A0) = -1;
        (*(u8 *)D_00591C09) = 0;
        func_0024CAE0(((void *)D_003AA200));
        (*(u8 *)D_00591C09) = temp_s0;
        func_00245390();
        D_003E9A88 = 0;
        func_00941ED0();
        func_008CC580();
        func_00941E60();
        func_001B9030(6, 0x012C0019, 1);
        func_001B8380(0);
        func_00363C40();
        func_0023FAA0();
        func_00241620(0);
        func_00241620(1);
        func_002FC740(0, 0);
        func_002FC740(1, 0);
        func_0017A700(1, 0);
        func_0017A700(2, 0);
        (*(s16 *)D_0053C300) = 2;
    }
}
