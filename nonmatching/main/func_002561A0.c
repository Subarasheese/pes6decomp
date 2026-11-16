/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void (*D_0058CD84[])(s32);

void func_002561A0(s32 arg0) {
    void (*fn)(s32);
    s32 off = arg0 * 4;

    fn = *(void (**)(s32))((u8 *)D_0058CD84 + off);
    if (fn != NULL) {
        fn(off);
    }
}
