/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern u32 func_00AF3B30(void);
M2C_UNK func_008CA390(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_008CA810(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00956A80(s32, M2C_UNK);                /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00957080(void *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
s32 func_00AF3AB0(u8);                              /* extern */

void func_00AF3230(void) {
    s32 temp_s1;
    u32 temp_v0;

    temp_v0 = func_00AF3B30();
    if (temp_v0 != 0) {
        temp_s1 = func_00AF3AB0(M2C_FIELD(temp_v0, u8 *, 0x84)) & 0xFFFF;
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0xC), 4, temp_s1, 0);
        func_00957080(M2C_FIELD(temp_v0, void **, 0x14), 4, temp_s1, 0);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x1C), 2, func_0095C4A0(temp_s1));
        func_008CA810(M2C_FIELD(temp_v0, s32 *, 0x20), temp_s1, 1);
        if (temp_s1 != 0x35) {
            func_008CA390(M2C_FIELD(temp_v0, s32 *, 0x20), 1, 1);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 1);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0xC), 1);
            func_001EDAE0(M2C_FIELD(temp_v0, void **, 0x14), 1);
        } else {
            func_008CA390(M2C_FIELD(temp_v0, s32 *, 0x20), 1, 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 0);
            func_00956A80(M2C_FIELD(temp_v0, s32 *, 0xC), 0);
            func_001EDAE0(M2C_FIELD(temp_v0, void **, 0x14), 0);
        }
    }
}
