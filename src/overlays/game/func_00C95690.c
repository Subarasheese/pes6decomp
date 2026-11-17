/* compiler: mwcc-3.0.1b210 */
/* Written from the original assembly by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void SD_call(s32);
extern char D_00CA9230[];
extern char D_00CA9234[];

void func_00C95690(void) {
    f32 t[2];
    t[0] = *(f32 *)D_00CA9230;
    t[1] = *(f32 *)D_00CA9234;
    SD_call(((s32 *)t)[(u16)Pes6Random_Below(2)]);
}
