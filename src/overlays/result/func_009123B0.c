/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_00C75330(s32);
extern char D_00923FCC[];

void func_009123B0(void) {
    func_00C75330((*(s32 *)D_00923FCC) + 4);
    Pes6Heap_Free(*(void **)D_00923FCC);
    (*(s32 *)D_00923FCC) = 0;
}
