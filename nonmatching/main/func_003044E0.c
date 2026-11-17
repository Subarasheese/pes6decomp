/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00304160(void);
extern void func_003042A0(void);
extern void func_00304210(void);
extern void func_00304150(void);

s32 func_003044E0(s32 *arg0) {
    s32 i;

    if (arg0[0] < 8) {
        for (i = 0; i < 8; i++) {
            if (arg0[2 + i] == 0) {
                *(void **)&arg0[2 + i] = (void *)func_00304160;
                arg0[0] += 1;
                break;
            }
        }
    }
    if (arg0[0] < 8) {
        for (i = 0; i < 8; i++) {
            if (arg0[2 + i] == 0) {
                *(void **)&arg0[2 + i] = (void *)func_003042A0;
                arg0[0] += 1;
                break;
            }
        }
    }
    if (arg0[0] < 8) {
        for (i = 0; i < 8; i++) {
            if (arg0[2 + i] == 0) {
                *(void **)&arg0[2 + i] = (void *)func_00304210;
                arg0[0] += 1;
                break;
            }
        }
    }
    if (arg0[0] < 8) {
        for (i = 0; i < 8; i++) {
            if (arg0[2 + i] == 0) {
                *(void **)&arg0[2 + i] = (void *)func_00304150;
                arg0[0] += 1;
                break;
            }
        }
    }
    return 1;
}
