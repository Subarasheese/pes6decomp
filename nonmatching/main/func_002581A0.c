/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0058CF34[];
extern char D_0058CF3A[];

void func_002581A0(s32 arg0, u16 arg1, void *arg2) {
    s32 var_t0;
    u8 temp_a0;
    void *var_a2;
    void *var_a7;

    var_a2 = arg2;
    if ((arg1 != 0) && (var_a2 != NULL)) {
        (*(u16 *)D_0058CF3A) = arg1;
        var_t0 = 0;
        var_a7 = (*(s32 *)D_0058CF34) + ((arg0 & 0xFF) * 4);
        if ((s32) (*(u16 *)D_0058CF3A) > 0) {
            do {
                M2C_FIELD(var_a2, u8 *, 0) = (u8) M2C_FIELD(var_a7, u8 *, 0);
                M2C_FIELD(var_a2, u8 *, 1) = (u8) M2C_FIELD(var_a7, u8 *, 1);
                M2C_FIELD(var_a2, u8 *, 2) = (u8) M2C_FIELD(var_a7, u8 *, 2);
                M2C_FIELD(var_a2, u8 *, 3) = (u8) M2C_FIELD(var_a7, u8 *, 3);
                temp_a0 = M2C_FIELD(var_a2, u8 *, 3);
                if (temp_a0 == 0x80) {
                    M2C_FIELD(var_a2, u8 *, 3) = 0xFFU;
                } else {
                    M2C_FIELD(var_a2, u8 *, 3) = (u8) (temp_a0 * 2);
                }
                var_t0 += 1;
                var_a7 += 4;
                var_a2 += 4;
            } while (var_t0 < (s32) *(u16 *)0x58CF3A);
        }
    }
}
