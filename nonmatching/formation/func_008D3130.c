/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 D_003EA4F4;

void func_008D3130(void *arg0) {
    if ((arg0 != NULL) && (((s32) D_003EA4F4 % 16) == 0) && (M2C_FIELD(arg0, s32 *, 0x58) != 0)) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0x4C), ((D_003EA4F4 / 10) + ((u32) D_003EA4F4 >> 0x1F)) & 1);
    }
}
