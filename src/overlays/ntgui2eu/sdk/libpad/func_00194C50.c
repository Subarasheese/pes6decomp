/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013BB18.c. See THIRD_PARTY.md. */
#include "pes6/pad_slot_state.h"
extern Pes6PadSlotState D_011FD510[][4];
extern Pes6PadDmaRecord *func_00194978(s32 port, s32 slot, Pes6PadDmaRecord *out);
extern s32 func_001A4728(void), func_001A4778(void);
extern void func_0019BA18(void *start, void *end);
s32 func_00194C50(s32 port, s32 slot, s32 state) {
    s32 enabled;
    Pes6PadDmaRecord *current;
    if (!D_011FD510[port][slot].open)
        return 0;
    enabled = func_001A4728();
    current = func_00194978(port, slot, 0);
    current->requestState = state;
    func_0019BA18(current, (u8 *)current + sizeof(*current) - 1);
    if (enabled == 1)
        func_001A4778();
    return 1;
}
