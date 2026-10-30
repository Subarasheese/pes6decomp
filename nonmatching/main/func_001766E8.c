/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00176460(void *, int);
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_003CC160[];
extern char D_003CC170[];
extern char D_003CC190[];
extern char D_003CC1A0[];

void func_001766E8(void *arg0) {
    if (arg0 == NULL) {
        func_00176460(((void *)D_003CC160), (s32) ((void *)D_003CC170));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_00176460(((void *)D_003CC190), (s32) ((void *)D_003CC1A0));
        return;
    }
    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
