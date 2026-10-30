/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D76B0(void *, u32);
extern void func_001DF420(void *, u8);
extern void func_001D7960(void *, s8);
extern s32 func_001F4AE0(void *);
extern void func_001EEDA0(void *, u8);
M2C_UNK func_002DEF50(s32, s32);                    /* extern */
M2C_UNK func_002E4190(s32, s32);                    /* extern */

void func_00C75160(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s0_2;
    s64 temp_a0;
    s8 var_a1;
    u8 *var_s5;
    u8 temp_a0_2;
    void *temp_a0_3;
    void *temp_s3;
    void *var_s3;
    void *var_s3_2;
    void *var_s4;

    var_a1 = M2C_FIELD(arg0, s8 *, 0);
    var_s0 = 0;
    if ((var_a1 - M2C_FIELD(arg0, s8 *, 1)) > 0) {
        var_s3 = arg0;
        do {
            func_001D7960(M2C_FIELD(var_s3, void **, 4), 2);
            func_001D76B0(M2C_FIELD(var_s3, void **, 4), arg1 & 0xFF);
            var_a1 = M2C_FIELD(arg0, s8 *, 0);
            var_s0 += 1;
            var_s3 += 4;
        } while (var_s0 < (var_a1 - M2C_FIELD(arg0, s8 *, 1)));
    }
    temp_a0 = (s64) ((s64) var_a1 << 0x38) >> 0x38;
    temp_s3 = arg0 + 4;
    var_s5 = temp_s3 + (temp_a0 * 4);
    if (var_s0 < temp_a0) {
        var_s4 = arg0 + (var_s0 * 4);
        do {
            temp_a0_2 = *var_s5;
            var_s5 += 1;
            switch (temp_a0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                break;
            case 1:                                 /* switch 1 */
                func_002DEF50(M2C_FIELD(var_s4, s32 *, 4), arg1 & 0xFF);
                break;
            case 2:                                 /* switch 1 */
                func_002E4190(M2C_FIELD(var_s4, s32 *, 4), arg1 & 0xFF);
                break;
            }
            var_a1 = M2C_FIELD(arg0, s8 *, 0);
            var_s0 += 1;
            var_s4 += 4;
        } while (var_s0 < var_a1);
    }
    var_s0_2 = 0;
    var_s3_2 = temp_s3 + (var_a1 * 4) + ((M2C_FIELD(arg0, s8 *, 1) + 3) & ~3);
    if (M2C_FIELD(arg0, s16 *, 2) > 0) {
        do {
            temp_a0_3 = M2C_FIELD(var_s3_2, void **, 0);
            if (temp_a0_3 != NULL) {
                temp_v0 = func_001F4AE0(temp_a0_3);
                switch (temp_v0) {                  /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    func_001DF420(M2C_FIELD(M2C_FIELD(var_s3_2, void **, 0), void **, 0xC), arg1 & 0xFF);
                    break;
                case 1:                             /* switch 2 */
                    func_001EEDA0(M2C_FIELD(var_s3_2, void **, 4), arg1 & 0xFF);
                    break;
                }
            }
            var_s0_2 += 1;
            var_s3_2 += 8;
        } while (var_s0_2 < M2C_FIELD(arg0, s16 *, 2));
    }
}
