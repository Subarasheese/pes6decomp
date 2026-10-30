/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009650A0(s32);                             /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_009D6E60();                            /* extern */
s32 func_009D6EB0(void *);                          /* extern */
s32 func_009D8C20(void *);                          /* extern */
s32 func_009D8D30(void *);                          /* extern */
s32 func_009DCCF0();                                /* extern */
M2C_UNK func_009DD3C0(M2C_UNK);                     /* extern */
M2C_UNK func_009DD5A0(M2C_UNK);                     /* extern */
extern void *D_00A7DEA8;

s32 func_009D8E60(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 temp_v1;

    if (D_00A7DEA8 == NULL) {
        return 2;
    }
    temp_v1 = M2C_FIELD(D_00A7DEA8, u8 *, 0);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if (M2C_FIELD(D_00A7DEA8, u8 *, 1) != 0) {
            return 4;
        }
        temp_v0 = func_009D8C20(D_00A7DEA8);
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 2;
        case 0:                                     /* switch 2 */
            M2C_FIELD(D_00A7DEA8, s32 *, 4) = func_009650A0(func_009DCCF0());
block_16:
        default:                                    /* switch 2 */
            return 0;
        case 1:                                     /* switch 2 */
            func_009DD5A0(0);
            M2C_FIELD(D_00A7DEA8, s32 *, 4) = func_009650A0(func_009DCCF0());
            M2C_FIELD(D_00A7DEA8, u8 *, 0) = 1U;
            goto block_16;
        }
        break;
    case 1:                                         /* switch 1 */
        return func_009D8D30(D_00A7DEA8);
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_009D6EB0(D_00A7DEA8);
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_009D6E60();
            var_v0 = 1;
            break;
        case 4:                                     /* switch 3 */
        case 3:                                     /* switch 3 */
        case 2:                                     /* switch 3 */
            func_009D6E60();
            func_0099C730(0x01FC0004);
            func_009DD3C0(1);
            M2C_FIELD(D_00A7DEA8, u8 *, 0) = 0U;
            /* fallthrough */
        default:                                    /* switch 3 */
            var_v0 = 0;
            break;
        }
        return var_v0;
    default:                                        /* switch 1 */
        return 0;
    }
}
