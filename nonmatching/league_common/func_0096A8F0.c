/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00230410();                                /* extern */
M2C_UNK func_009855E0(M2C_UNK, u8);                 /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591C09[];

void func_0096A8F0(void) {
    if (func_00230410() == 1) {
        if (((s32) (*(u16 *)D_00591BB0) >= 0xFE) && ((s32) (*(u16 *)D_00591BB0) < 0x10E)) {
            func_009855E0(0x127, M2C_FIELD(D_003E77B0, u8 *, 0x2C));
            (*(u16 *)D_00591BB0) = 0x127;
            return;
        }
        if (((s32) (*(u16 *)D_00591BB2) >= 0xFE) && ((s32) (*(u16 *)D_00591BB2) < 0x10E)) {
            func_009855E0(0x127, M2C_FIELD(D_003E77B0, u8 *, 0x2D));
            goto block_9;
        }
    } else if ((*(u8 *)D_00591C09) == 0xE) {
        func_009855E0(0x126, M2C_FIELD(D_003E77B0, u8 *, 0x2C));
        func_009855E0(0x127, M2C_FIELD(D_003E77B0, u8 *, 0x2D));
        (*(u16 *)D_00591BB0) = 0x126;
block_9:
        (*(u16 *)D_00591BB2) = 0x127;
    }
}
