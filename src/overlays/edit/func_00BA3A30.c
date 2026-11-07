/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00B9FAB0(s32);
s32 func_00B9FBB0();
M2C_UNK func_00B9FBC0(s32);
extern s32 D_003EAF70;

s32 func_00BA3A30(s32 arg0, s32 arg1, s32 arg2) {
    s32 ret;
    s32 i;
    s32 p;
    s32 q;
    s32 j;

    ret = 0;
    if (arg2 == 1) {
        i = 0;
        if (arg1 > 0) {
            p = arg0;
            do {
                func_00B9FAB0(p);
                i += 1;
                p += 0xC;
            } while (i < arg1);
        }
        ret = 1;
    } else if (arg2 == 0) {
        switch (D_003EAF70) {
        case 0:
            j = 0;
            if (arg1 > 0) {
                q = arg0;
                do {
                    func_00B9FBC0(q);
                    j += 1;
                    q += 0xC;
                } while (j < arg1);
            }
            D_003EAF70 += 1;
        case 1:
            if (func_00B9FBB0() != 0) {
                D_003EAF70 = 0;
                ret = 1;
            }
            break;
        }
    }
    return ret;
}
