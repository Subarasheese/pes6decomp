/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
extern u8 func_00225820(void);
s32 func_00224BC0(s32, s32);                        /* extern */
s32 func_0096EA00(u8);                              /* extern */
extern char D_00591C09[];

void func_00AF6410(void) {
    s16 temp_a0;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v1;
    u32 var_a2;
    void *temp_s1;
    void *var_a1;

    var_s3 = 0;
    temp_s2 = func_00225820() & 0xFF;
    temp_s1 = func_00229310();
    if (((*(u8 *)D_00591C09) == 0xE) && (temp_s1 != NULL)) {
        if (func_0096EA00((*(u8 *)D_00591C09)) & 0xFF) {
            var_v1 = 0x17;
        } else {
            var_v1 = 0x12;
        }
        temp_s0 = var_v1 & 0xFF;
        var_s4 = 0;
        if (temp_s0 > 0) {
            do {
                var_a2 = var_s3 & 0xFF;
                temp_a0 = func_00224BC0(temp_s2, var_s4) & 0xFFFF;
                if (var_a2 < 0x17FU) {
                    var_a1 = temp_s1 + (var_a2 * 2);
loop_9:
                    if (M2C_FIELD(var_a1, u16 *, 0x10) == 0) {
                        var_s3 = var_a2 & 0xFF;
                        M2C_FIELD((temp_s1 + (var_a2 * 2)), s16 *, 0x10) = temp_a0;
                    } else {
                        var_a2 += 1;
                        var_a1 += 2;
                        if (var_a2 < 0x17FU) {
                            goto loop_9;
                        }
                    }
                }
                var_s4 = (var_s4 + 1) & 0xFF;
            } while (var_s4 < temp_s0);
        }
    }
}
