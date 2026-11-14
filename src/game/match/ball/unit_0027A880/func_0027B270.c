/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001AC500(s32, s32);
extern void Pes6Heap_Free(void *);
extern void func_001514D0(void *);
extern void func_001A5A20(void *);
extern void *D_003E9CC0;

void func_0027B270(void *arg0, s32 arg1) {
    switch (M2C_FIELD(arg0, s32 *, 0xC)) {
    case 3:
        if (D_003E9CC0 != NULL) {
            func_001514D0(D_003E9CC0);
            Pes6Heap_Free(D_003E9CC0);
            D_003E9CC0 = NULL;
        }
        break;
    case 2:
        break;
    default:
        func_001AC500(arg1, 1);
        break;
    }
    func_001A5A20(arg0);
}
