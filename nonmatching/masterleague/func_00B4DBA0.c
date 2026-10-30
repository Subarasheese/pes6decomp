/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B4DFD0(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00B4CD00(u8);                          /* extern */
M2C_UNK func_00B4D050(u8);                          /* extern */
M2C_UNK func_00B4D3B0(s32, u8);                     /* extern */
M2C_UNK func_00B4D4A0(u8);                          /* extern */
M2C_UNK func_00B4D5F0();                            /* extern */

void func_00B4DBA0(void) {
    s32 var_s1;
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x10332);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_001D5A10(0x1033D);
            M2C_FIELD(temp_v0, void **, 0x348) = temp_v0_3;
            if (temp_v0_3 != NULL) {
                func_00B4D5F0();
                func_00B4CD00(M2C_FIELD(temp_v0, u8 *, 0x3EC));
                var_s1 = 0;
                do {
                    func_00B4D3B0(var_s1 & 0xFF, M2C_FIELD((temp_v0 + var_s1), u8 *, 0x3E4));
                    var_s1 += 1;
                } while (var_s1 < 8);
                func_00B4D050(M2C_FIELD(temp_v0, u8 *, 0x350));
                func_00B4D4A0(M2C_FIELD(temp_v0, u8 *, 0x34D));
            }
        }
    }
}
