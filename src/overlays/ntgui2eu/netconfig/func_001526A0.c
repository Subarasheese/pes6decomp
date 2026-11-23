/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"

typedef struct {
    u8 storage[0x4b0];
} RangeItem;

extern void func_00152030(void *, s32, s32);
extern void func_001524C0(void *, s32);
extern void func_00152150(NtguiCollection *, const RangeItem *);

NtguiCollection func_001526A0(NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_00152030(&range, last - first + 1, source->growth);
    /* Removing an entry may shift the items. The append uses the saved slot address. */
    for (i = first; i <= last; ++i) {
        RangeItem *item = &((RangeItem *)source->items)[i];
        func_001524C0(source, i);
        func_00152150(&range, item);
    }
    return range;
}
