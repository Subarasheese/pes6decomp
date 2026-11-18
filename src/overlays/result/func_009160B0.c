/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00C75330(s32);
M2C_UNK Pes6Heap_Free(s32);
extern char D_00923FCC[];

void func_009160B0(void) {
    func_00C75330((*(s32 *)D_00923FCC));
    Pes6Heap_Free((*(s32 *)D_00923FCC));
    (*(s32 *)D_00923FCC) = 0;
}
