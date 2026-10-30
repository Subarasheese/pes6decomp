/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00B526C0();                              /* extern */

void func_00B4F080(void *arg0) {
    void *temp_v0;

    temp_v0 = func_00B526C0();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0xD90) = (s32) (M2C_FIELD(arg0, u8 *, 2) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD94) = (s32) (M2C_FIELD(arg0, u8 *, 3) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD7C) = (s32) (M2C_FIELD(arg0, u8 *, 4) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD80) = (s32) (M2C_FIELD(arg0, u8 *, 5) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDD0) = (s32) (M2C_FIELD(arg0, u8 *, 6) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD8C) = (s32) (M2C_FIELD(arg0, u8 *, 7) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDCC) = (s32) (M2C_FIELD(arg0, u8 *, 8) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD84) = (s32) (M2C_FIELD(arg0, u8 *, 0xA) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD88) = (s32) (M2C_FIELD(arg0, u8 *, 0xB) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDA0) = (s32) (M2C_FIELD(arg0, u8 *, 0xC) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDA4) = (s32) (M2C_FIELD(arg0, u8 *, 0xD) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDA8) = (s32) (M2C_FIELD(arg0, u8 *, 0xE) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDAC) = (s32) (M2C_FIELD(arg0, u8 *, 0xF) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD9C) = (s32) (M2C_FIELD(arg0, u8 *, 0x10) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xD98) = (s32) (M2C_FIELD(arg0, u8 *, 0x11) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDC4) = (s32) (M2C_FIELD(arg0, u8 *, 0x12) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDB0) = (s32) (M2C_FIELD(arg0, u8 *, 0x13) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDBC) = (s32) (M2C_FIELD(arg0, u8 *, 0x14) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDB8) = (s32) (M2C_FIELD(arg0, u8 *, 0x15) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDD4) = (s32) (M2C_FIELD(arg0, u8 *, 0x16) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDB4) = (s32) (M2C_FIELD(arg0, u8 *, 0x18) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDC0) = (s32) (M2C_FIELD(arg0, u8 *, 0x17) & 0x7F);
        M2C_FIELD(temp_v0, s32 *, 0xDC8) = (s32) (M2C_FIELD(arg0, u8 *, 0x1B) & 0x7F);
    }
}
