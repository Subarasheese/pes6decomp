/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad00[0x34];
    void *object;
} SelectionState;

extern SelectionState *func_00B0A1E0(void);
extern void func_002F4CE0(void *object, s32 value);

void func_00B07780(s32 value) {
    SelectionState *state = func_00B0A1E0();
    if (state && state->object) {
        func_002F4CE0(state->object, (u8)value);
    }
}
