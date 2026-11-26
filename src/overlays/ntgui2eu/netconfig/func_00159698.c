/* compiler: ee-gcc-2.9 */
#include "types.h"
typedef struct {
    void *source;
    u32 destination;
    u32 size, attributes;
} SifDmaTransfer;
extern void func_0019B3A0(s32);
extern u32 func_0019B4E0(SifDmaTransfer *transfers, s32 count);
u32 func_00159698(void *source, u32 destination, u32 size, u32 attributes) {
    SifDmaTransfer transfer;
    u32 rounded, base;
    transfer.source = source;
    transfer.destination = destination;
    base = size & ~15u;
    rounded = base + 16;
    if ((size & 15) == 0)
        rounded = base;
    transfer.size = rounded;
    transfer.attributes = attributes;
    func_0019B3A0(0);
    return func_0019B4E0(&transfer, 1);
}
