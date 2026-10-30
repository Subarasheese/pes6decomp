/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_00153FA0(void *);
s32 func_008F6540(s32);                             /* extern */
s32 func_008FA910(void *, void *);                  /* extern */
M2C_UNK func_008FB320(M2C_UNK);                     /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
extern char D_003AE979[];
extern void *D_003AE9D0;

s32 func_008F76D0(void) {
    s32 temp_a0;

    if (func_008FA910(D_003AE9D0 + 0x18, D_003AE9D0 + 0x50) == 0) {
        return 0;
    }
    temp_a0 = M2C_FIELD(D_003AE9D0, s32 *, 0x10);
    if (temp_a0 == M2C_FIELD(D_003AE9D0, s32 *, 0x14)) {
        func_00C75330(D_003AE9D0 + 0x18);
        func_00153FA0(D_003AE9D0);
        D_003AE9D0 = NULL;
        goto block_10;
    }
    if (func_008F6540(temp_a0) == 0) {
        return 0;
    }
    func_00C75330(D_003AE9D0 + 0x18);
    func_00153FA0(D_003AE9D0);
    D_003AE9D0 = NULL;
    (*(s8 *)D_003AE979) = 1;
    func_008FB320(-1);
block_10:
    func_001BC2B0();
    return 1;
}
