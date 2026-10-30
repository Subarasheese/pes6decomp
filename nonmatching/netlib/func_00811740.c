/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA50(void);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00811320(s16 *, u32);                  /* extern */
M2C_UNK func_00844D40(s64, M2C_UNK, s16 *, M2C_UNK); /* extern */
s16 *func_008472D0();                               /* extern */

s32 func_00811740(s16 arg0, void *arg1) {
    s16 sp30;
    s16 sp32;
    s32 sp34;
    s16 sp38;
    s16 sp44;
    u32 sp128;
    s32 sp12C;
    s16 var_v0_2;
    s64 var_v0;
    s64 var_v0_3;
    u16 temp_v0;
    u32 temp_lo;

    func_001C48E8(&sp30, 0, 0xEC);
    sp30 = 0x1C;
    sp32 = *func_008472D0();
    func_00110E58(func_001105C8(), &sp12C, &sp128);
    temp_lo = sp128 / 1000U;
    sp34 = temp_lo + (sp12C * 0x3E8);
    switch (arg0) {                                 /* irregular */
    case 2:
        sp38 = arg0;
        func_00811320(&sp30, temp_lo);
        if (func_002DCA50() == 0) {
            var_v0 = 9;
        } else {
            var_v0 = -1;
        }
        func_00844D40((s64) (var_v0 << 0x30) >> 0x30, 1, &sp30, 0xEC);
    case 3:
block_24:
        return 0;
    default:
        var_v0_2 = 1;
        if (arg0 == 1) {
            sp38 = arg0;
            if (arg1 != NULL) {
                temp_v0 = M2C_FIELD(arg1, u16 *, 0x14);
                if (temp_v0 != 0) {
                    var_v0_2 = temp_v0 - 1;
                    goto block_13;
                }
            } else {
block_13:
                sp44 = var_v0_2;
                if (func_002DCA50() == 0) {
                    var_v0_3 = 9;
                } else {
                    var_v0_3 = -1;
                }
                func_00844D40((s64) (var_v0_3 << 0x30) >> 0x30, 0, &sp30, 0xEC);
            }
            goto block_24;
        }
        return -1;
    }
}
