/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA834;
extern char D_00CCBE3C[];

void func_00C770F0(s32 arg0) {
    char *temp_v1;

    temp_v1 = ((char *)D_00CCBE3C) + (D_003EA834 * 0x7C);
    M2C_FIELD(temp_v1, s32 *, 0) = arg0;
    M2C_FIELD(temp_v1, s32 *, 8) = arg0;
    M2C_FIELD(temp_v1, s32 *, 0x10) = arg0;
    M2C_FIELD(temp_v1, s32 *, 0x18) = arg0;
}
