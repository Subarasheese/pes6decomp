/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00D07FF0(void *);                      /* extern */

s32 func_00D095C0(void *arg0) {
    s32 var_s0;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x52A) = 0;
            M2C_FIELD(arg0, s8 *, 0x52B) = 0;
            M2C_FIELD(arg0, s8 *, 0x52D) = 0x11;
            M2C_FIELD(arg0, s8 *, 0x527) = 2;
            M2C_FIELD(arg0, s8 *, 0x525) = 1;
            M2C_FIELD(arg0, s8 *, 0x534) = 1;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x525) = 1;
            M2C_FIELD(arg0, s8 *, 0x526) = 0;
        }
        if (arg0 != NULL) {
            M2C_FIELD(arg0, s8 *, 0x525) = 1;
            M2C_FIELD(arg0, s8 *, 0x528) = 0;
        }
        var_s0 = 0;
        do {
            func_00D07FF0(arg0 + (var_s0 * 0x74) + 0x18);
            var_s0 += 1;
        } while (var_s0 < 0xA);
    }
    func_001C48E8(arg0, 0, 0x538);
    return 1;
}
