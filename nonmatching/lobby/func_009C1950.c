/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C570(s32);                         /* extern */
M2C_UNK func_0099C660(s32);                         /* extern */
s32 func_009C17C0(s8, void *, s32);                 /* extern */
M2C_UNK func_009C1AE0();                            /* extern */
M2C_UNK func_009C3C00(s8);                          /* extern */
s32 func_00D14030();                                /* extern */
extern void *D_00A7DD50;

void func_009C1950(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a2;
    s32 var_v1;

    temp_v0 = func_00D14030();
    if ((temp_v0 != 1) && (temp_v0 != 2)) {
        return;
    }
    func_009C1AE0();
    var_a0 = M2C_FIELD(D_00A7DD50, s32 *, 0);
    if (var_a0 == 0) {
        if (var_a0 != 3) {
            var_a2 = 1;
            switch (var_a0) {                       /* switch 1; irregular */
            case 2:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
                var_a0 = (s32) M2C_FIELD(D_00A7DD50, s8 *, 5);
                if (var_a0 == 1) {
                    var_a2 = 0;
                } else {
                    goto block_19;
                }
                break;
            case 1:                                 /* switch 1 */
                var_a0 = (s32) M2C_FIELD(D_00A7DD50, s8 *, 5);
                switch (var_a0) {                   /* switch 2; irregular */
                case 2:                             /* switch 2 */
                    break;
                case 1:                             /* switch 2 */
                    var_a2 = 0;
                    break;
                }
                break;
            }
        } else {
            var_a0 = (s32) M2C_FIELD(D_00A7DD50, s8 *, 5);
            if (var_a0 == 2) {
                var_a2 = 0;
            } else {
block_19:
                var_a2 = -1;
            }
        }
        if (M2C_FIELD(((var_a2 * 0x101) + D_00A7DD50), s8 *, 8) != 0) {
            if (func_009C17C0((s8) var_a0, D_00A7DD50, var_a2) != 0) {
                var_v1 = M2C_FIELD(D_00A7DD50, s32 *, 0x11A8);
            } else {
                var_v1 = 0;
            }
            if (var_v1 != 0) {
                M2C_FIELD(D_00A7DD50, s8 *, 5) = 0;
                func_009C3C00(M2C_FIELD(D_00A7DD50, s8 *, 5));
                temp_a0 = M2C_FIELD(((M2C_FIELD(D_00A7DD50, s8 *, 5) * 4) + D_00A7DD50), s32 *, 0x420);
                if (temp_a0 == 0) {
                    func_0099C570(temp_a0);
                } else {
                    func_0099C660(temp_a0);
                }
            }
        }
    }
    M2C_FIELD(D_00A7DD50, s8 *, 4) = 0;
}
