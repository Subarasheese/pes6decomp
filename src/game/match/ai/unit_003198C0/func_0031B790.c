/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_SetPayloadWord(void *, s32, s32);
void *Pes6Job_Create(M2C_UNK, char *, M2C_UNK, char *);
extern char D_003E1510[];
extern char func_0031B5D0[];

s32 func_0031B790(void *arg0) {
    s32 temp_v1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
        return 0;
    }
    if (M2C_FIELD(temp_s0, u8 *, 0x78) == M2C_FIELD(temp_s0, u8 *, 0xB8)) {
        return 0;
    }
    temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x74);
    if ((temp_v1 != 5) && (temp_v1 != 4)) {
        return 0;
    }
    Pes6Job_SetPayloadWord(Pes6Job_Create(0x80000002, func_0031B5D0, 7, D_003E1510), (s32) temp_s0, 0);
    return 1;
}
