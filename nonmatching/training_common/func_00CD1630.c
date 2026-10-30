/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_002D8E10(void *);
extern int func_002646D0(int);
extern void func_002D8F60(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00807DF0(s32);                         /* extern */
M2C_UNK func_00819580(s32);                         /* extern */
M2C_UNK func_00824030(s32);                         /* extern */
s32 func_00824080();                                /* extern */
s32 func_00CD0A60(s32, M2C_UNK);                    /* extern */
s32 func_00CDCCB0();                                /* extern */

void func_00CD1630(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s0 = 1;
        break;
    default:
        func_00264790((void *) arg0, 0U);
        /* fallthrough */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x1C) == 0) {
            func_002D8F60();
            var_s3 = 0;
            var_s2 = arg0;
            do {
                func_002D8E10(var_s2 + 0x2B8);
                var_s3 += 1;
                var_s2 += 0x18;
            } while (var_s3 < 4);
            if (func_00CDCCB0() != 1) {
                func_00807DF0(arg0 + 0x9C);
            }
        }
        if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
            func_00819580(func_00824080());
        }
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        func_00824030(func_00824080());
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        var_s2_2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
            if (func_00CD0A60(arg0, 1) != 0) {
                goto block_17;
            }
        } else {
block_17:
            var_s2_2 = 1;
        }
        if (var_s2_2 != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x20) = (u8) (M2C_FIELD(arg0, u8 *, 0x20) + 1);
        func_00264790((void *) arg0, 0x15U);
    }
}
