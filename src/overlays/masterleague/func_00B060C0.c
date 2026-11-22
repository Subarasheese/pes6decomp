/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B7920(void);
extern u32 func_00B06560(void);
s32 SD_call(s32);
s32 func_002F3850(s32);
s32 func_00960FA0(s32);
extern void func_00B05F60(void);

s32 func_00B060C0(void) {
    u32 value;

    value = func_00B06560();
    if (value == 0) {
        return 0;
    }
    if (!(func_002F3850(M2C_FIELD(value, s32 *, 0x28)) == 2)) {
        return 0;
    }
    SD_call(0x84008401);
    func_00B05F60();
    func_00960FA0(1);
    func_001B7920();
    return 0;
}
