/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
M2C_UNK func_0087D520(void *, void *);              /* extern */
s32 func_008F9BB0();                                /* extern */
M2C_UNK func_008F9BF0();                            /* extern */
M2C_UNK func_00C75070(void *, M2C_UNK);             /* extern */
M2C_UNK func_00C75330(void *);                      /* extern */
M2C_UNK func_00C86A50(M2C_UNK);                     /* extern */
extern void *D_003AE9D8;
extern void *D_003EA380;

s32 func_0087CE10(void) {
    s32 temp_v1;

    func_0081D240(0);
    func_0081D200(0);
    if ((D_003AE9D8 == NULL) && (D_003EA380 == NULL)) {
        if (func_008F9BB0() == 0) {
            func_008F9BF0();
            return 1;
        }
        goto block_10;
    }
    temp_v1 = M2C_FIELD(D_003EA380, s32 *, 4);
    if (temp_v1 == 0) {
        if ((temp_v1 != 1) || (M2C_FIELD(D_003EA380, s32 *, 0) == 3)) {
            M2C_FIELD(D_003EA380, s32 *, 4) = 1;
            func_00C75070(D_003AE9D8 + 4, 0);
        }
        func_0081D240(0);
        M2C_FIELD(D_003EA380, s32 *, 0xC) = 3;
        M2C_FIELD(D_003EA380, s32 *, 0x10) = 0;
        return 0;
    }
    func_0087D520(D_003EA380 + 4, D_003EA380);
    func_00C86A50(0);
    func_00C75330(D_003AE9D8 + 4);
    func_00153FA0(D_003AE9D8);
    D_003AE9D8 = NULL;
    func_00153FA0(D_003EA380);
    D_003EA380 = NULL;
block_10:
    return 0;
}
