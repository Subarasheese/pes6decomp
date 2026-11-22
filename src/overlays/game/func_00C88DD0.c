/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CCCE30[];
extern char D_00CCD074[];
extern char D_00CCD07E[];
extern char D_00CCD088[];

void func_00C88DD0(s32 arg0, s8 *arg1, s8 *arg2) {
    char *temp_v1;

    if (((*(s32 *)D_00CCD088) != 0) && ((u32) arg0 < 0x21U)) {
        temp_v1 = ((char *)D_00CCCE30) + (arg0 << 5);
        M2C_FIELD(temp_v1, s8 **, 0x274) = arg1;
        M2C_FIELD(temp_v1, s8 **, 0x278) = arg2;
        if (arg1 != NULL) {
            ((s32 (*)(u64)) arg1)((u64) ((s64) (*(u8 *)D_00CCD074) << 0x3D) >> 0x3F);
        }
        if (arg2 != NULL) {
            ((s32 (*)(s16)) arg2)((*(s16 *)D_00CCD07E));
        }
    }
}
