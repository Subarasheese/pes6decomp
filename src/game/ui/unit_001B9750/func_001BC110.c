/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
extern void *Pes6Heap_Alloc(s32, s32);
extern void func_001BB710(s32);
extern s32 func_001BB730(void);

s32 func_001BC110(void) {
    s32 *var_s0;
    s32 temp_v0;

    var_s0 = Pes6Heap_Alloc(1, 4);
    if (var_s0 != NULL) {
        temp_v0 = func_001BB730();
        if (temp_v0 != 0) {
            *var_s0 = temp_v0;
        } else {
            func_001BB710(temp_v0);
            Pes6Heap_Free(var_s0);
            var_s0 = NULL;
        }
    }
    return (s32)var_s0;
}
