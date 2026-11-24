/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern u8 D_00CBAA0E[];
extern s32 func_0093FD30(void);
extern s32 func_001A5F20(s32);
extern s32 func_00208210(s32);
extern void func_00BCE2A0(void);
extern void func_009B6920(void);
extern void func_00BD1220(void);
extern void func_0099F490(void);
extern void func_009A7240(void);
extern void func_00BD17B0(void);

void func_009B6810(void) {
    switch (D_00CBAA0E[0]) {
    case 0:
        break;
    case 1:
        func_00BCE2A0();
        break;
    case 2: {
        if (!func_0093FD30()) {
            s32 marker = func_009B5CA0();
            s32 animation = func_00208210(func_001A5F20(4));
            func_009B5C10();
            if (marker == REPLAY_NO_MARKER || marker == animation)
                D_00CBAA0E[0] = 4;
            else
                D_00CBAA0E[0] = 3;
        }
        break;
    }
    case 3:
        func_009B6920();
        break;
    case 4:
        func_00BD1220();
        func_0099F490();
        func_009A7240();
        break;
    case 6:
        func_00BD17B0();
        break;
    }
}
