/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 Pes6MatchFlow_State[10];
extern void *func_001C48E8(void *dst, int value, u32 size);
extern s32 func_002DCA30(void);
extern void func_00855120(const u8 *state);
void Pes6MatchFlow_SetState(s32 level, s8 state) {
    u8 *selected = &Pes6MatchFlow_State[level];
    *selected = state;
    if (level < 9)
        func_001C48E8(selected + 1, 0, 10 - (level + 1));
    if (func_002DCA30())
        func_00855120(Pes6MatchFlow_State);
}
