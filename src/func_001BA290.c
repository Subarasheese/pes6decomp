/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_005247A0[];
extern s32 D_005247C4[];
extern s32 D_00398468[];
void func_002F5900(s32);
void func_0026E840(s32);
void func_001BC350(void);

s32 func_001BA290(void) {
    func_002F5900(D_005247A0[0]);
    func_0026E840(D_00398468[D_005247C4[0]]);
    func_001BC350();
    return 0;
}
