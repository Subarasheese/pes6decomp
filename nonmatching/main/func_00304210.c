/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009B45F0(void);
extern s32 func_00BDA430(void);
extern char D_00591DB4[];
extern char D_00591F12[];

s32 func_00304210(void *arg0) {
    if (*(u8 *)D_00591F12 != 0) {
        return 0;
    }
    if (func_009B45F0() != 0) {
        return 0;
    }
    if (*(s8 *)D_00591DB4 == 0) {
        return 0;
    }
    if (func_00BDA430() == 0) {
        return 0;
    }
    *(u32 *)((u8 *)arg0 + 0x58) = 0x303F90;
    return 1;
}
