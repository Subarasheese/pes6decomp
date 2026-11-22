/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_00B79040(s32 enabled);
extern u8 D_005926FF[], D_00CBCC62[], D_00CBCC61[];
extern void Pes6MatchFlow_SetState(s32 level, s8 state);
extern void Pes6Match_SetUpWorld(void);
extern void func_009F3EC0(void);
extern void func_009F0D30(void);
extern void func_009EF5F0(void);
extern void func_009ED080(s32 initialized);
extern void func_00B942B0(void);
void Pes6MatchFlow_SetUpForMode(void) {
    func_00B79040(1);
    switch (D_005926FF[0]) {
    case 1:
        func_009F3EC0();
        break;
    case 3:
        func_009EF5F0();
        break;
    case 2:
        func_009F0D30();
        break;
    case 0:
        Pes6Match_SetUpWorld();
        break;
    case 4:
        func_009ED080(D_00CBCC62[0]);
        break;
    case 5:
        func_00B942B0();
        break;
    }
    switch (D_005926FF[0]) {
    case 0:
        if (!D_00CBCC62[0]) {
            Pes6MatchFlow_SetState(2, 15);
            break;
        }
        /* Fall through when the match has already been initialized. */
    default:
        Pes6MatchFlow_SetState(2, 16);
        break;
    }
    D_00CBCC62[0] = 1;
    D_00CBCC61[0] = 0;
}
