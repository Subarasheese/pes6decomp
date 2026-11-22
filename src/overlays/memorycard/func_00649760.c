/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern s32 func_00181360(void);
extern void func_00181370(s32, s32, s32);
extern s32 func_001CDA40(u8);
extern u32 func_001CDA50(s32);
extern u8 *Pes6OptionData_GetBlock2F5(void);
extern s32 func_0024F3E0(void), func_0024F440(void);
extern void func_00251500(void);
extern s32 func_0026DA40(s32);
extern void func_0026DA50(u32);
extern s32 SD_stop(u32);
extern void SD_call(u32), func_002D33D0(s32, s32);
extern u8 D_003EA1C0, D_003EA1F0;
extern s32 D_003EA218, Pes6SceneStack[];
s32 func_00649760(void) {
    s32 finished;
    s32 ready;
    finished = 0;
    switch (D_003EA1C0) {
    default:
        D_003EA1C0 = 1;
        /* fallthrough */
    case 1:
        func_002D33D0(3, 0x32);
        if (func_0026DA40(1) == 0) {
            D_003EA1F0 = 0;
            D_003EA1C0 = 2;
        } else {
            D_003EA1F0 = 1;
            if (Pes6SceneStack[0] == 6) {
                SD_stop(0x9A088406);
            } else {
                SD_stop(0x9A080400);
            }
            D_003EA1C0 = 2;
        }
        break;
    case 2:
        if ((func_0026DA40(1) != 1) && (func_0026DA40(3) != 1)) {
            func_00251500();
            func_0024F3E0();
            D_003EA1C0 = 3;
        }
        break;
    case 3:
        ready = 0;
        if (D_003EA218 != 1) {
            func_00181370(0, func_001CDA40(Pes6OptionData_GetBlock2F5()[5]), 0);
            D_003EA218 += 1;
        } else if (func_00181360() != 0) {
            D_003EA218 = 0;
            ready = 1;
        }
        if (ready != 0) {
            D_003EA1C0 = 4;
        }
        break;
    case 4:
        func_0024F440();
        D_003EA1C0 = 5;
        break;
    case 5:
        if (D_003EA1F0 == 0) {
            D_003EA1C0 = 6;
        } else {
            if (Pes6SceneStack[0] == 6) {
                SD_call(0x9A088406);
            } else {
                SD_call(0x9A080400);
            }
            D_003EA1C0 = 6;
        }
        break;
    case 6:
        func_0026DA50(func_001CDA50(0));
        /* fallthrough */
    case 7:
        D_003EA1C0 = 0;
        finished = 1;
        break;
    }
    return finished;
}
