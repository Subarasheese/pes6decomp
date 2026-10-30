/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A00(void *);
extern void func_002F4D80(s32);
s32 func_00CF52A0(void **arg0) {
    void *temp_s0;

    temp_s0 = *arg0;
    func_002F3A00(temp_s0);
    func_002F4D80((s32) temp_s0);
    return 1;
}
