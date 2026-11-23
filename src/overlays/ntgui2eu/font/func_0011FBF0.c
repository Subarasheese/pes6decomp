/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"

typedef struct {
    u8 storage[0x1c];
} RangeItem;

extern void func_0011F738(void *, s32, s32);
extern void func_0011FA10(void *, s32);
extern void func_0011F858(NtguiCollection *, const RangeItem *);

NtguiCollection func_0011FBF0(NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_0011F738(&range, last - first + 1, source->growth);
    /* Removing an entry may shift the items. The append uses the saved slot address. */
    for (i = first; i <= last; ++i) {
        RangeItem *item = &((RangeItem *)source->items)[i];
        func_0011FA10(source, i);
        func_0011F858(&range, item);
    }
    return range;
}
