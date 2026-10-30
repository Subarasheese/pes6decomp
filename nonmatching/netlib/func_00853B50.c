/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001105C8();                                /* extern */
M2C_UNK func_00110E58(s32, s32 *, s32 *);           /* extern */
M2C_UNK func_00853DD0(void *, s32);                 /* extern */
extern void *D_008B1DE8;
extern char D_008B1DF4[];
extern char D_008B1DF6[];
extern char D_008B1DF7[];

s32 func_00853B50(s8 arg0, s8 arg1, s8 arg2, s8 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 sp98;
    s32 sp9C;
    s32 temp_a1;
    void *temp_s0;

    if ((*(s8 *)D_008B1DF7) == 0) {
        temp_s0 = D_008B1DE8;
        if (temp_s0 != NULL) {
            M2C_FIELD(temp_s0, s32 *, 0x1C) = arg5;
            func_00110E58(func_001105C8(), &sp9C, &sp98);
            temp_a1 = sp98 / 1000;
            M2C_FIELD(temp_s0, s32 *, 0x20) = (s32) (temp_a1 + (sp9C * 0x3E8));
            M2C_FIELD(temp_s0, s8 *, 0x24) = arg3;
            M2C_FIELD(temp_s0, s8 *, 0xC) = arg0;
            M2C_FIELD(temp_s0, s8 *, 0xD) = arg1;
            M2C_FIELD(temp_s0, s8 *, 0xE) = arg2;
            M2C_FIELD(temp_s0, s16 *, 0x10) = arg4;
            M2C_FIELD(temp_s0, s32 *, 0x14) = arg6;
            M2C_FIELD(temp_s0, s32 *, 0x18) = arg7;
            func_00853DD0(temp_s0, temp_a1);
            (*(s8 *)D_008B1DF6) = 1;
            (*(s8 *)D_008B1DF4) += 1;
            return 0;
        }
    }
    return -1;
}
