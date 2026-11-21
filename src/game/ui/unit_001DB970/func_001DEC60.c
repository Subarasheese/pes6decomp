/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_001DEC60(void *arg0, void *arg1) {
    f32 value;
    u8 value2;
    int value3;
    u8 value4;
    u8 value5;
    f32 value6;
    void *entry;
    if ((arg0 != 0) && (arg1 != 0)) {
        entry = *(*((void ***)(((s8 *)arg0) + 0)));
        value5 = *((u8 *)(((s8 *)entry) + 2));
        if (((s32)(*((u8 *)(((s8 *)entry) + 2)))) <= (0 - 1)) {
            value = 2.f * ((f32)((value5 >> 1) | (value5 & 1)));
        } else {
            ;
        }
        *((s16 *)(((s8 *)arg1) - -0)) = (s16)((s32)(((f32)(*((u8 *)(((s8 *)entry) + 2)))) *
                                                    (value6 = *((f32 *)(((s8 *)arg0) + 0x34)))));
        value3 = 0x38;
        value4 = *((u8 *)(((s8 *)entry) + 3));
        value2 = value4;
        if (((s32)value2) < 0) {
            value6 = 2.0f * ((f32)((value2 >> 1) | (value2 & 1)));
        } else {
            ;
        }
        *((s16 *)(((s8 *)arg1) + 2)) =
            (s16)((s32)(((f32)value2) * (*((f32 *)(((s8 *)arg0) + value3)))));
    }
}
