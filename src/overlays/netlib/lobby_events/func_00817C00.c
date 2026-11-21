/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_002F4E10(s32);
s32 func_00815100(s32 *);
extern s32 func_008153B0(void);
extern s32 func_00815450(void);
extern char D_00888330[];
extern char D_008A3C78[];
extern char D_008A3C80[];
extern char D_008A3C88[];
extern char D_008A3C90[];
extern char D_008A3C98[];

s32 func_00817C00(void) {
    char *entry;
    s32 value;
    if (((*((s32 *)D_008A3C78)) != 0)) {
        *((s32 *)D_008A3C88) = 1;
        value = 0;
    } else {
        value = 1;
    }
    if (value == 0) {
        func_002F4E10(*((s32 *)D_008A3C98));
        entry = D_008A3C98;
        *((s32 *)D_008A3C90) = (*((s32 *)entry) = 0);
        *((s32 *)D_008A3C78) = 0;
        if (((*((s32 *)D_008A3C80)) == 1) && ((func_00815450() != 0) || (0 != func_008153B0()))) {
            func_00815100((void *)D_00888330);
        }
        *((s32 *)D_008A3C80) = 0;
        *((s32 *)D_008A3C88) = 0;
    }
    return 0;
}
