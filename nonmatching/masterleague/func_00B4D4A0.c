/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_00B4DFD0(void);
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B4C510();                            /* extern */

void func_00B4D4A0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00B4DFD0();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_s2 = 0;
            var_s1 = temp_v0;
            do {
                func_001D7D60(M2C_FIELD(var_s1, void **, 0xC4), 0);
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < 9);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x988), 1);
            temp_v0_2 = func_00B4DFD0();
            if (temp_v0_2 != 0) {
                func_00971C10(M2C_FIELD(temp_v0_2, s32 *, 0x984), 2, 0);
                func_00972020(M2C_FIELD(temp_v0_2, s32 *, 0x98C), 0);
            }
            break;
        case 1:
            var_s1_2 = 0;
            var_s2_2 = temp_v0;
            do {
                if (var_s1_2 == M2C_FIELD(temp_v0, s32 *, 0x350)) {
                    func_001D7D60(M2C_FIELD(var_s2_2, void **, 0xC4), 0);
                } else {
                    func_001D7D60(M2C_FIELD(var_s2_2, void **, 0xC4), 1);
                }
                var_s1_2 += 1;
                var_s2_2 += 4;
            } while (var_s1_2 < 9);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x988), 0);
            temp_v0_3 = func_00B4DFD0();
            if (temp_v0_3 != 0) {
                func_00971C10(M2C_FIELD(temp_v0_3, s32 *, 0x984), 2, 1);
                func_00972020(M2C_FIELD(temp_v0_3, s32 *, 0x98C), 1);
            }
            break;
        }
        func_00B4C510();
    }
}
