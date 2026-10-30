/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008D4F40(s32);                             /* extern */
M2C_UNK func_008D4F50(s32, s32 *);                  /* extern */
M2C_UNK func_008DE8A0(s32, s32, s32, s32, s32 *);   /* extern */

void func_008DF200(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp40;
    s32 *var_a0;
    s32 *var_a1;
    s32 var_v1;

    var_v1 = 0x241;
    var_a1 = arg0 + 0x208;
    var_a0 = &sp40;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 4;
        var_a0 += 4;
    } while (var_v1 > 0);
    func_008D4F50(arg0 + 0x1EF4, &sp40);
    func_008DE8A0(arg0, arg1, arg2, func_008D4F40(arg0 + 0x1EF4) - 1, &sp40);
}
