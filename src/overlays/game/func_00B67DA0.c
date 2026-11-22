/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001C02F0(s32);
s32 func_009B3070(u16, u16);

s32 func_00B67DA0(void **arg0) {

    void *entry;

    entry = *arg0;
    if (!((f32)func_001C02F0(
              func_009B3070(M2C_FIELD(entry, u16 *, 0x26), M2C_FIELD(entry, u16 *, 0x2C)) &
              0xFFFF) < 18204.445f)) {
        return 0;
    }
    return 1;
}
