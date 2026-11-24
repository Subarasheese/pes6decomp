/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s32 effect, value;
} CueEffect;
typedef struct {
    s32 opcode;
    CueEffect effects[2];
} EffectCommand;
extern u8 D_005E2FD4[];
extern void func_002ABE20(void *, u8, f32);
s32 func_002B9FD0(const EffectCommand *c) {
    s32 i;
    for (i = 0; i < 2; ++i) {
        if (c->effects[i].effect)
            func_002ABE20(D_005E2FD4, (u8)c->effects[i].effect, 0.001f * (f32)c->effects[i].value);
    }
    return 0;
}
