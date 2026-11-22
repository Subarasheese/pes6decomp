/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013BBD0.c. See THIRD_PARTY.md. */
#include "pes6/pad_slot_state.h"
extern Pes6PadSlotState D_003F3250[][4];
extern Pes6PadDmaRecord *func_00111D48(s32 port, s32 slot, Pes6PadDmaRecord *out);
u8 func_001120D8(s32 port, s32 slot) {
    if (!D_003F3250[port][slot].open)
        return 0;
    return func_00111D48(port, slot, 0)->requestState;
}
