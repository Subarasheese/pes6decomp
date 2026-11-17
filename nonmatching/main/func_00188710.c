/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00520080[];

void func_00188710(s32 arg0, u8 *arg1) {
    u8 a, b, c;
    if (arg0 == 1) {
        a = (*(u8 **)D_00520080)[0x28];
        b = (*(u8 **)D_00520080)[0x29];
        c = (*(u8 **)D_00520080)[0x2A];
    } else {
        a = (*(u8 **)D_00520080)[0x2B];
        b = (*(u8 **)D_00520080)[0x2C];
        c = (*(u8 **)D_00520080)[0x2D];
    }
    arg1[0] = a;
    arg1[1] = b;
    arg1[2] = c;
    arg1[0] = arg1[0] >> 1;
    arg1[1] = arg1[1] >> 1;
    arg1[2] = arg1[2] >> 1;
}
