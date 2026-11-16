/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, int);
extern s32 func_00BD95C0(void);

s32 func_00304930(void *arg0) {
    s32 *p;
    s32 i;

    if (func_00BD95C0() != 0) {
        return 0;
    }
    p = *(s32 **)((u8 *)arg0 + 0x18);
    p[0x12] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[6] = 0;
    p[7] = 0;
    p[8] = 0;
    p[9] = 0;
    p[0] = 0;
    for (i = 0; i < 8; i++) {
        if (p[2 + i] == 0) {
            p[2 + i] = 0x304650;
            p[0] = p[0] + 1;
            break;
        }
    }
    func_00305E60(arg0, 0x3052D0);
    return 1;
}
