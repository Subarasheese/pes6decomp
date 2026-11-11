/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s8 padding;
    s8 value;
    s8 tail[20];
} PartialEntry;
/* Partial layout for the byte field used by this setter. */
typedef struct {
    u8 header[0x1E6];
    PartialEntry entries[32];
} PartialState;
PartialState *func_002260F0(s32);
s32 Pes6SaveData_IsUnavailable(void);

void func_002247E0(s32 context, s32 index, s8 value) {
    s32 slot;
    PartialState *state;

    state = func_002260F0(context);
    if ((Pes6SaveData_IsUnavailable() != 1) && (state != 0)) {
        slot = index & 0xFF;
        if (slot < 0x20) {
            state->entries[slot].value = value;
        }
    }
}
