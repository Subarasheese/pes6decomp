/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DB540(u32, u32);
M2C_UNK func_001C4730(s64, u32, u32);               /* extern */
M2C_UNK func_001DABD0(u32 *);                       /* extern */
M2C_UNK func_001DACB0(u32 *, s64);                  /* extern */
extern char D_0052AB90[];
extern char D_0052ABAC[];

void func_001DA070(s32 arg0, s64 arg1) {
    s64 var_s1;
    s64 var_s4;
    u32 *var_s0;
    u32 temp_a0;
    u32 temp_s1;
    u32 var_s2;
    u32 var_s3;
    u32 var_s5;

    if ((arg1 != 0) && !(((u64) (arg1 << 0x20) >> 0x20) & 0xF)) {
        var_s0 = NULL;
        if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
            var_s0 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
        }
        if ((var_s0 == NULL) || (*var_s0 == 0)) {
            var_s0 = NULL;
        }
        if ((var_s0 != NULL) && (temp_a0 = M2C_FIELD(var_s0, u32 *, 0), (temp_a0 != arg1))) {
            var_s1 = (s64) ((((u64) ((s64) temp_a0 << 0x20) >> 0x20) - ((u64) (arg1 << 0x20) >> 0x20)) << 0x20) >> 0x20;
            if (var_s1 > 0) {

            } else {
                var_s1 = -var_s1;
            }
            if ((u32) var_s1 < 0x10U) {
                return;
            }
            func_001DB540(temp_a0, (u32) arg1);
            func_001DABD0(var_s0);
            var_s5 = M2C_FIELD(var_s0, u32 *, 0);
            var_s3 = M2C_FIELD(var_s0, u32 *, 0x44);
            temp_s1 = var_s1 & ~0xF;
            var_s4 = arg1;
            do {
                if (var_s3 < temp_s1) {
                    var_s2 = var_s3;
                } else {
                    var_s2 = temp_s1;
                }
                func_001C4730(var_s4, var_s5, var_s2);
                var_s3 -= var_s2;
                var_s5 += var_s2;
                var_s4 += var_s2;
            } while (var_s3 != 0);
            M2C_FIELD(var_s0, u32 *, 0) = (u32) arg1;
            func_001DACB0(var_s0, arg1);
        }
    }
}
