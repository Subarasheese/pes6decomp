/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 Pes6TeamAssets_Poll(void);
extern void Pes6TeamAssets_Reset(void);
extern void func_0020C240(void);
extern s32 func_0020C2C0(void);
extern void func_0020C370(void);
extern s32 Pes6MatchSelect_UpdateLoader(void), func_0020D6D0(void);
extern void Pes6Pausesetup_Start(void), func_0026C310(void), Pes6Resultsetup_Start(void);
extern s32 func_00308540(void), Pes6SaveData_GetUnavailableFlag(void);
extern u8 func_009E1C90(s32);
extern void func_009E1CB0(s32), func_009E1D30(s32, s32);
extern s32 func_00C86770(void);
extern void func_00C86850(void);
s32 func_001FBDD0(void) {
    s32 ready = 0;
    switch ((u8)func_009E1C90(2)) {
    default:
        func_009E1D30(2, 1); /* fall through */
    case 0:
        if (Pes6SaveData_GetUnavailableFlag()) {
            if (func_00308540())
                func_009E1CB0(2);
            break;
        }
        func_009E1CB0(2); /* fall through */
    case 1:
        func_0020D6D0();
        func_009E1CB0(2);
        break;
    case 2:
        if (Pes6MatchSelect_UpdateLoader() != 1)
            break;
        func_009E1CB0(2); /* fall through */
    case 3:
        func_0020C370();
        func_009E1CB0(2);
        break;
    case 4:
        if (func_0020C2C0() != 1)
            break;
        func_009E1CB0(2); /* fall through */
    case 5:
        Pes6TeamAssets_Reset();
        func_009E1CB0(2);
        break;
    case 6:
        if (Pes6TeamAssets_Poll() != 1)
            break;
        func_009E1CB0(2); /* fall through */
    case 7:
        func_0020C240();
        func_009E1CB0(2); /* fall through */
    case 8:
        func_0026C310();
        func_00C86850();
        func_009E1CB0(2); /* fall through */
    case 9:
        if (func_00C86770() != 1)
            break;
        func_009E1CB0(2); /* fall through */
    case 10:
        Pes6Pausesetup_Start();
        Pes6Resultsetup_Start();
        func_009E1CB0(2);
        break;
    case 11:
        ready = 1;
        break;
    }
    return ready;
}
