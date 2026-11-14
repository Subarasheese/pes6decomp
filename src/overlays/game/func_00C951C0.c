/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_009B4650(void);
extern void func_00255F70(char *);
extern s32 func_009B45F0(void);
extern char D_00591DB5[];
extern char D_00591DB7[];
extern char func_00C95250[];
extern char func_00C952A0[];

s32 func_00C951C0(void) {
    if (((*(s8 *)D_00591DB5) == 1) && ((*(u8 *)D_00591DB7) == 0)) {
        func_00255F70(func_00C952A0);
        return 1;
    }
    if ((func_009B45F0() != 0) && ((func_009B4650() & 0xFF) == 4)) {
        func_00255F70(func_00C95250);
        return 1;
    }
    return 0;
}
