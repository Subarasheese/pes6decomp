/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_001540C0(void);
extern void func_001E7370(s32, s32 *);
extern void func_001E7610(void);

void func_001E75A0(s32 a0, s32 *a1) {
    s32 v[3];
    if (a1 != NULL) {
        v[0] = a1[0];
        v[1] = func_001540C0();
        v[2] = a1[1];
        func_001E7370(a0, v);
    } else {
        func_001E7610();
    }
}
