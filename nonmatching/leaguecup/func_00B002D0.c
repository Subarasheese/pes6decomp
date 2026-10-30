/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0095A990(u8, s32);                         /* extern */
extern void *D_003EAD54;

s32 func_00B002D0(M2C_UNK arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    void *temp_s0;

    var_a1 = arg1;
    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x89C);
        switch (temp_v1) {                          /* irregular */
        case 3:
            var_a1 = 3 & 0xFF;
            break;
        case 2:
            var_a1 = 2 & 0xFF;
            break;
        case 1:
        case 0:
            var_a1 = 1;
            break;
        }
        return (func_0095A990(M2C_FIELD(temp_s0, u8 *, 0x810), var_a1) & 0xFF) >= M2C_FIELD(temp_s0, s32 *, 0x89C);
    }
    return 0;
}
