/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"

typedef struct {
    u8 storage[0x258];
} RangeItem;

extern void func_00154650(void *, s32, s32);
extern void func_00154B10(void *, s32);
extern void func_00154770(NtguiCollection *, const RangeItem *);

NtguiCollection func_00154CF0(NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_00154650(&range, last - first + 1, source->growth);
    /* Removing an entry may shift the items. The append uses the saved slot address. */
    for (i = first; i <= last; ++i) {
        RangeItem *item = &((RangeItem *)source->items)[i];
        func_00154B10(source, i);
        func_00154770(&range, item);
    }
    return range;
}
