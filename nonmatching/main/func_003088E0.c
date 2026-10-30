/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC780(void);
extern void func_00255EA0(void);
extern void func_00182B20(int);
extern s32 func_001FC800(void);
extern void func_00256150(void);
extern void func_00182B30(int);
M2C_UNK func_001A1420();                            /* extern */
M2C_UNK func_002BD960();                            /* extern */
M2C_UNK func_003424C0();                            /* extern */
M2C_UNK func_00802910(M2C_UNK);                     /* extern */
M2C_UNK func_00802A00(M2C_UNK);                     /* extern */
M2C_UNK func_0080DE80(s32);                         /* extern */
M2C_UNK func_0081CA90();                            /* extern */
M2C_UNK func_00841F60();                            /* extern */
M2C_UNK func_00841F80();                            /* extern */
M2C_UNK func_00841FA0();                            /* extern */
M2C_UNK func_00841FC0();                            /* extern */
M2C_UNK func_00846B60();                            /* extern */
M2C_UNK func_00853380();                            /* extern */
s32 func_00853430(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00857FA0();                            /* extern */
M2C_UNK func_0085F1A0();                            /* extern */
M2C_UNK func_00885B30();                            /* extern */
M2C_UNK func_00BC5BE0();                            /* extern */
extern char D_003B71A0[];
extern char D_003B71A4[];
extern char D_003B71A8[];
extern char D_003B71AC[];
extern char D_003B71B0[];
extern char D_003B71B4[];
extern char D_003B71B8[];
extern char D_003B71BC[];
extern char D_003B71C0[];
extern char D_003B71C4[];
extern char D_003B71C8[];
extern char D_003B71CC[];
extern char D_005EFDC0[];
extern char D_00807BB0[];
extern char D_008B156F[];
extern M2C_UNK func_0030C1D0;

s32 func_003088E0(s32 arg0) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    M2C_UNK32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 *var_v1;
    s32 var_a1;

    func_00885B30();
    func_0085F1A0();
    func_00802A00(0xD);
    func_0081CA90();
    switch (arg0) {                                 /* irregular */
    case 1:
        func_00841FA0();
        func_0080DE80(func_00853430(4, 0, 0x34));
        if (((*(u8 *)D_008B156F) == 2) || ((*(u8 *)D_008B156F) == 4)) {
            func_00802910(2);
        } else {
            func_00255EA0();
            func_00256150();
            func_003424C0();
            func_002BD960();
            func_00BC5BE0();
            func_001A1420();
            func_00182B30(0);
            func_00182B20(0);
            func_001FC800();
            func_001FC780();
            var_a1 = 1;
            M2C_FIELD(((void *)D_005EFDC0), s32 *, 0) = 5;
            if (1 < 4) {
                var_v1 = ((void *)D_005EFDC0) + (1 * 4);
                do {
                    var_a1 += 1;
                    *var_v1 = 0;
                    var_v1 += 4;
                } while (var_a1 < 4);
            }
            sp20 = (*(f32 *)D_003B71A0);
            sp24 = (*(f32 *)D_003B71A4);
            sp28 = (*(f32 *)D_003B71A8);
            sp2C = (*(f32 *)D_003B71AC);
            sp30 = (*(f32 *)D_003B71B0);
            sp34 = (*(M2C_UNK32 *)D_003B71B4);
            sp38 = (*(f32 *)D_003B71B8);
            sp3C = (*(f32 *)D_003B71BC);
            sp40 = (*(f32 *)D_003B71C0);
            sp44 = (*(f32 *)D_003B71C4);
            M2C_FIELD(((void *)D_005EFDC0), M2C_UNK **, 0x28) = ((void *)D_00807BB0);
            sp48 = (*(f32 *)D_003B71C8);
            sp4C = (*(f32 *)D_003B71CC);
            M2C_FIELD(((void *)D_005EFDC0), M2C_UNK32 *, 0x20) = sp34;
            if (M2C_FIELD(((void *)D_005EFDC0), s32 *, 0x34) == 0) {
                M2C_FIELD(((void *)D_005EFDC0), M2C_UNK **, 0x24) = &func_0030C1D0;
            }
        }
        break;
    case 3:
        func_00841FC0();
        func_0080DE80(func_00853430(4, 0, 0x34));
        break;
    case 4:
        func_00841F80();
        func_00846B60();
        func_00853380();
        func_00857FA0();
        break;
    case 5:
        func_00841F60();
        func_00846B60();
        func_00853380();
        func_00857FA0();
        break;
    default:
        func_00846B60();
        func_00853380();
        func_00857FA0();
        break;
    }
    return 0;
}
