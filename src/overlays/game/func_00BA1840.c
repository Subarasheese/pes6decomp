/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void *func_001454C0(s32);
extern void func_00145590(void *), Pes6Heap_Free(void *);
void func_00BA1840(s32 count, const s32 *ids) {
    s32 i = 0;
    void *entry;
    if ((count > 0) != 0U) {
        const s32 *cursor = ids;
        do {
            entry = func_001454C0(*cursor);
            if (entry != 0) {
                func_00145590(entry);
                Pes6Heap_Free(entry);
            }
            i++;
            cursor++;
        } while (i < count);
    }
}
