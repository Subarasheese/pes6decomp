/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_005EFFA0[];
extern char D_005EFFA8[];

void func_0032EB70(u32 arg0) {
    u32 *mt = (u32 *)D_005EFFA8;
    u32 i;

    mt[0] = arg0;
    i = 1;
    do {
        mt[i]     = 0x6C078965 * (mt[i - 1] ^ (mt[i - 1] >> 30)) + i;
        mt[i + 1] = 0x6C078965 * (mt[i]     ^ (mt[i]     >> 30)) + i + 1;
        mt[i + 2] = 0x6C078965 * (mt[i + 1] ^ (mt[i + 1] >> 30)) + i + 2;
        mt[i + 3] = 0x6C078965 * (mt[i + 2] ^ (mt[i + 2] >> 30)) + i + 3;
        mt[i + 4] = 0x6C078965 * (mt[i + 3] ^ (mt[i + 3] >> 30)) + i + 4;
        mt[i + 5] = 0x6C078965 * (mt[i + 4] ^ (mt[i + 4] >> 30)) + i + 5;
        mt[i + 6] = 0x6C078965 * (mt[i + 5] ^ (mt[i + 5] >> 30)) + i + 6;
        mt[i + 7] = 0x6C078965 * (mt[i + 6] ^ (mt[i + 6] >> 30)) + i + 7;
        i += 8;
    } while ((s32)i < 0x268);
    for (; i < 624; i++) {
        mt[i] = 0x6C078965 * (mt[i - 1] ^ (mt[i - 1] >> 30)) + i;
    }
    *(s32 *)(D_005EFFA0 + 0x9C8) = 1;
    *(s32 *)D_005EFFA0 = 1;
}
