/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002E19F0(void *, f32);

void func_002DF6E0(u8 *obj, f32 value) {
    if (obj == NULL) {
        return;
    }
    func_002E19F0(obj + 0x28, value);
    func_002E19F0(obj + 0x4C, -1.0f + value);
}
