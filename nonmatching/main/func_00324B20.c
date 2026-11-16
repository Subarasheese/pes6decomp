/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00226F80(void);
extern char D_00591C09[];

s32 func_00324B20(s32 *arg0, s32 arg1) {
    u8 type;
    s32 r;

    type = *(u8 *)D_00591C09;
    if (type == 14) {
        *arg0 = 0;
        return 1;
    }
    if (type == 2) {
        if (arg1 == 0x3A) {
            *arg0 = 5;
            return 1;
        }
        if (arg1 == 8 || arg1 == 7 || arg1 == 6 || arg1 == 5) {
            r = func_00226F80();
            if (r == 2) {
                *arg0 = 5;
                return 0;
            }
            if (r == 1) {
                *arg0 = 3;
                return 1;
            }
            if (r == 0) {
                *arg0 = 0;
            }
            return 1;
        }
        *arg0 = 0;
        return 1;
    }
    if (type == 1) {
        if (arg1 == 0xE || arg1 == 0xC || arg1 == 0xB || arg1 == 0xD) {
            r = func_00226F80();
            if (r == 2) {
                *arg0 = 5;
                return 0;
            }
            if (r == 1) {
                *arg0 = 3;
                return 1;
            }
            if (r == 0) {
                *arg0 = 0;
            }
            return 1;
        }
        *arg0 = 3;
        return 1;
    }
    if (type == 4) {
        *arg0 = 3;
        return 1;
    }
    *arg0 = 5;
    return 0;
}
