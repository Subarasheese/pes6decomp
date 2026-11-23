/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"
typedef struct {
    u8 storage[1200];
} RangeItem;

extern void func_00152030(NtguiCollection *, s32, s32);
extern void func_00152150(NtguiCollection *, const RangeItem *);
NtguiCollection func_001525E0(const NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_00152030(&range, last - first + 1, source->growth);
    for (i = first; i <= last; ++i) {
        func_00152150(&range, &((RangeItem *)source->items)[i]);
    }
    return range;
}
