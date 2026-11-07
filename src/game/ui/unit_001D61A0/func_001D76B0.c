/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001D76B0(void *obj, u32 value) {
    if (obj == NULL) {
        return;
    }
    M2C_FIELD(obj, f32 *, 0x68) = value / 255.0f;
}
