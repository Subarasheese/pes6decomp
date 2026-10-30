/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_0010B3A0(u8 *arg0, u8 *arg1) {
    s32 var_a2;
    u8 *var_a0;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 var_v0;
    u8 var_v1;

    var_a0 = arg0;
    var_a1_2 = arg1;
    var_v1 = *var_a1_2;
    var_v0 = var_v1;
    var_a2 = 0;
    if (var_v0 != 0) {
loop_2:
        switch ((s8) var_v0) {                      /* irregular */
        case 0x3B:
            *var_a0 = 0;
            var_a1 = var_a1_2 + 1;
            do {
                var_a1 += 1;
            } while ((s8) *var_a1 != 0xA);
            return var_a1;
        case 0xA:
            *var_a0 = 0;
            return var_a1_2 + 1;
        case 0x20:
        case 0x9:
            if (var_a2 == 1) {
            default:
                *var_a0 = var_v1;
                var_a0 += 1;
                var_a2 = 1;
            }
            var_a1_2 += 1;
            var_v0 = *var_a1_2;
            var_v1 = var_v0;
            if (var_v0 == 0) {
                /* Duplicate return node #15. Try simplifying control flow for better match */
                return NULL;
            }
            goto loop_2;
        }
    } else {
        return NULL;
    }
}
