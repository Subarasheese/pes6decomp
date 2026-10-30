/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
extern void func_002D4970(s32);
s32 func_00230930();                                /* extern */
s32 func_00230EF0();                                /* extern */
s32 func_00231130(u8);                              /* extern */
extern s8 D_003E9E8C;
extern char D_00510FD0[];
extern char D_00591F24[];
extern M2C_UNK func_002FD210;
extern M2C_UNK func_002FDC60;

s32 func_002FDA10(void *arg0) {
    switch ((*(u8 *)D_00591F24)) {                           /* irregular */
    case 8:
        func_00305E60(arg0, (s32) &func_002FDC60);
        break;
    case 7:
        if ((*(s32 *)D_00510FD0) != 9) {
            if ((func_00231130((*(u8 *)D_00591F24)) == 0) && (func_00230EF0() == 0)) {
                if (func_00230930() == 0) {
                    D_003E9E8C = 0;
                } else {
                    goto block_10;
                }
            } else {
block_10:
                D_003E9E8C = 1;
            }
            func_002D4970(4);
            func_00305E60(arg0, (s32) &func_002FD210);
        }
        break;
    }
    return 1;
}
