/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 pad00[0xc];
    s32 state;
    u8 pad10[4];
    s32 mode;
    u8 pad18[0x14];
    u32 enabled;
    u8 pad30[8];
    union {
        u32 flags;
        u8 low;
    } input;
} Status;
s32 func_00367E20(Status *status) {
    s32 result;
    if (status->enabled & 1) {
        if (status->state == 1)
            return 1;
        if (status->mode == 3)
            return 1;
        result = (status->input.flags & 0x21f) != 0;
    } else {
        if (status->mode == 3)
            return 1;
        result = status->input.low != 0;
    }
    return result;
}
