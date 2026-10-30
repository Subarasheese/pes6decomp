/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00C1B3D0(void);
extern void func_00C1B3C0(u32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC40A0();                            /* extern */
M2C_UNK func_00BC7390(M2C_UNK);                     /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
extern void *D_003E7DC0;
extern char D_00CBD728[];

s32 func_00BDB930(void) {
    s32 *temp_s0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = func_00C1B3D0();
    if (func_00BCF3A0(0x1000) == 0) {
        if (func_00BCF3A0(0x4000) == 0) {
            if (func_00BCF3A0(1) == 0) {
                if (func_00BCF3A0(8) != 0) {
                    var_s0 = var_s1 + 1;
                    if (var_s0 >= 2) {
                        var_s0 = 1;
                    } else if (var_s0 < 0) {
                        var_s0 = 0;
                    }
                    if (var_s1 != var_s0) {
                        func_0026E840(0x8400F802);
                    }
                    goto block_26;
                }
            } else {
                var_s0 = var_s1 - 1;
                if (var_s0 >= 2) {
                    var_s0 = 1;
                } else if (var_s0 < 0) {
                    var_s0 = 0;
                }
                if (var_s1 != var_s0) {
                    func_0026E840(0x8400F802);
                    var_s1 = var_s0;
                } else {
block_26:
                    var_s1 = var_s0;
                }
            }
            func_00C1B3C0((u32) var_s1);
            if (((u64) ((s64) M2C_FIELD(M2C_FIELD(D_003E7DC0, void **, 0x70), u8 *, 0x35) << 0x38) >> 0x3C) != 0xD) {
                func_00BC40A0();
            }
            return 0xD;
        }
        func_0026E840(0x84008401);
        return 9;
    }
    temp_s0 = ((void *)D_00CBD728) + (var_s1 * 4);
    if (*temp_s0 != 0x19) {
        func_00BC7390(0xF);
    }
    func_0026E840(0x84028400);
    return *temp_s0;
}
