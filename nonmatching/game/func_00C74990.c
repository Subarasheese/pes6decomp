/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4670(void);
extern u8 func_009B4040(void);
extern int func_002640B0(void);
extern void func_009B4660(u32);
extern void func_00262BC0(int, int);
extern s32 func_002E8CB0(s32, s8);
extern u8 D_003EA828;

void func_00C74990(void) {
    if ((func_009B4670() & 0xFF) == 2) {
        switch (D_003EA828) {                       /* irregular */
        case 1:
            func_009B4660(3U);
        default:
            D_003EA828 = 0;
            break;
        case 0:
            func_002E8CB0(0x16, func_009B4040() & 0xFF);
            func_00262BC0(func_002640B0(), 3);
            D_003EA828 += 1;
            return;
        }
    }
}
