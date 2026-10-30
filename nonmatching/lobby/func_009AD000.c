/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099AE80(s32);                         /* extern */

void func_009AD000(void *arg0) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0 != NULL) {
        func_001D7F10(temp_a0);
        M2C_FIELD(arg0, void **, 4) = NULL;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_a0_2 != 0) {
        func_0099AE80(temp_a0_2);
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a0_3 != 0) {
        func_002DF960(temp_a0_3);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
}
