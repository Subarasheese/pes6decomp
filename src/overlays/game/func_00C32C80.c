/* compiler: mwcc-3.0.1b151 */
#include "pes6/match_event_index.h"
extern void *func_001C48E8(void *, s32, u32);
void func_00C32C80(void) {
    s32 i;
    D_003EA7F0 = &D_00CCB350;
    func_001C48E8(&D_00CCB350, 0, sizeof(D_00CCB350));
    for (i = 0; i < 121; ++i)
        D_00CCB350.minute[i] = NO_EVENT;
    for (i = 0; i < 4; ++i)
        D_00CCB350.period[i] = NO_EVENT;
    for (i = 0; i < 32; ++i) {
        D_00CCB350.sideEvent[0][i] = NO_EVENT;
        D_00CCB350.sideEvent[1][i] = NO_EVENT;
    }
}
