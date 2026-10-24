/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 flags;
    u8 padding[2];
    u8 value;
} PartialState;
void func_002AD0B0(PartialState *state, u8 value) {
    if (state->value != (value & 0xFF)) {
        state->value = value;
        state->flags &= 0xFD;
    }
}
