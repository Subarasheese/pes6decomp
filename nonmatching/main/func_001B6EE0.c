/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001DEFA0(void *, void *);
extern s32 func_001DEED0(void *);
extern void func_001DF250(void *, f32 *);

s32 func_001B6EE0(void *arg0) {
    f32 sp38[2];
    s32 r;
    s32 res;

    sp38[0] = 0;
    sp38[1] = 0;
    res = 0;
    r = func_001DEED0(arg0);
    if (r == 2 || r == 1) {
        func_001DEFA0(arg0, sp38);
        if (sp38[0] < 1.0f) {
            sp38[0] = 1.0f;
            func_001DF250(arg0, sp38);
        }
        res = 1;
    }
    return res;
}
