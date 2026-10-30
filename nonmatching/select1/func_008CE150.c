/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008CC830(void);
extern void func_002F4E10(void *);
extern void func_001D4E00(void *);
M2C_UNK func_002DF960(s32);                         /* extern */

void func_008CE150(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    u32 temp_v0;
    void *temp_a0_4;
    void *temp_a0_5;

    temp_v0 = func_008CC830();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x68);
        if (temp_a0 != 0) {
            func_002DF960(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0x6C);
        if (temp_a0_2 != 0) {
            func_002DF960(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0x70);
        if (temp_a0_3 != 0) {
            func_002DF960(temp_a0_3);
        }
        temp_a0_4 = M2C_FIELD(temp_v0, void **, 0xE4);
        if (temp_a0_4 != NULL) {
            func_002F4E10(temp_a0_4);
        }
        temp_a0_5 = M2C_FIELD(temp_v0, void **, 0);
        if (temp_a0_5 != NULL) {
            func_001D4E00(temp_a0_5);
        }
    }
}
