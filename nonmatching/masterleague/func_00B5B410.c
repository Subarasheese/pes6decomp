/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994670(u8, s32);                       /* extern */
void *func_00994C60(u8, u8);                        /* extern */
s32 func_00B5B540(s32, u8 *);                       /* extern */
extern void *D_003EAEB8;

void *func_00B5B410(s32 arg0, u8 *arg1) {
    u8 sp6F;
    u8 temp_v1;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = D_003EAEB8;
    if (temp_s0 == NULL) {
        return NULL;
    }
    temp_v0_2 = func_00994670(M2C_FIELD(temp_s0, u8 *, 0x62E), arg0 & 0xFF);
    if (temp_v0_2 != NULL) {
        temp_v0 = func_00994C60(M2C_FIELD(temp_v0_2, u8 *, 0x90), M2C_FIELD(temp_v0_2, u8 *, 0x91));
        if (temp_v0 == NULL) {
            return NULL;
        }
        temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x90);
        if (temp_v1 != 0xFF) {
            if ((temp_v1 & 0xFF) == M2C_FIELD(temp_s0, u8 *, 0x62E)) {
                if (M2C_FIELD(temp_v0, u16 *, 4) != 0) {
                    if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x39) >> 0x3C) == 2) {
                        if (func_00B5B540(arg0, &sp6F) != 0) {
                            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0) << 0x39) >> 0x3A) != 9) {
                                return NULL;
                            }
                            if (arg1 != NULL) {
                                *arg1 = sp6F;
                            }
                            return temp_v0;
                        }
                        return NULL;
                    }
                    return NULL;
                }
                return NULL;
            }
            return NULL;
        }
        return NULL;
    }
    return NULL;
}
