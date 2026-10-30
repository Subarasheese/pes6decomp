/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_001C7F58(s8 *, s32);                   /* extern */
M2C_UNK func_0087C8D0();                            /* extern */
M2C_UNK func_0087C910(M2C_UNK);                     /* extern */
M2C_UNK func_00C74FA0(void *, s8 *);                /* extern */
M2C_UNK func_00C75010(void *, M2C_UNK);             /* extern */
extern void *D_003AE9D8;

s32 func_0087D2D0(void) {
    s8 sp30;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s8 *var_v1;

    M2C_FIELD(D_003AE9D8, s32 *, 0x8C) = 1;
    func_0087C8D0();
    func_0087C910(0);
    var_v1 = &sp30;
    var_v0 = 0x100;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s1 = 0;
    var_s0 = 0;
    do {
        func_00C75010(D_003AE9D8 + var_s0 + 0x1C, 0);
        var_s1 += 1;
        var_s0 += 8;
    } while (var_s1 < 0xA);
    func_001C7F58(&sp30, func_001F08B0(0x01FA0002));
    func_00C74FA0(D_003AE9D8 + 0x24, &sp30);
    func_00C75010(D_003AE9D8 + 0x24, 1);
    return 1;
}
