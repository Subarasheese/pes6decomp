/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
M2C_UNK func_0084CC80(u16);                         /* extern */
M2C_UNK func_0084F7A0();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
extern char D_008B1470[];
extern char D_008B14E6[];
extern char D_008B14E7[];
extern char D_00CBBE38[];
extern char D_00CBBE3B[];
extern char D_00CBBE3D[];

void func_00BF06F0(void) {
    if (func_002DCA30() != 0) {
        func_0084F7A0();
    }
    if (func_00152130(1, 0x10) != 0) {
        if ((*(u8 *)D_00CBBE38) != 0) {
            if ((*(u8 *)D_00CBBE3B) == 0) {
                (*(u8 *)D_00CBBE3B) = 1;
            } else {
                (*(u8 *)D_00CBBE38) = 0;
                if ((*(u8 *)D_00CBBE38) == 0) {
                    (*(s8 *)D_00CBBE3D) = 1;
                }
            }
        } else {
            (*(u8 *)D_00CBBE38) = 2;
            if ((*(u8 *)D_00CBBE38) == 0) {
                (*(s8 *)D_00CBBE3D) = 1;
            }
            (*(u8 *)D_00CBBE3B) = 0;
        }
        if (func_002DCA30() != 0) {
            (*(s8 *)D_008B14E7) = 1;
            func_0084CC80((*(u16 *)D_008B1470));
            if ((*(s8 *)D_008B14E6) != 0) {
                (*(s8 *)D_008B14E6) -= 1;
            }
        }
        func_009E1D30(1, 0xE);
    }
}
