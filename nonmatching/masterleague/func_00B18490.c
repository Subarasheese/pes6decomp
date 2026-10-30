/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00223C10(void);
s32 func_00224D90(s32, s32);                        /* extern */
M2C_UNK func_00AFF3C0();                            /* extern */
M2C_UNK func_00B182F0(s32, s32);                    /* extern */
M2C_UNK func_00B1CC10(s32);                         /* extern */

void func_00B18490(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v1;
    u8 temp_a1;
    void *temp_s0;

    temp_s0 = func_00223C10();
    if ((func_00224D90(arg0, arg1) & 0xFFFF) && (temp_s0 != NULL)) {
        temp_a0 = M2C_FIELD(temp_s0, u8 *, 0) & 0xF;
        if ((temp_a0 != 7) && (temp_a0 != 6) && (temp_a0 != 5)) {
            return;
        }
        temp_a1 = M2C_FIELD(temp_s0, u8 *, 1);
        temp_v1 = ((u64) ((s64) temp_a1 << 0x38) >> 0x3A) & 0xFF;
        if (temp_v1 > 0) {
            M2C_FIELD(temp_s0, u8 *, 1) = (u8) ((temp_a1 & ~0xFC) | (((temp_v1 + 0xFF) & 0x3F) * 4));
        }
        if (((u64) ((s64) M2C_FIELD(temp_s0, u8 *, 1) << 0x38) >> 0x3A) == 0) {
            func_00B182F0(arg0, arg1);
            if ((arg0 & 0xFF) == (func_00225820() & 0xFF)) {
                func_00B1CC10(arg0);
                func_00AFF3C0();
            }
        }
    }
}
