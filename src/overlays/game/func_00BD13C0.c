/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_replay.h"

extern s32 func_00152130(s32, s32);
extern u8 func_009B4670(void);
extern u8 D_00591BE4[];
extern u8 D_003EA750;
extern void func_009B4660(u32);
extern void func_009B45E0(s32);
extern void Pes6World_SetActive(s32);
extern void func_001AFD20(void);
extern s32 Pes6File_AllChannelsIdle(void);

void func_00BD13C0(void) {
    switch ((u8)func_009B4670()) {
    case 0:
        break;
    case 1:
        if (!func_00152130(1, 16))
            break;
        Pes6World_SetActive(0);
        func_009B4660(2);
        break;
    case 2:
        func_009B45E0(0);
        D_003EA750 = (D_00591BE4[0] * 8) / 2;
        break;
    case 3:
        func_009B4660(4);
        break;
    case 4:
        if (!Pes6File_AllChannelsIdle())
            return;
        func_001AFD20();
        func_009B5D20();
        func_009B4660(5);
        break;
    case 5:
        Pes6World_SetActive(1);
        func_009B4660(6);
        /* Fall through to poll the transition in the same frame. */
    case 6:
        if (!func_00152130(0, 16))
            return;
        func_009B4660(0);
        break;
    }
}
