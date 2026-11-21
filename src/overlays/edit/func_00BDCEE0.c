/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00BC65A0(M2C_UNK);
extern char D_00CE57F0[];

void func_00BDCEE0(void) {
    Pes6Heap_Free(*(void **)D_00CE57F0);
    (*(s32 *)D_00CE57F0) = 0;
    func_00BC65A0(0xB);
}
