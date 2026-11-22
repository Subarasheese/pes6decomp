/* compiler: ee-gcc-2.9-G0 */
/* Cross-match with OpenRAC/rac-deadlocked-decomp, src/core/0013BB18.c. See THIRD_PARTY.md. */
#include "pes6/pad_slot_state.h"
extern Pes6PadSlotState D_003F3250[][4];
extern Pes6PadDmaRecord *func_00111D48(s32 port, s32 slot, Pes6PadDmaRecord *out);
extern s32 DIntr(void), EIntr(void);
extern void SyncDCache(void *start, void *end);
s32 func_00112020(s32 port, s32 slot, s32 state) {
    s32 enabled;
    Pes6PadDmaRecord *current;
    if (!D_003F3250[port][slot].open)
        return 0;
    enabled = DIntr();
    current = func_00111D48(port, slot, 0);
    current->requestState = state;
    SyncDCache(current, (u8 *)current + sizeof(*current) - 1);
    if (enabled == 1)
        EIntr();
    return 1;
}
