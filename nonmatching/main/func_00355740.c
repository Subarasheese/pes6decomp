/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00277490(void *);
extern s32 func_002774A0(void *);
extern s32 func_002774B0(void *);
void *func_00277C40(s32);

s32 func_00355740(s32 *arg0, s32 arg1) {
    s32 temp_v0;
    s32 r;
    void *s1;

    temp_v0 = arg1 & 0xFF;
    if (temp_v0 == 0 || temp_v0 >= 0x17) {
        *arg0 = 6;
        return 0;
    }
    s1 = func_00277C40(arg1);
    if (s1 == NULL) {
        *arg0 = 6;
        return 1;
    }
    r = func_002774A0(s1);
    if (r == 0) {
        r = func_002774B0(s1);
        if (r == 2) {
            *arg0 = 4;
        } else if (r == 1) {
            *arg0 = 5;
        } else if (r == 0) {
            if (func_00277490(s1) != 0) {
                *arg0 = 6;
            } else {
                *arg0 = 1;
            }
        }
    } else if (r == 2) {
        *arg0 = 3;
    } else if (r == 1) {
        *arg0 = 2;
    }
    return 1;
}
