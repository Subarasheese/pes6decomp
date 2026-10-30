/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001520C0();                                /* extern */
s32 func_002DCA50();                                /* extern */
s16 *func_008472D0();                               /* extern */
s32 func_0084E5F0();                                /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s64 func_00858B60(M2C_UNK *, M2C_UNK);              /* extern */
extern char D_008B13E1[];
extern char D_008B14CC[];
extern char D_008B21C0[];

void func_0084E450(void) {
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 var_s2;
    u8 temp_s3;

    func_008472D0();
    if (((u64) ((s64) (*(u8 *)D_008B14CC) << 0x3D) >> 0x3F) != 0) {

    } else if (func_001520C0() != 0) {
        if (func_002DCA50() != 0) {
            temp_v0 = func_0084E5F0();
            if (temp_v0 == 0) {
                return;
            }
            var_s2 = 1;
            if ((((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1) >= 2) {
                var_s1 = ((void *)D_008B13E1);
loop_10:
                temp_s3 = M2C_FIELD(var_s1, u8 *, 0x2B);
                if ((var_s2 == *func_008472D0()) || ((temp_s3 & 0xFF) == (temp_v0 & 0xFF))) {
                    var_s1 += 1;
                    var_s2 += 1;
                    if (var_s2 >= (((s64) (func_00858B60(((void *)D_008B21C0), 1) << 0x38) >> 0x38) + 1)) {
                        goto block_13;
                    }
                    goto loop_10;
                }
            } else {
block_13:
                func_00853B50(1, 6, 0, 0, *func_008472D0(), 0, 0, 0);
            }
        } else {
            if (func_0084E5F0() == 0) {
                return;
            }
            func_00853B50(1, 6, 0, 0, *func_008472D0(), 0, 0, 0);
        }
    }
}
