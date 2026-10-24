/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005E2FB4[];
extern char D_005E2FB8[];
extern char D_005E2FC0[];

s32 func_002BAAB0(void *record) {
    (*(f32 *)D_005E2FB4) = 0.001f * (f32) M2C_FIELD(record, s32 *, 4);
    (*(f32 *)D_005E2FB8) = 0.001f * (f32) M2C_FIELD(record, s32 *, 8);
    (*(s8 *)D_005E2FC0) = (s8) M2C_FIELD(record, s32 *, 0xC);
    return 0;
}
