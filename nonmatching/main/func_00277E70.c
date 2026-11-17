/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u32 func_00292D50();
extern char D_00591A90[];
extern char Pes6MatchSquads[];

void func_00277E70(void) {
    u8 *a4;
    char *a3;
    s32 n;
    s32 i;
    s32 j;

    n = func_00292D50() & 0xFF;
    a4 = (u8 *)D_00591A90;
    a3 = Pes6MatchSquads;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n; j++) {
            char *p = a3 + a4[j + 7] * 0x348;
            p[0xF8] = 0;
            p[0xF9] = 0;
        }
        a4 += 0x8B;
        a3 += 0x6900;
    }
}
