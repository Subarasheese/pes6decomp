/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00832630(M2C_UNK);                     /* extern */
extern char D_008A5F70[];
extern char D_008AA0E2[];
extern char D_008AA0E4[];
extern char D_008AA0EA[];
extern char D_008AA0EB[];
extern char D_008AA0EC[];
extern char D_008AA0ED[];
extern char D_008AA100[];
extern char D_008AA101[];
extern char D_008AA104[];
extern char D_008AA108[];
extern char D_008AA10C[];
extern char D_008AA10D[];

s32 func_008240B0(void) {
    s32 var_a1;
    void *temp_v1;

    (*(s8 *)D_008AA0EA) = 0;
    (*(s8 *)D_008AA0EB) = 1;
    (*(s32 *)D_008AA0E4) = 0;
    (*(s16 *)D_008AA0E2) = 0xFFFF;
    (*(s8 *)D_008AA0EC) = -1;
    (*(s8 *)D_008AA0ED) = 0;
    (*(s32 *)D_008AA104) = 0;
    (*(s32 *)D_008AA108) = 0;
    (*(s8 *)D_008AA10C) = 0;
    (*(s8 *)D_008AA10D) = 0;
    (*(s8 *)D_008AA100) = 0;
    (*(s8 *)D_008AA101) = 0;
    func_00832630(-1);
    var_a1 = 0;
    do {
        temp_v1 = ((void *)D_008A5F70) + var_a1;
        M2C_FIELD(temp_v1, s8 *, 0x4FE8) = 0;
        var_a1 += 1;
        M2C_FIELD(temp_v1, s8 *, 0x5010) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x5038) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x5060) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x5088) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x50B0) = 0;
    } while (var_a1 < 0x28);
    return 1;
}
