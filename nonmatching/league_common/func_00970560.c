/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_00224E20();                              /* extern */

void func_00970560(s8 arg0) {
    s32 temp_a1;
    void *temp_v0;

    temp_v0 = func_00224E20();
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0, 0, 0x16);
        M2C_FIELD(temp_v0, s16 *, 0) = 0;
        M2C_FIELD(temp_v0, s8 *, 2) = arg0;
        M2C_FIELD(temp_v0, s8 *, 3) = 0xFF;
        temp_a1 = (0 & 0xFFF) * 0x10;
        M2C_FIELD(temp_v0, u16 *, 6) = (u16) ((M2C_FIELD(temp_v0, u16 *, 6) & 0xFFFF001F) | 0x8000);
        M2C_FIELD(temp_v0, s16 *, 4) = 0;
        M2C_FIELD(temp_v0, u16 *, 8) = (u16) ((M2C_FIELD(temp_v0, u16 *, 8) & 0xFFFF000F) | temp_a1);
        M2C_FIELD(temp_v0, u16 *, 0xA) = (u16) ((M2C_FIELD(temp_v0, u16 *, 0xA) & 0xFFFF000F) | temp_a1);
    }
}
