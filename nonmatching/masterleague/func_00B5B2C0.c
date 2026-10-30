/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002243B0(s32, s32);
extern void * func_00223C10(void);
s32 func_00224BC0(u8, s32);                         /* extern */
s32 func_00970870(s16);                             /* extern */
M2C_UNK func_00AFA810(void *);                      /* extern */
s16 func_00B16DB0(s16, u8, M2C_UNK);                /* extern */
extern void *D_003EAEB8;

void func_00B5B2C0(void) {
    s16 temp_s5;
    s32 var_s1;
    s32 var_s2;
    u8 temp_a1;
    void *temp_s0;
    void *temp_s4;
    void *temp_v0;
    void *var_s0;
    void *var_s3;

    temp_s4 = D_003EAEB8;
    if (temp_s4 != NULL) {
        var_s1 = 0;
        var_s0 = temp_s4;
        do {
            func_00AFA810(var_s0 + 0x640);
            var_s1 += 1;
            var_s0 += 0x10;
        } while (var_s1 < 0x20);
        var_s2 = 0;
        var_s3 = temp_s4;
        do {
            temp_s5 = func_00224BC0(M2C_FIELD(temp_s4, u8 *, 0x62E), var_s2 & 0xFF) & 0xFFFF;
            if ((temp_s5 != 0) && ((func_002243B0((s32) M2C_FIELD(temp_s4, u8 *, 0x62E), var_s2 & 0xFF) & 0xFF) != 0xFF) && (func_00970870(temp_s5) != 0)) {
                temp_v0 = func_00223C10();
                if ((temp_v0 != NULL) && ((M2C_FIELD(temp_v0, u8 *, 0) & 0xF) == 3)) {
                    temp_s0 = var_s3 + 0x640;
                    M2C_FIELD(var_s3, u8 *, 0x640) = (u8) ((M2C_FIELD(var_s3, u8 *, 0x640) & ~1) | 1);
                    temp_a1 = M2C_FIELD(var_s3, u8 *, 0x640);
                    M2C_FIELD(var_s3, u8 *, 0x640) = (u8) ((temp_a1 & ~0x7E) | 0x10);
                    M2C_FIELD(var_s3, s16 *, 0x644) = temp_s5;
                    M2C_FIELD(temp_s0, s16 *, 6) = func_00B16DB0(temp_s5, temp_a1, 1);
                    M2C_FIELD(temp_s0, u16 *, 8) = (u16) M2C_FIELD(temp_v0, u16 *, 2);
                }
            }
            var_s2 += 1;
            var_s3 += 0x10;
        } while (var_s2 < 0x20);
    }
}
