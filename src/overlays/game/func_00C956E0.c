/* compiler: mwcc-3.0.1b210 */
/* Written from the original assembly by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

s32 Pes6Random_Below(s32);
void SD_call(s32);
extern char D_00CA9220[];
extern char D_00CA9224[];
extern char D_00CA9228[];

void func_00C956E0(void) {
    f32 t[3];
    t[0] = *(f32 *)D_00CA9220;
    t[1] = *(f32 *)D_00CA9224;
    t[2] = *(f32 *)D_00CA9228;
    SD_call(((s32 *)t)[(u16)Pes6Random_Below(3)]);
}
