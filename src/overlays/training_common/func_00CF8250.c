/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern void func_00264790(void *, u8);
extern void func_002648E0(void *);
extern int func_002646D0(void *);
extern void func_002648F0(void *);
extern s32 func_002646E0(void *);
extern void func_00271E40(void);
extern s32 func_008F7C40(void *, s32, s32);
extern void func_009B6810(void);
s32 func_00CE2C80(void *, void *, s32);
extern s32 D_005E3824[];
extern s32 D_005E382C[];

void func_00CF8250(void *screen) {
    s32 phase;
    s32 completed;

    completed = 0;
    if (D_005E382C[0] == 0) {
        func_00271E40();
        func_009B6810();
    }
    func_002648F0(screen);
    phase = func_002646D0(screen) & 0xFF;
    switch (phase) {
    case 0:
        if (func_008F7C40(screen, 1, D_005E3824[0]) != 0) {
            func_002646E0(screen);
        }
        break;
    case 1:
        if (func_00CE2C80((u8 *)screen + 0xFC, screen, D_005E382C[0]) != 0) {
            func_002646E0(screen);
            completed = 1;
        }
        break;
    }
    func_002648E0(screen);
    if (completed != 0) {
        func_00264790((void *)screen, 5U);
    }
}
