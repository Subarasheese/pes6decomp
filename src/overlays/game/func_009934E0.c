/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_0098F7E0(u8 *);
extern s32 func_00992DF0(s32, float, float);

extern void *Pes6BallOwnerRecord;

s32 func_009934E0(s8 *arg0) {
    s32 value;
    u8 value2;
    s8 *entry;

    if (func_0098F7E0((u8 *)arg0) == 0) {
        if ((func_00992DF0((s32)M2C_FIELD(arg0, u8 *, 0x13), M2C_FIELD(arg0, f32 *, 0xE0),
                           M2C_FIELD(arg0, f32 *, 0xE8)) &
             0xFF) == 1) {
            value = 0;
            entry = Pes6BallOwnerRecord;
            for (;;) {
                if (M2C_FIELD(entry, u8 *, 8) == M2C_FIELD(arg0, u8 *, 0)) {
                    if (M2C_FIELD(entry, s32 *, 4) == 4) {
                        value2 = M2C_FIELD(entry, u8 *, 0x2C);
                        if ((((u64)(value2) << 0x3D) >> 0x3F) != 0) {
                            return 1;
                        }
                        if ((((u64)(value2) << 0x3E) >> 0x3F) != 0) {
                            return 1;
                        }
                        value += 1;
                        entry += 0x40;
                        if (value >= 0xA) {
                            return 0;
                        }
                        continue;
                    }
                    return 0;
                }
                break;
            }
            return 0;
        }
        return 0;
    }

    return 0;
}
