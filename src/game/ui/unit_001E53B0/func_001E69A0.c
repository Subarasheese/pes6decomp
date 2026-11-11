/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 D_0052B120[];
extern u8 D_0052B124[];
s32 Pes6Heap_Alloc(u8 *a, s32 b);
void func_001E69A0(u8 *arg0) {
    s32 r;
    if (arg0 == 0) {
        return;
    }
    *(u32 *)D_0052B120 = (u32)arg0;
    r = Pes6Heap_Alloc(arg0, 8);
    *(s32 *)D_0052B124 = r;
}
