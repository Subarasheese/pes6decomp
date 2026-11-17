/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB2428[];
extern char D_00CB2430[];
extern char D_00CB2438[];
extern char D_00CB2440[];
extern char D_00CB2448[];
extern char D_00CB2450[];
extern char D_00CB2458[];

u8 func_00BD45B0(u16 arg0) {
    u8 idx = 0;
    u8 res = 7;
    u16 *tab;
    s32 n;
    s32 j;
    do {
        if (idx == 0) { tab = (u16 *)D_00CB2428; n = 2; }
        else if (idx == 1) { tab = (u16 *)D_00CB2430; n = 3; }
        else if (idx == 2) { tab = (u16 *)D_00CB2438; n = 3; }
        else if (idx == 3) { tab = (u16 *)D_00CB2440; n = 3; }
        else if (idx == 4) { tab = (u16 *)D_00CB2448; n = 3; }
        else if (idx == 5) { tab = (u16 *)D_00CB2450; n = 1; }
        else { tab = (u16 *)D_00CB2458; n = 1; }
        for (j = 0; j < n; j++) {
            if (tab[j] == arg0) {
                res = idx;
                break;
            }
        }
        if (res != 7) break;
        idx++;
    } while (idx < 7);
    return res;
}
