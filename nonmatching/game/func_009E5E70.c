/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5F50(s32, s32);
extern s32 func_00208250(s32);
extern s32 func_001A5BB0(s32);
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
M2C_UNK func_00287C00();                            /* extern */
s32 func_0093FD30(u8);                              /* extern */
M2C_UNK func_0093FDF0();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00B705B0(u8);                              /* extern */
extern char D_00CBBDF0[];

void func_009E5E70(void) {
    switch ((*(u8 *)D_00CBBDF0)) {                           /* irregular */
    case 1:
        if (func_001A5BB0(5) != 0) {
            (*(u8 *)D_00CBBDF0) = 2;
            return;
        }
        return;
    case 0:
        func_001A5F50(5, func_00208250(0xAF));
        func_001A5E00(5);
        (*(u8 *)D_00CBBDF0) = 1;
        break;
    case 2:
        if (func_00B705B0((*(u8 *)D_00CBBDF0)) == 0) {
            return;
        }
        func_00287C00();
        func_0093FDF0();
        (*(u8 *)D_00CBBDF0) = 3;
        break;
    case 3:
        if (func_0093FD30((*(u8 *)D_00CBBDF0)) != 1) {
            func_009E1D30(2, 2);
        } else {
            return;
        }
        break;
    }
}
