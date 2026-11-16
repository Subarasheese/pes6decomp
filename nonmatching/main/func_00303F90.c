/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00303E80(void);
extern void func_00303E50(void);
extern void func_00303E10(void);
extern void func_00303D90(void);
extern void func_00303DF0(void);

s32 func_00303F90(s32 *arg0) {
    s32 i;

    if (*arg0 < 8) {
        i = 0;
        do {
            if (arg0[2 + i] == 0) {
                arg0[2 + i] = (s32) func_00303E80;
                *arg0 += 1;
                break;
            }
            i += 1;
        } while (i < 8);
    }
    if (*arg0 < 8) {
        i = 0;
        do {
            if (arg0[2 + i] == 0) {
                arg0[2 + i] = (s32) func_00303E50;
                *arg0 += 1;
                break;
            }
            i += 1;
        } while (i < 8);
    }
    if (*arg0 < 8) {
        i = 0;
        do {
            if (arg0[2 + i] == 0) {
                arg0[2 + i] = (s32) func_00303E10;
                *arg0 += 1;
                break;
            }
            i += 1;
        } while (i < 8);
    }
    if (*arg0 < 8) {
        i = 0;
        do {
            if (arg0[2 + i] == 0) {
                arg0[2 + i] = (s32) func_00303D90;
                *arg0 += 1;
                break;
            }
            i += 1;
        } while (i < 8);
    }
    if (*arg0 < 8) {
        i = 0;
        do {
            if (arg0[2 + i] == 0) {
                arg0[2 + i] = (s32) func_00303DF0;
                *arg0 += 1;
                break;
            }
            i += 1;
        } while (i < 8);
    }
    return 1;
}
