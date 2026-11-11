/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
void func_00145590(s32);
void Pes6Heap_Free(s32);

void func_001AC500(s32 id, s32 release) {
    s32 handle = func_001454C0(id);

    if (handle == 0) {
        return;
    }
    func_00145590(handle);
    if (release == 0) {
        return;
    }
    Pes6Heap_Free(handle);
}
