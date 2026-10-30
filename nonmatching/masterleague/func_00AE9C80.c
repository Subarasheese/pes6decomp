/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE3240(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00AE6B90();                            /* extern */
M2C_UNK func_00AE78E0();                            /* extern */
M2C_UNK func_00AE79F0();                            /* extern */
M2C_UNK func_00AE7EB0();                            /* extern */
M2C_UNK func_00AE8100();                            /* extern */
M2C_UNK func_00AE8710();                            /* extern */
M2C_UNK func_00AE90E0();                            /* extern */
M2C_UNK func_00AE9320();                            /* extern */

void func_00AE9C80(void) {
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    temp_v0 = func_00AE3240();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x10319);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            temp_v0_3 = func_001D5A10(0x1031B);
            M2C_FIELD(temp_v0, void **, 0x198) = temp_v0_3;
            if (temp_v0_3 != NULL) {
                temp_v0_4 = func_001D5A10(0x10318);
                M2C_FIELD(temp_v0, void **, 0x1CC) = temp_v0_4;
                if (temp_v0_4 != NULL) {
                    temp_v0_5 = func_001D5A10(0x10316);
                    M2C_FIELD(temp_v0, void **, 0x5F8) = temp_v0_5;
                    if (temp_v0_5 != NULL) {
                        temp_v0_6 = func_001D5A10(0x1031A);
                        M2C_FIELD(temp_v0, void **, 0x7C4) = temp_v0_6;
                        if (temp_v0_6 != NULL) {
                            temp_v0_7 = func_001D5A10(0x10317);
                            M2C_FIELD(temp_v0, void **, 0xB08) = temp_v0_7;
                            if ((temp_v0_7 != NULL) && (func_00AE3240() != 0)) {
                                func_00AE78E0();
                                func_00AE9320();
                                func_00AE90E0();
                                func_00AE8710();
                                func_00AE7EB0();
                                func_00AE8100();
                                func_00AE79F0();
                                func_00AE6B90();
                            }
                        }
                    }
                }
            }
        }
    }
}
