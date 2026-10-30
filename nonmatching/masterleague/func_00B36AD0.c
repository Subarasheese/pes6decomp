/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B37A60(void);
M2C_UNK func_00B36980(M2C_UNK);                     /* extern */

void func_00B36AD0(void) {
    s32 var_s1;
    s32 var_s1_2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x298) != 0) {
            func_00B36980(0);
            temp_v0_2 = func_00B37A60();
            if (temp_v0_2 != 0) {
                var_s1 = 0;
                do {
                    func_001D7D60(M2C_FIELD((temp_v0_2 + ((var_s1 & 0xFF) * 4)), void **, 0x254), 1);
                    var_s1 = (var_s1 + 1) & 0xFF;
                } while (var_s1 < 4);
            }
        } else {
            func_00B36980(1);
            temp_v0_3 = func_00B37A60();
            if (temp_v0_3 != 0) {
                var_s1_2 = 0;
                do {
                    func_001D7D60(M2C_FIELD((temp_v0_3 + ((var_s1_2 & 0xFF) * 4)), void **, 0x254), 0);
                    var_s1_2 = (var_s1_2 + 1) & 0xFF;
                } while (var_s1_2 < 4);
            }
        }
    }
}
