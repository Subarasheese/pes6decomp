/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00964BC0(s32, void *);                     /* extern */
s32 func_00964CD0();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
extern void *D_00A7DE98;

s32 func_009D6950(void) {
    s32 temp_v0;
    s32 var_v1;
    void *var_v0;

    func_0099D030(1);
    temp_v0 = func_00964BC0(M2C_FIELD(D_00A7DE98, s32 *, 0), D_00A7DE98 + 0x28);
    if (temp_v0 != 0) {
        func_0099D030(0);
        if (temp_v0 >= 0) {
            return 1;
        }
        switch (temp_v0) {                          /* irregular */
        case -10:
            if (func_00964CD0() == 0) {
                if (M2C_FIELD(D_00A7DE98, s8 *, 0x28) == 0) {
                    M2C_FIELD(D_00A7DE98, s32 *, 0x34) = 0x01FB003E;
                    goto block_24;
                }
                M2C_FIELD(D_00A7DE98, s8 *, 0x28) = 0;
                return 0;
            }
            if (M2C_FIELD(D_00A7DE98, s8 *, 0x28) != 0) {
                M2C_FIELD(D_00A7DE98, s32 *, 0x34) = 0x02000009;
block_24:
                M2C_FIELD(D_00A7DE98, s8 *, 0x24) = 6;
                return 0;
            }
            M2C_FIELD(D_00A7DE98, s8 *, 0x24) = 2;
            return 0;
        case -11:
            var_v0 = D_00A7DE98;
            var_v1 = 0x0200000E;
block_23:
            M2C_FIELD(var_v0, s32 *, 0x34) = var_v1;
            goto block_24;
        case -12:
            var_v0 = D_00A7DE98;
            var_v1 = 0x02000015;
            goto block_23;
        default:
            var_v0 = *(void **)0xA7DE98;
            var_v1 = 0x01FB003E;
            goto block_23;
        }
    } else {
        return 0;
    }
}
