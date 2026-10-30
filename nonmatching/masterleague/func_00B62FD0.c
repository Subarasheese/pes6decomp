/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B62380(void);
extern void func_001D7D60(void *, s8);
extern s32 func_001D7980(void *);
M2C_UNK func_00971CE0(s32, M2C_UNK);                /* extern */

void func_00B62FD0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00B62380();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 8), 0);
            var_s2 = 0;
            var_s1 = temp_v0;
            do {
                if ((func_001D7980(M2C_FIELD(var_s1, void **, 0xA4)) & 0xFF) == 1) {
                    func_001D7D60(M2C_FIELD(var_s1, void **, 0x46C), 1);
                }
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < 0x14);
            func_00B62380();
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x4C), 1);
            return;
        case 1:
            func_001D7D60(M2C_FIELD(temp_v0, void **, 8), 1);
            var_s1_2 = 0;
            var_s2_2 = temp_v0;
            do {
                if ((func_001D7980(M2C_FIELD(var_s2_2, void **, 0xA4)) & 0xFF) == 1) {
                    func_001D7D60(M2C_FIELD(var_s2_2, void **, 0x46C), 0);
                }
                var_s1_2 += 1;
                var_s2_2 += 4;
            } while (var_s1_2 < 0x14);
            func_00B62380();
            func_00971CE0(M2C_FIELD(temp_v0, s32 *, 0x4C), 0);
            break;
        }
    }
}
