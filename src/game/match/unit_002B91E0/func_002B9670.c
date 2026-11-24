/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 D_005E2F69[], D_005E2F64[], D_005E2F6B[];
typedef void (*MatchCueUpdate)(void);
extern MatchCueUpdate D_005E2F60[];
extern void func_002B9620(void), func_002A96D0(void), func_002A9470(u8), func_002A7D00(s32, u8),
    func_002A9570(s32);
void func_002B9670(void) {
    func_002A96D0();
    func_002A9470(D_005E2F69[0]);
    func_002A7D00(10, D_005E2F64[0]);
    if (D_005E2F6B[0] == 1)
        func_002A9570(2);
    else
        func_002A9570(0);
    D_005E2F60[0] = func_002B9620;
}
