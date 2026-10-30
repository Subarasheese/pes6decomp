/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B76A10(void);
M2C_UNK func_00972E90(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_00B74C80(M2C_UNK);                     /* extern */
extern char D_00B864A0[];
extern char D_00B864F0[];
extern char D_00B86500[];

void func_00B75280(void) {
    s32 temp_v1;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s0;
    u32 var_s1;

    temp_v0 = func_00B76A10();
    if (temp_v0 != 0) {
        var_s2 = 0;
        var_s1 = temp_v0;
        var_s0 = temp_v0;
        do {
            temp_v1 = M2C_FIELD(var_s1, s32 *, 0x918);
            if (temp_v1 == 5) {
                func_00972E90(M2C_FIELD(var_s0, s32 *, 0x7DC), 0, ((void *)D_00B864F0));
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x184), 0);
            } else if (temp_v1 == 6) {
                func_00972E90(M2C_FIELD(var_s0, s32 *, 0x7DC), 0, ((void *)D_00B86500));
                func_001D7D60(M2C_FIELD(var_s1, void **, 0x184), 0);
            } else {
                func_00972E90(M2C_FIELD(var_s0, s32 *, 0x7DC), 0, ((void *)D_00B864A0) + (M2C_FIELD((temp_v0 + var_s2), u8 *, 0x8F8) * 0x10));
            }
            var_s2 += 1;
            var_s1 += 4;
            var_s0 += 8;
        } while (var_s2 < 0x20);
        func_00B74C80(0);
    }
}
