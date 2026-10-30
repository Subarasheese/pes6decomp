/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
extern u8 func_00BF9E60(void);
M2C_UNK func_00278440();                            /* extern */
s32 func_008481D0();                                /* extern */
s32 func_0084D0E0();                                /* extern */
M2C_UNK func_00999150();                            /* extern */
M2C_UNK func_009A0B90();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00BEA440();                            /* extern */
M2C_UNK func_00BF0580(M2C_UNK);                     /* extern */
M2C_UNK func_00C32330();                            /* extern */
extern char D_00591DB4[];
extern char D_00591DD1[];
extern char D_005926FF[];
extern char D_00CBCC6C[];

void func_00BEA2E0(void) {
    s32 temp_v1;

    if (func_002DCA30() == 0) {
        goto block_1;
    }
    if (func_0084D0E0() == 0) {
        return;
    }
block_1:
    if ((*(u8 *)D_00591DD1) != 0) {
        func_009A0B90();
    }
    if (func_00BF9E60() != 0) {
        func_00278440();
    }
    temp_v1 = func_009E1C90(3) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_00152130(0, 0x10) != 0) {
            (*(s8 *)D_00591DB4) = 1;
            func_009E1CB0(3);
        }
        break;
    case 1:
        if ((*(u8 *)D_00591DD1) == 0) {
            func_00C32330();
            func_009E1CB0(3);
        }
        break;
    }
    if ((func_002DCA30() == 0) || (func_008481D0() == 0)) {
        func_00999150();
        func_00AD0A20();
        Pes6Ball_Update();
        func_00BEA440();
        if ((*(u8 *)D_005926FF) == 4) {
            func_00BF0580(4);
        }
        (*(s32 *)D_00CBCC6C) += 1;
    }
}
