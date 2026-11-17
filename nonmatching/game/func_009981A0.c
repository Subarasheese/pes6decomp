/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00591E4D[];
extern char D_005926FF[];
extern char D_00592800[];
extern char D_00592942[];

void func_009981A0(void) {
    u8 *p;
    s32 i;

    if (((*(u8 *)D_005926FF) != 5) && ((*(u8 *)D_005926FF) != 2) && ((*(u8 *)D_005926FF) != 3) && ((*(u8 *)D_005926FF) != 4) && ((*(u8 *)D_005926FF) != 1)) {
        return;
    }
    *(u8 *)D_00592942 = 0xFF;
    p = (u8 *)D_00592800;
    for (i = 0; i < 8; i++) {
        p[0x11] = p[0x10];
        if (*(u8 *)D_00591E4D == p[0x10]) {
            *(u8 *)D_00592942 = i;
        }
        p += 0x28;
    }
}
