/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00BC65A0(M2C_UNK);
extern char D_00CEB910[];

void func_00BFE350(void) {
    if ((*(s32 *)D_00CEB910) != 0) {
        Pes6Heap_Free(*(void **)D_00CEB910);
        (*(s32 *)D_00CEB910) = 0;
    }
    func_00BC65A0(6);
}
