/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00975030(s32, s32);                        /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B68F0(M2C_UNK);                     /* extern */
s32 func_009F7C30(s32);                             /* extern */
s32 func_009F7CE0(s32);                             /* extern */
s32 func_009F8630(s32);                             /* extern */
s32 func_009F86E0(s32);                             /* extern */

s32 func_00976970(void *arg0) {
    s32 (*temp_v0)(s32);
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0x54);
    temp_v0 = M2C_FIELD(temp_v1, s32 (**)(s32), 0x28);
    if (temp_v0 == NULL) {
        var_v0 = -1;
    } else {
        var_v0 = temp_v0(M2C_FIELD(temp_v1, s32 *, 0));
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x74);
    temp_s0 = M2C_FIELD(arg0, void **, 0x58);
    var_s3 = 0;
    switch (temp_v1_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_009B68F0(0);
        M2C_FIELD((arg0 + 0x70), s32 *, 4) = 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        if (M2C_FIELD(temp_s0, s32 *, 8) != 0) {
            var_s0 = func_009F8630(var_v0);
            var_v0_2 = func_009F86E0(var_v0);
        } else {
            var_s0 = func_009F7C30(var_v0);
            var_v0_2 = func_009F7CE0(var_v0);
        }
        temp_v0_2 = func_00975030(var_s0, var_v0_2);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 4:                                     /* switch 2 */
        case 1:                                     /* switch 2 */
            func_009B68F0(1);
            func_0099C760();
            func_0099C730(0x01F70099);
            var_s3 = 1;
            break;
        }
        break;
    }
    return var_s3;
}
