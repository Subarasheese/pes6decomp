/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_002645D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_00271E40();                            /* extern */
s32 func_009B45A0();                                /* extern */
s32 func_009B45F0();                                /* extern */
s32 func_009B4650(s32);                             /* extern */
M2C_UNK func_009B4660(M2C_UNK);                     /* extern */
M2C_UNK func_009B6810();                            /* extern */
M2C_UNK func_00B26320(M2C_UNK);                     /* extern */
M2C_UNK func_00B26490(M2C_UNK);                     /* extern */
M2C_UNK func_00B26650(M2C_UNK);                     /* extern */
M2C_UNK func_00C74810();                            /* extern */
extern char D_00591DB4[];
extern char D_00591DB5[];
extern char D_00591DD5[];
extern char D_005E3A94[];

void func_00804460(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    func_009B4660(0);
    if ((*(u8 *)D_00591DD5) == 0) {
        func_00271E40();
        func_009B6810();
        if ((*(s8 *)D_00591DB5) == 0) {
            func_00204D90();
        }
        func_00C74810();
    } else {
        (*(u8 *)D_00591DD5) = 0;
        func_00264790(arg0, 7);
    }
    if (((*(s32 *)D_005E3A94) != 0) && (func_009B45F0() != 0)) {
        if (((*(s32 *)D_005E3A94) != 0) && (func_009B45F0() != 0)) {
            temp_a0 = func_009B45A0() & 0xFF;
            if ((temp_a0 == 6) && ((func_009B4650(temp_a0) & 0xFF) == 7)) {
                (*(s8 *)D_00591DB4) = 0;
                (*(s32 *)D_005E3A94) = 0;
                M2C_FIELD(arg0, s32 *, 0x4E8) = 1;
                func_00B26490(0);
                func_00B26650(0);
                func_00B26320(0);
                func_00264790(arg0, 7);
            }
        }
    } else {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_a0_2) {                        /* irregular */
        case 1:
            (*(s8 *)D_00591DB4) = 0;
            func_00264790(arg0, 0x17);
            func_002645D0(arg0, 5, 1);
            M2C_FIELD(arg0, s32 *, 0xAC) = 0;
            return;
        case 3:
        case 2:
            (*(s8 *)D_00591DB4) = 0;
            func_00264790(arg0, 0x17);
            func_002645D0(arg0, 0xF, 1);
            /* fallthrough */
        case 0:
            return;
        }
    }
}
