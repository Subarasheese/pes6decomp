/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern u32 func_00B31770(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00972040(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_009720E0(s32, s16);                    /* extern */
M2C_UNK func_00B30B00(u8);                          /* extern */
M2C_UNK func_00B30EB0();                            /* extern */
extern char D_00B7FC70[];

void func_00B310D0(void) {
    s16 var_s3;
    s32 *var_s2;
    s32 var_s4;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_s1;
    u8 temp_s2;

    temp_v0 = func_00B31770();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 4) = func_001D5A10(0x10335);
        func_00B30EB0();
        temp_v0_2 = func_00B31770();
        if (temp_v0_2 != 0) {
            var_s4 = 0;
            var_s2 = ((void *)D_00B7FC70);
            var_s1 = temp_v0_2;
            do {
                if (M2C_FIELD(temp_v0_2, s32 *, 0xE8) & (1 << *var_s2)) {
                    func_001D7D80(M2C_FIELD(var_s1, void **, 0x6C), 1);
                } else {
                    func_001D7D80(M2C_FIELD(var_s1, void **, 0x6C), 0);
                }
                var_s4 += 1;
                var_s2 += 4;
                var_s1 += 4;
            } while (var_s4 < 0x17);
        }
        temp_s2 = M2C_FIELD(temp_v0, u8 *, 0xD8);
        temp_v0_3 = func_00B31770();
        if (temp_v0_3 != 0) {
            if (M2C_FIELD(temp_v0_3, s32 *, 0xEC) == 0) {
                var_s3 = 1;
            } else {
                var_s3 = 0;
            }
            func_001D7D80(M2C_FIELD(temp_v0_3, void **, 0xC8), var_s3);
            func_009720E0(M2C_FIELD(temp_v0_3, s32 *, 0xCC), var_s3);
            func_00972040(M2C_FIELD(temp_v0_3, s32 *, 0xCC), 0, temp_s2 & 0xFF);
        }
        func_00B30B00(M2C_FIELD(temp_v0, u8 *, 0xD8));
    }
}
