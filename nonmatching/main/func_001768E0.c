/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
extern char D_003CC170[];
extern char D_003CC1A0[];
extern char D_003CC200[];
extern char D_003CC210[];

void func_001768E0(void *arg0) {
    if (arg0 == NULL) {
        func_00176460(((void *)D_003CC200), (s32) ((void *)D_003CC170));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
        return;
    }
    func_00176460(((void *)D_003CC210), (s32) ((void *)D_003CC1A0));
}
