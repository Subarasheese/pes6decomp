/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern s32 func_001D7BA0(void *);
M2C_UNK func_00999C10(s32, M2C_UNK);                /* extern */
M2C_UNK func_009D2EB0();                            /* extern */
extern void *D_00A7DE08;

s32 func_009D4410(void) {
    s8 var_a1_2;
    u8 temp_v1;
    u8 var_a1;
    u8 var_a1_3;
    void *temp_s0;

    if (D_00A7DE08 != NULL) {
        temp_s0 = M2C_FIELD(D_00A7DE08, void **, 0x20);
        temp_v1 = M2C_FIELD(D_00A7DE08, u8 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 3:
            break;
        case 2:
            if (func_001D7BA0(temp_s0) != 2) {
                M2C_FIELD(D_00A7DE08, u8 *, 0) = 3U;
                func_001D7D60(temp_s0, 0);
            }
            break;
        case 1:
            if (func_001D7BA0(temp_s0) != 2) {
                M2C_FIELD(D_00A7DE08, u8 *, 0) = 0U;
                M2C_FIELD(D_00A7DE08, u8 *, 4) = 1U;
                func_00999C10(M2C_FIELD(D_00A7DE08, s32 *, 0x34), 1);
                func_00999C10(M2C_FIELD(D_00A7DE08, s32 *, 0x38), 1);
                func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x24), 1);
                var_a1 = M2C_FIELD(D_00A7DE08, u8 *, 2);
                if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
                    var_a1 = 0;
                }
                func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x2C), (s8) var_a1);
                var_a1_2 = M2C_FIELD(D_00A7DE08, u8 *, 1) != 0;
                if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
                    var_a1_2 = 0;
                }
                func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x28), var_a1_2);
                var_a1_3 = M2C_FIELD(D_00A7DE08, u8 *, 3);
                if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
                    var_a1_3 = 0;
                }
                func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x30), (s8) var_a1_3);
            }
            break;
        case 0:
            func_009D2EB0();
            break;
        }
    }
    return 0;
}
