/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_001DA380(s32), func_001D9FF0(s32);
extern void *func_00153FE0(void *, s32), *func_001D9F70(s32);
extern void func_001DA070(s32, void *), Pes6Heap_Free(void *);
s32 func_002CA910(s32 id, void *data) {
    if (func_001DA380(id)) {
        void *replacement = func_00153FE0(data, func_001D9FF0(id));
        void *old = func_001D9F70(id);
        func_001DA070(id, replacement);
        Pes6Heap_Free(old);
        return 1;
    }
    return 0;
}
