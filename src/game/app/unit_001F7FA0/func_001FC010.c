/* compiler: mwcc-3.0.1b210 */
#pragma opt_common_subs off
#include "types.h"
extern s32 Pes6MatchFlow_GetState(s32), func_001FBAB0(void), func_001FBBF0(void),
    func_001FB8E0(void), func_001FBDD0(void), func_001FB9A0(s32), func_002D32A0(void);
extern void Pes6MatchFlow_SetState(s32, s32), func_009E1CB0(s32), func_002D3060(void),
    func_002D36B0(void);
s32 func_001FC010(void) {
    s32 done = 0;
    switch ((u8)Pes6MatchFlow_GetState(1)) {
    default:
        Pes6MatchFlow_SetState(1, 0); /* fall through */
    case 0:
        func_002D3060();
        func_002D36B0();
        func_009E1CB0(1); /* fall through */
    case 1:
        if (!func_001FBAB0())
            break;
        func_009E1CB0(1); /* fall through */
    case 2:
        if (!func_001FBBF0())
            break;
        func_009E1CB0(1); /* fall through */
    case 3:
        if (!func_001FB8E0())
            break;
        func_009E1CB0(1); /* fall through */
    case 4:
        if (!func_001FBDD0())
            break;
        func_009E1CB0(1); /* fall through */
    case 5:
        if (!func_001FB9A0(14))
            break;
        func_009E1CB0(1); /* fall through */
    case 6:
        if (func_002D32A0())
            break;
        func_009E1CB0(1); /* fall through */
    case 7:
        func_009E1CB0(1); /* fall through */
    case 8:
        done = 1;
        break;
    }
    return done;
}
