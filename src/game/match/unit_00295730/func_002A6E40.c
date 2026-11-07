/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *D_005E2464[];
extern s32 D_005E2460[];
extern char D_005E2330[];
void func_001A4740(void *, s32);

void func_002A6E40(u8 i) {
    s32 v;

    if (D_005E2464[0] == NULL) {
        v = 0;
    } else {
        v = D_005E2464[0][i];
    }
    func_001A4740(D_005E2330, v);
    D_005E2460[0] = 0;
}
