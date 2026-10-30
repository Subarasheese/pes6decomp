/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00969AF0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0093B770(s32, s32);                        /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */

void func_0096D300(void) {
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s1;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = func_00969AF0();
    var_s1 = 0;
    temp_v0_2 = func_0093B770(M2C_FIELD(temp_v0, s32 *, 0xC), M2C_FIELD(temp_v0, s32 *, 0x24));
    switch (temp_v0_2) {                            /* switch 1; irregular */
    case -3:                                        /* switch 1 */
        var_s1 = 1;
        var_v1 = 0x020D0041;
block_31:
        M2C_FIELD(temp_v0, s32 *, 0) = var_v1;
        break;
    case -2:                                        /* switch 1 */
        func_0026E840(0x8C008005);
        var_s1 = 1;
        if (M2C_FIELD(temp_v0, s32 *, 0x24) == 1) {
            var_v1 = 0x020D003E;
        } else {
            var_v1 = 0x01FB003E;
        }
        goto block_31;
    case -1:                                        /* switch 1 */
        func_0026E840(0x8C008005);
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_31;
    case 1:                                         /* switch 1 */
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x24);
        var_s1 = 1;
        switch (temp_v1) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            var_v1 = 0x020D0028;
            break;
        case 0:                                     /* switch 2 */
            var_v1 = 0x020D0029;
            break;
        default:                                    /* switch 2 */
            var_v1 = 0x01FB003E;
            break;
        }
        goto block_31;
    default:                                        /* switch 1 */
        var_s1 = 1;
        var_v1 = 0x01FB003E;
        goto block_31;
    }
    if (var_s1 != 0) {
        func_0099D030(0);
        func_009717C0(7);
    }
}
