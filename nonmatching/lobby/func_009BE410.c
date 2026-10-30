/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
s32 func_0099DF90(s32, s32);                        /* extern */
s32 func_0099DFE0(s32, s32);                        /* extern */
s32 func_0099E030(s32, s32);                        /* extern */
s32 func_0099E080(s32, s32);                        /* extern */
s32 func_0099E0D0(s32, s32);                        /* extern */
s32 func_0099E120(s32, s32);                        /* extern */
s32 func_0099E170(s32, s32);                        /* extern */
s32 func_0099E1C0(s32, s32);                        /* extern */
s32 func_0099E9F0(s32, s32);                        /* extern */
s32 func_0099EA40(s32);                             /* extern */
M2C_UNK func_0099EE00(s32);                         /* extern */
M2C_UNK func_0099FC70(s32, s32);                    /* extern */
M2C_UNK func_0099FCC0(s32, s32);                    /* extern */
M2C_UNK func_0099FD10(s32, s32);                    /* extern */
M2C_UNK func_0099FD50(s32, s32);                    /* extern */
M2C_UNK func_0099FD80(s32, s32);                    /* extern */
M2C_UNK func_0099FDB0(s32, s32);                    /* extern */
M2C_UNK func_0099FDE0(s32, s32);                    /* extern */
M2C_UNK func_0099FE10(s32, s32);                    /* extern */
M2C_UNK func_0099FEE0(s32, s32);                    /* extern */
M2C_UNK func_0099FF90(s32);                         /* extern */
M2C_UNK func_009BE5A0(void *);                      /* extern */
M2C_UNK func_009BE690(void *);                      /* extern */
M2C_UNK func_009BF110(s32);                         /* extern */

s32 func_009BE410(void *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 5;
    }
    temp_v0 = func_0099EA40(M2C_FIELD(arg0, s32 *, 4));
    func_0099FEE0(M2C_FIELD(arg0, s32 *, 8), func_0099E1C0(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FE10(M2C_FIELD(arg0, s32 *, 8), func_0099E9F0(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FDB0(M2C_FIELD(arg0, s32 *, 8), func_0099E170(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FD80(M2C_FIELD(arg0, s32 *, 8), func_0099E120(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FDE0(M2C_FIELD(arg0, s32 *, 8), func_0099E0D0(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FD50(M2C_FIELD(arg0, s32 *, 8), func_0099E080(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FD10(M2C_FIELD(arg0, s32 *, 8), func_0099E030(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FCC0(M2C_FIELD(arg0, s32 *, 8), func_0099DFE0(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099FC70(M2C_FIELD(arg0, s32 *, 8), func_0099DF90(M2C_FIELD(arg0, s32 *, 4), temp_v0));
    func_0099EE00(M2C_FIELD(arg0, s32 *, 4));
    func_0099FF90(M2C_FIELD(arg0, s32 *, 8));
    func_009BF110(M2C_FIELD(arg0, s32 *, 0x10));
    func_009BE690(arg0);
    func_009BE5A0(arg0);
    if ((arg0 != NULL) && (M2C_FIELD(arg0, s8 *, 0x15) == 1)) {
        if (M2C_FIELD(arg0, s32 *, 0) != 8) {
            func_0099D030(0);
        } else {
            func_0099D030(1);
        }
    }
    M2C_FIELD(arg0, s8 *, 0x15) = 0;
    return 0;
}
