/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
extern void func_001B9A50(void *, s32);
M2C_UNK func_002DB580(s32, M2C_UNK);                /* extern */
M2C_UNK func_008C5CF0(s32);                         /* extern */

void func_008D21F0(void *arg0, s8 arg1) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    func_008C5CF0(arg0 + 0x214);
    M2C_FIELD(arg0, s8 *, 0xA) = arg1;
    func_001D7D60(M2C_FIELD(arg0, void **, 0x1E4), arg1);
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0x3C), (u8) arg1);
    if (!(arg1 & 0xFF)) {
        func_002DB580(M2C_FIELD(arg0, s32 *, 0x1D4), 0);
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0x204);
    if (temp_a0 != NULL) {
        func_001D7D60(temp_a0, arg1);
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 0x208);
    if (temp_a0_2 != NULL) {
        func_001D7D60(temp_a0_2, arg1);
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0x200);
    if (temp_a0_3 != NULL) {
        func_001D7D60(temp_a0_3, arg1);
    }
    temp_a0_4 = M2C_FIELD(arg0, void **, 0x1E0);
    if (temp_a0_4 != NULL) {
        func_001B9A50(temp_a0_4, (s32) arg1);
    }
}
