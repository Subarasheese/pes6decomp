/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4670(void);
extern s32 func_002E8C60(void);
extern u8 func_009B4040(void);
extern void func_009B4660(u32);
extern s32 func_002E8CB0(s32, s8);
extern u8 D_003EA824;

void func_00C74A20(void) {
    if ((func_009B4670() & 0xFF) == 2) {
        switch (D_003EA824) {                       /* irregular */
        case 2:
            func_009B4660(3U);
        default:
            D_003EA824 = 0;
            break;
        case 0:
            func_002E8CB0(0x16, func_009B4040() & 0xFF);
            D_003EA824 += 1;
            return;
        case 1:
            if (func_002E8C60() != 0) {
                D_003EA824 += 1;
                return;
            }
            break;
        }
    }
}
