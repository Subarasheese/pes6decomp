/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00592AAC[];
extern char D_00592AB0[];
extern char D_00592AB4[];

void func_002CA620(s32 arg0, s32 arg1) {
    s32 value;
    s32 value2;

    value2 = arg1 * 0x348;
    value = arg0 * 0x6900;
    *((s32 *)(value2 + (((s8 *)D_00592AB4) + value))) = -1;
    *((s32 *)(value2 + (((s8 *)D_00592AB0) + value))) = -1;
    *((s32 *)(value2 + (((s8 *)D_00592AAC) + value))) = -1;
}
