/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_0051FF48[];
extern char D_0051FF49[];
extern char D_0051FF51[];
extern char D_00520090[];

s32 func_00188AC0(s32 arg0, s32 *arg1) {
    s32 *entry;
    s32 value;

    if (arg0 == 0) {
        value = *(u8 *)D_0051FF49;
    } else {
        value = *(u8 *)D_0051FF48;
    }
    if (value == 0) {
        return 0;
    }
    if (arg0 == 1) {
        if (*(u8 *)D_0051FF51 != 0) {
            entry = *(s32 **)(*(char **)D_00520090 + 0x30);
        } else {
            entry = *(s32 **)(*(char **)D_00520090 + 0x28);
        }
    } else {
        entry = *(s32 **)(*(char **)D_00520090 + 0x2C);
    }
    *arg1 = (s32)(entry + 1);
    return *entry;
}
