/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00209D90(s32, s32, s32, s32);      /* extern */
extern char D_003D41D0[];
extern char D_00537A40[];

void func_0020B690(s32 arg0) {
    s32 var_v0;
    u32 i;

    var_v0 = 0;
    for (i = 0; i < 2; i++) {
        if (arg0 == *(s32 *)(D_003D41D0 + i * 8)) {
            var_v0 = *(s32 *)(D_003D41D0 + 4 + i * 8);
            break;
        }
    }
    if (var_v0 == 0) {
        func_00209D90(*(s32 *)D_00537A40, *(s32 *)(D_00537A40 + 8 + arg0 * 12), *(s32 *)(D_00537A40 + 4 + arg0 * 12), 0);
    }
}
