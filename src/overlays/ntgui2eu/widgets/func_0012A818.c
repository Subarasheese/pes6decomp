/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"
typedef struct {
    u8 storage[1220];
} RangeItem;

extern void func_0012A2B0(NtguiCollection *, s32, s32);
extern void func_0012A3D0(NtguiCollection *, const RangeItem *);
NtguiCollection func_0012A818(const NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_0012A2B0(&range, last - first + 1, source->growth);
    for (i = first; i <= last; ++i) {
        func_0012A3D0(&range, &((RangeItem *)source->items)[i]);
    }
    return range;
}
