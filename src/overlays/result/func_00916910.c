/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void Pes6Heap_Free(void *);
M2C_UNK func_0026B580(s32, M2C_UNK, s32);
extern void func_00910060(void);
M2C_UNK func_00C75330(s32);
extern char D_00923FCC[];

void func_00916910(s32 arg0) {
    func_0026B580((*(s32 *)D_00923FCC) + 0x3F4, 0x10, arg0);
    func_00910060();
    func_00C75330((*(s32 *)D_00923FCC) + 0x7C);
    Pes6Heap_Free(*(void **)D_00923FCC);
    (*(s32 *)D_00923FCC) = 0;
}
