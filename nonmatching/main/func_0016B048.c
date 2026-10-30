/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016A550(s32);
extern char D_003C94C0[];
extern char D_003D0004[];

s32 func_0016B048(void **arg0) {
    s32 (*temp_v0)(void *);
    s32 var_s0;

    if (arg0 == NULL) {
        func_0016A550((s32) ((void *)D_003C94C0));
        return 0;
    }
    temp_v0 = M2C_FIELD(*arg0, s32 (**)(void *), 0x1C);
    if (temp_v0 == NULL) {
        var_s0 = 0;
        func_0016A550((s32) (((void *)D_003D0004) - 0x6B20));
    } else {
        var_s0 = temp_v0(*arg0);
    }
    return var_s0;
}
