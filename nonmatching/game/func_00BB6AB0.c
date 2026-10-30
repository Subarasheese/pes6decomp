/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00270530(void *, void *);              /* extern */
extern char Pes6MatchPlayers[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_00BB6AB0(s32 arg0, void *arg1, f32 fparg0) {
    f32 var_f1;
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    func_00270530(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), arg1);
    var_f1 = -300.0f;
    if (fparg0 < -300.0f) {
        var_f1 = -300.0f + (-300.0f - fparg0);
        if (!(var_f1 <= -250.0f)) {
            var_f1 = -250.0f;
        }
    }
    M2C_FIELD(arg1, f32 *, 4) = var_f1;
}
