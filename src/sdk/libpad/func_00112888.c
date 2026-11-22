/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013C190.c. See THIRD_PARTY.md. */
#include "pes6/pad_slot_state.h"
extern Pes6PadSlotState D_003F3250[][4];
extern Pes6PadDmaRecord *func_00111D48(s32 port, s32 slot, Pes6PadDmaRecord *out);
s32 func_00112888(s32 port, s32 slot) {
    Pes6PadDmaRecord current;
    if (D_003F3250[port][slot].open) {
        func_00111D48(port, slot, &current);
        if (current.currentTask == 1)
            goto check_modes;
    }
unavailable:
    return 0;
check_modes:
    if (current.modeCount < 2 || !(current.modeFlags & 2))
        goto unavailable;
    return 1;
}
