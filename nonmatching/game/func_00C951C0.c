/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4650(void);
extern void func_00255F70(int);
extern u8 func_009B45F0(void);
extern char D_00591DB5[];
extern char D_00591DB7[];
extern M2C_UNK func_00C95250;
extern M2C_UNK func_00C952A0;

s32 func_00C951C0(void) {
    if (((*(s8 *)D_00591DB5) == 1) && ((*(u8 *)D_00591DB7) == 0)) {
        func_00255F70((s32) &func_00C952A0);
        return 1;
    }
    if ((func_009B45F0() != 0) && ((func_009B4650() & 0xFF) == 4)) {
        func_00255F70((s32) &func_00C95250);
        return 1;
    }
    return 0;
}
