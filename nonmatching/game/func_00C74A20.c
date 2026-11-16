/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 func_009B4670(void);
extern s32 func_002E8C60(s32);
extern u8 func_009B4040(void);
extern void func_009B4660(void);
extern void func_002E8CB0(s32, s32);
extern u8 D_003EA824;

void func_00C74A20(void) {
    u8 st;
    if (func_009B4670() == 2) {
        st = D_003EA824;
        if (st == 2) {
            func_009B4660();
            D_003EA824 = 0;
        } else if (st == 1) {
            if (func_002E8C60(st) != 0) {
                D_003EA824 = st + 1;
            }
        } else if (st == 0) {
            func_002E8CB0(0x16, func_009B4040());
            D_003EA824 = D_003EA824 + 1;
        } else {
            D_003EA824 = 0;
        }
    }
}
