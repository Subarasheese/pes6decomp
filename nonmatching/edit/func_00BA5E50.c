/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001E6C50(void *);
extern u32 D_003EAF68;
extern s32 D_003EAF6C;

void func_00BA5E50(u32 arg0) {
    void *temp_v0;

    if (arg0 >= 0x7346U) {
        if (arg0 >= 0x7367U) {
            return;
        }
        if (((u32) D_003EAF68 >> (arg0 - 0x7346)) & 1) {
            D_003EAF6C -= 1;
            temp_v0 = func_001E6E10((s32) arg0);
            if (temp_v0 != NULL) {
                func_001E6C50(temp_v0);
            }
            D_003EAF68 &= ~(1 << (arg0 - 0x7346));
        }
    }
}
