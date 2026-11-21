/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_00270530(void *, void *);
extern char Pes6MatchPlayers[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24], gap at: 0x8. */
void func_00BB6AB0(s32 arg0, void *arg1, f32 fparg0) {
    f32 value;
    s32 value2;
    s32 value3;

    value2 = arg0 & 0xFF;
    if (value2 != 0xFF) {
        value3 = value2 % 23;
    } else {
        value3 = 1;
    }
    func_00270530(((char *)Pes6MatchPlayers) + (value3 * 0x240), arg1);
    value = -300.0f;
    if (fparg0 < -300.0f) {
        value = -300.0f + (-300.0f - fparg0);
        if (!(value <= -250.0f)) {
            value = -250.0f;
        }
    }
    M2C_FIELD(arg1, f32 *, 4) = value;
}
