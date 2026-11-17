/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern char D_00C9F250[];
extern char D_00C9F230[];

s32 func_00C22A60(void) {
    s32 loc[34];
    s32 *src = (s32 *)D_00C9F250;
    s32 i, k;
    u32 m = 0;
    u32 v;
    u32 a;
    for (i = 0; i < 17; i++) {
        loc[i * 2] = src[i * 2];
        loc[i * 2 + 1] = src[i * 2 + 1];
    }
    for (k = 0; k < 2; k++) {
        v = *(u32 *)(D_00C9F230 + (k & 0xFF) * 4 + 4);
        if (v < 9) m = (m | (1 << v)) & 0xFFFF;
    }
    a = m & 0xFFFF;
    for (i = 0; i < 17; i++) {
        if (((a & *(s16 *)((char *)loc + i * 8 + 4)) & 0xFFFF) == a) {
            *(s32 *)D_00C9F230 = loc[i * 2];
            return 1;
        }
    }
    return 0;
}
