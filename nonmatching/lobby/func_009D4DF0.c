/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_00828050(s32);                             /* extern */
s32 func_00828160();                                /* extern */
s32 func_00965A30(s32);                             /* extern */
s32 func_00965C10(s32);                             /* extern */
M2C_UNK func_009D0A70(s32, s8);                     /* extern */
M2C_UNK func_009D1190(s32 *);                       /* extern */
M2C_UNK func_009D4BC0(s32, s32 *);                  /* extern */
extern void *D_00A7DE10;

void func_009D4DF0(void) {
    s32 sp40;
    s32 temp_v0;
    s32 var_s2;
    s8 var_s1;

    var_s2 = 0;
loop_22:
    if (var_s2 < (s32) M2C_FIELD(D_00A7DE10, u8 *, 5)) {
        func_001C48E8(&sp40, 0, 0x24);
        func_009D4BC0(var_s2, &sp40);
        func_009D1190(&sp40);
        var_s1 = 0;
        if (sp40 != 0) {
            if ((M2C_FIELD(D_00A7DE10, s32 *, 8) & 1) && (sp40 == func_00828160())) {
                var_s1 = 1;
            }
            if ((M2C_FIELD(D_00A7DE10, s32 *, 8) & 0x10) && (sp40 != func_00828160())) {
                var_s1 = 1;
            }
            if ((M2C_FIELD(D_00A7DE10, s32 *, 8) & 2) && (sp40 != func_00828160()) && (func_00828050(sp40) == 0)) {
                var_s1 = 1;
            }
            if ((M2C_FIELD(D_00A7DE10, s32 *, 8) & 4) && (func_00965C10(var_s2) == 0)) {
                temp_v0 = func_00965A30(var_s2);
                if ((temp_v0 != 3) && (temp_v0 != 0)) {

                } else {
                    var_s1 = 1;
                }
            }
        }
        if ((M2C_FIELD(D_00A7DE10, s32 *, 8) & 8) && (func_00965A30(var_s2) == 3)) {
            var_s1 = 1;
        }
        M2C_FIELD((D_00A7DE10 + var_s2), s8 *, 0x2C) = var_s1;
        func_009D0A70(sp40, var_s1);
        var_s2 += 1;
        goto loop_22;
    }
}
