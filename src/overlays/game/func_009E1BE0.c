/* compiler: mwcc-3.0.1b151 */
#pragma opt_strength_reduction off
#pragma opt_propagation off
#include "types.h"
extern u8 Pes6MatchFlow_State[10];
extern void *func_001C48E8(void *dst, s32 value, u32 length);
extern s32 func_002DCA30(void);
extern void func_00855120(const u8 *state);
void func_009E1BE0(const u8 *saved) {
    s32 level;
    for (level = 0; level < 10; ++level) {
        u8 *selected = &Pes6MatchFlow_State[level];
        *selected = saved[level];
        if (level < 9)
            func_001C48E8(selected + 1, 0, 10 - (level + 1));
        if (func_002DCA30())
            func_00855120(Pes6MatchFlow_State);
    }
}
