/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void Pes6Heap_Free(void *);
s32 func_00820C60(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    func_001F1EA0(M2C_FIELD(arg0, void **, 0));
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    Pes6Heap_Free(arg0);
    return 0;
}
