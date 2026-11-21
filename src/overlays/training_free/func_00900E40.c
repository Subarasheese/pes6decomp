/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(void *);
extern void func_0026AEC0(void);
extern char D_003AE9D0[];

s32 func_00900E40(void) {
    func_0026AEC0();
    Pes6Heap_Free(*(void **)D_003AE9D0);
    (*(s32 *)D_003AE9D0) = 0;
    return 1;
}
