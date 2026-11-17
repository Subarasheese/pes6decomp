/* compiler: mwcc-3.0.1b210 */
/* Written from the original assembly by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00CA9238[];
extern char D_00CA923C[];
extern char D_00CA9240[];

u32 Pes6Random_Below(s32 a);
void SD_call(s32 a);

void func_00C95630(void) {
    f32 arr[3];
    u16 idx;

    arr[0] = *(f32 *)D_00CA9238;
    arr[1] = *(f32 *)D_00CA923C;
    arr[2] = *(f32 *)D_00CA9240;
    idx = Pes6Random_Below(3);
    SD_call(((s32 *)arr)[idx]);
}
