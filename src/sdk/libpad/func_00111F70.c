/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013BA98.c. See THIRD_PARTY.md. */
#include "pes6/pad_slot_state.h"
extern Pes6PadSlotState D_003F3250[][4];
extern Pes6PadDmaRecord *func_00111D48(s32 port, s32 slot, Pes6PadDmaRecord *out);
s32 func_00111F70(s32 port, s32 slot) {
    Pes6PadDmaRecord current;
    if (!D_003F3250[port][slot].open)
        return 0x63;
    func_00111D48(port, slot, &current);
    if (((u8 *)&current)[0x70] == 6 && ((u8 *)&current)[0x71] == 2)
        return 5;
    return ((u8 *)&current)[0x70];
}
