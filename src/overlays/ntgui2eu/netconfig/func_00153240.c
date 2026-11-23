/* compiler: ee-gcc-2.9 */
#include "pes6/ntgui_collection_range.h"

typedef struct {
    u8 storage[0x14];
} RangeItem;

extern void func_00152DB8(void *, s32, s32);
extern void func_00153060(void *, s32);
extern void func_00152ED8(NtguiCollection *, const RangeItem *);

NtguiCollection func_00153240(NtguiCollection *source, s32 first, s32 last) {
    NtguiCollection range;
    s32 i;
    func_00152DB8(&range, last - first + 1, source->growth);
    /* Removing an entry may shift the items. The append uses the saved slot address. */
    for (i = first; i <= last; ++i) {
        RangeItem *item = &((RangeItem *)source->items)[i];
        func_00153060(source, i);
        func_00152ED8(&range, item);
    }
    return range;
}
