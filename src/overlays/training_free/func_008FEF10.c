/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void Pes6Heap_Free(void *);
extern s32 func_00154540(void);
extern void func_0026AEC0(void);
extern void func_008FAE10(void);
extern void func_008FB750(void);
extern s32 D_003AE994[];
extern char D_003AE9D0[];

s32 func_008FEF10(void) {
    func_008FB750();
    func_0026AEC0();
    func_008FAE10();
    Pes6Heap_Free(*(void **)D_003AE9D0);
    (*(s32 *)D_003AE9D0) = 0;
    D_003AE994[0] = func_00154540() & 0xFF;
    return 1;
}
