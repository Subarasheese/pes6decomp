/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_00AE51E0(s32 arg0) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x4DC) != 0) {
            temp_v1 = arg0 & 0xFF;
            if (temp_v1 != 0) {
                if (temp_v1 != (M2C_FIELD(temp_v0, u8 *, 0x58D) - 1)) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x200), 1);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x204), 1);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 1, 1);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 0, 1);
                } else {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x200), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0x204), 1);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 1, 0);
                    func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 0, 1);
                }
            } else {
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x200), 1);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0x204), 0);
                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 1, 1);
                func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 0, 0);
            }
        } else {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x200), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0x204), 0);
            func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 1, 0);
            func_00971C10(M2C_FIELD(temp_v0, s32 *, 0x4D8), 0, 0);
        }
    }
}
