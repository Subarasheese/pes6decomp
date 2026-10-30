/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00627330(s32, s32);
extern void func_002E9370(int);
M2C_UNK func_00624470(s32, M2C_UNK);                /* extern */
M2C_UNK func_00624490(s32, void *);                 /* extern */
s32 func_00627430(s32, s32);                        /* extern */
extern void *D_0065EF88;

void func_00626C90(s32 arg0) {
    void *spA0;
    s32 temp_v0;
    s32 var_s4;
    s32 var_s6;
    u8 var_v1;
    void *var_a1;
    void *var_fp;
    void *var_s0;
    void *var_s1;
    void *var_s2;
    void *var_s7;

    var_fp = NULL;
    var_s7 = NULL;
    spA0 = NULL;
    switch (arg0) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s6 = 0x23;
        var_s7 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x13C);
block_8:
        var_s4 = 0;
        if (var_s6 > 0) {
            var_s0 = spA0;
            var_s2 = var_s7;
            var_s1 = var_fp;
loop_10:
            temp_v0 = func_00627430(var_s4, arg0);
            if ((temp_v0 < 0x24) && (func_00627330(temp_v0, arg0) != 0)) {
                switch (arg0) {                     /* switch 2; irregular */
                case 1:                             /* switch 2 */
                    var_v1 = M2C_FIELD((var_s7 + var_s4), u8 *, 0x857);
                    var_a1 = var_s2;
block_21:
                    if (var_v1 != 0) {
                        func_00624490(temp_v0, var_a1);
                        func_00624470(temp_v0, 1);
                        func_002E9370(0x1000);
                    }
                    goto block_23;
                case 2:                             /* switch 2 */
                    var_v1 = M2C_FIELD((var_fp + var_s4), u8 *, 0x726);
                    var_a1 = var_s1;
                    goto block_21;
                case 3:                             /* switch 2 */
                    var_v1 = M2C_FIELD((spA0 + var_s4), u8 *, 0x857);
                    var_a1 = var_s0;
                    goto block_21;
                }
            } else {
block_23:
                var_s4 += 1;
                var_s2 += 0x3D;
                var_s1 += 0x3D;
                var_s0 += 0x3D;
                if (var_s4 >= var_s6) {

                } else {
                    goto loop_10;
                }
            }
        } else {
            return;
        }
        break;
    case 2:                                         /* switch 1 */
        var_s6 = 0x1E;
        var_fp = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x134);
        goto block_8;
    case 3:                                         /* switch 1 */
        var_s6 = 0x23;
        spA0 = D_0065EF88 + M2C_FIELD(D_0065EF88, s32 *, 0x13C);
        goto block_8;
    }
}
