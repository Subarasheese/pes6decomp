/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"
typedef struct {
    u8 storage[28];
} RangeItem;

extern void func_0011F738(NtguiCollection *, s32, s32);
extern void func_0011F858(NtguiCollection *, const RangeItem *);
NtguiCollection func_0011FB30(const NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_0011F738(&range, last - first + 1, source->growth);
    for (i = first; i <= last; ++i) {
        func_0011F858(&range, &((RangeItem *)source->items)[i]);
    }
    return range;
}
