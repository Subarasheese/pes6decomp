/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

f32 func_00131B60(void);
void func_00131A40(s32, u8 *, f32);

void func_001AFD80(s32 target, u8 *data) {
    u8 *body = data + M2C_FIELD(data, u16 *, 0x18);

    func_00131A40(target, body, func_00131B60());
}
