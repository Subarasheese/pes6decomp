/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"

typedef struct {
    u8 storage[0x4c4];
} RangeItem;

extern void func_0012A2B0(void *, s32, s32);
extern void func_0012A6F8(void *, s32);
extern void func_0012A3D0(NtguiCollection *, const RangeItem *);

NtguiCollection func_0012A8D8(NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_0012A2B0(&range, last - first + 1, source->growth);
    /* Removing an entry may shift the items. The append uses the saved slot address. */
    for (i = first; i <= last; ++i) {
        RangeItem *item = &((RangeItem *)source->items)[i];
        func_0012A6F8(source, i);
        func_0012A3D0(&range, item);
    }
    return range;
}
