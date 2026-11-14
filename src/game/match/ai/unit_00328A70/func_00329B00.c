/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_CopyPayloadOut(s32, void *);
extern s32 Pes6Job_Create(s32, char *, s32, char *);
extern char D_003E17B0[];
extern char func_00329940[];

s32 func_00329B00(u8 *arg0) {
    u8 *temp_a0;

    temp_a0 = *(u8 **)(arg0 + 0x3C);
    if (temp_a0[8] == 0) return 0;
    if (temp_a0[0x79] != 0x10) return 0;
    if (temp_a0[0x78] == 0xFF) return 0;
    if (*(s32 *)(temp_a0 + 0x74) == 3) return 0;
    Pes6Job_CopyPayloadOut(Pes6Job_Create(0x80000012, func_00329940, 7, D_003E17B0), arg0);
    return 1;
}