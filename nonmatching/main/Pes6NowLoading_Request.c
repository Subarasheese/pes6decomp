/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ED840(void *, s8);
extern void func_001ED880(void *, f32);
extern char Pes6NowLoading[];

void Pes6NowLoading_Request(s32 arg0) {
    u8 var_v1;

    if (((void *)Pes6NowLoading) != NULL) {
        if (arg0 == 0) {
            var_v1 = (M2C_FIELD(((void *)Pes6NowLoading), u8 *, 0x88) & ~2) | 2;
        } else {
            var_v1 = (M2C_FIELD(((void *)Pes6NowLoading), u8 *, 0x88) & ~1) | 1;
        }
        M2C_FIELD(((void *)Pes6NowLoading), u8 *, 0x88) = var_v1;
        M2C_FIELD(((void *)Pes6NowLoading), s32 *, 0x6C) = 0x20;
        if (arg0 == 0) {
            func_001ED880(M2C_FIELD(((void *)Pes6NowLoading), void **, 0x64), 1.0f);
            func_001ED840(M2C_FIELD(((void *)Pes6NowLoading), void **, 0x64), 1);
        }
    }
}
