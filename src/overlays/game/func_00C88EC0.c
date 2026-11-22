/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_001BB400(char *, char *);
s32 func_001BB4F0(s32, char *);
extern char D_00CCCE30[];
extern char D_00CCD088[];

void func_00C88EC0(u32 arg0, s32 arg1, s32 arg2) {
    char *temp_s2;

    if (((*(s32 *)D_00CCD088) != 0) && (arg0 < 0x21U)) {
        temp_s2 = ((char *)D_00CCCE30) + (arg0 << 5) + 0x25C;
        func_001BB400(temp_s2, temp_s2);
        func_001BB4F0((*(s32 *)D_00CCD088), temp_s2);
        M2C_FIELD(temp_s2, s32 *, 0x10) = arg1;
        M2C_FIELD(temp_s2, s32 *, 0x14) = arg2;
        M2C_FIELD(temp_s2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x1C) = 0;
    }
}
