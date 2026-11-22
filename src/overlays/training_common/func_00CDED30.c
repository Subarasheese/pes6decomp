/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_001B8DC0(void);
extern u32 func_002631D0(void);
extern s32 func_002646D0(void *screen), func_002646E0(void *screen);
extern void func_002648E0(void *screen), func_002648F0(void *screen);
extern s32 func_0026DA40(s32);
extern void SD_call(u32);
extern void func_00CEC500(void), func_00CEC510(void);
extern u32 func_00CECE10(void);
extern s32 func_00CED260(void);
s32 func_00CDED30(void *screen) {
    s32 phase;
    s32 finished;
    u32 mode;
    u32 nextMode;

    finished = 0;
    func_002648F0(screen);
    phase = func_002646D0(screen) & 0xFF;
    switch (phase) {
    case 0:
        if (func_001B8DC0() != 0) {
            mode = func_002631D0();
            switch (mode) {
            case 5:
            case 6:
                func_00CEC500();
                break;
            case 2:
            case 3:
            case 8:
                func_00CEC510();
                break;
            case 4:
            case 7:
                SD_call(0x82000005);
                func_00CEC510();
                break;
            }
            func_002646E0(screen);
        }
        break;
    case 1:
        nextMode = func_002631D0();
        switch (nextMode) {
        case 5:
        case 6:
            func_002646E0(screen);
            break;
        case 2:
        case 3:
        case 4:
        case 7:
        case 8:
            if (func_0026DA40(1) == 0) {
                func_002646E0(screen);
            }
            break;
        }
        break;
    case 2:
        if (func_00CED260() != 0) {
            func_00CECE10();
            finished = 1;
            func_002646E0(screen);
        }
        break;
    }
    func_002648E0(screen);
    return finished;
}
