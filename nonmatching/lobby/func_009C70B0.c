/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009C6E90(void);
s32 func_00821570(void *);                          /* extern */
s32 func_00965300(s32);                             /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
s32 func_009C6FA0(void *);                          /* extern */
M2C_UNK func_009D6E20(void *);                      /* extern */
M2C_UNK func_009D6E60();                            /* extern */
s32 func_009D6EB0();                                /* extern */
s32 func_009D7EC0();                                /* extern */
M2C_UNK func_009D8570(M2C_UNK);                     /* extern */
M2C_UNK func_009D8780(M2C_UNK);                     /* extern */
extern void *D_00A7DD68;

s32 func_009C70B0(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    u8 temp_v1;

    if (D_00A7DD68 == NULL) {
        return 2;
    }
    temp_v1 = M2C_FIELD(D_00A7DD68, u8 *, 0);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        if ((M2C_FIELD(D_00A7DD68, u8 *, 1) == 0) && (func_00821570(D_00A7DD68) == 0)) {

        } else {
            M2C_FIELD(D_00A7DD68, u8 *, 0) = 1U;
        }
        return 0;
    case 1:                                         /* switch 1 */
        if (M2C_FIELD(D_00A7DD68, u8 *, 1) != 0) {
            return 4;
        }
        temp_v0 = func_009C6E90();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            return 2;
        case 0:                                     /* switch 2 */
            M2C_FIELD(D_00A7DD68, s32 *, 4) = func_00965300(func_009D7EC0());
block_22:
        default:                                    /* switch 2 */
            return 0;
        case 1:                                     /* switch 2 */
            func_009D8780(0);
            M2C_FIELD(D_00A7DD68, s32 *, 4) = func_00965300(func_009D7EC0());
            M2C_FIELD(D_00A7DD68, u8 *, 0) = 2U;
            goto block_22;
        }
        break;
    case 2:                                         /* switch 1 */
        return func_009C6FA0(D_00A7DD68);
    case 3:                                         /* switch 1 */
        if (M2C_FIELD(D_00A7DD68, u8 *, 1) != 0) {
            func_009D6E20(D_00A7DD68);
        }
        temp_v0_2 = func_009D6EB0();
        switch (temp_v0_2) {                        /* switch 3; irregular */
        case 1:                                     /* switch 3 */
            func_009D6E60();
            var_v0 = 1;
            break;
        case 4:                                     /* switch 3 */
        case 3:                                     /* switch 3 */
        case 2:                                     /* switch 3 */
            func_009D6E60();
            func_0099C730(0x01FC0000);
            func_009D8570(1);
            M2C_FIELD(D_00A7DD68, u8 *, 0) = 1U;
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
