/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F2810(void *);
extern void func_001D7F10(void *);
extern u32 func_00B15370(void);
extern void func_001B9C60(void *);
M2C_UNK func_00972290(s32);                         /* extern */

void func_00B0ED30(void) {
    s32 temp_a0_3;
    u32 temp_v0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0xBF0);
        if (temp_a0 != NULL) {
            func_001B9C60(temp_a0);
            M2C_FIELD(temp_v0, void **, 0xBF0) = NULL;
        }
        temp_a0_2 = M2C_FIELD(temp_v0, void **, 0xBEC);
        if (temp_a0_2 != NULL) {
            func_001F2810(temp_a0_2);
            M2C_FIELD(temp_v0, void **, 0xBEC) = NULL;
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0xBE8);
        if (temp_a0_3 != 0) {
            func_00972290(temp_a0_3);
            M2C_FIELD(temp_v0, s32 *, 0xBE8) = 0;
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0xBD8);
        if (temp_a0_4 != NULL) {
            func_001D7F10(temp_a0_4);
            M2C_FIELD(temp_v0, void **, 0xBD8) = NULL;
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0xBDC);
        if (temp_a0_5 != NULL) {
            func_001D7F10(temp_a0_5);
            M2C_FIELD(temp_v0, void **, 0xBDC) = NULL;
        }
        temp_a0_6 = M2C_FIELD(temp_v0, void **, 0xBE0);
        if (temp_a0_6 != NULL) {
            func_001D7F10(temp_a0_6);
            M2C_FIELD(temp_v0, void **, 0xBE0) = NULL;
        }
    }
}
