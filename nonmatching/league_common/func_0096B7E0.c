/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
s32 func_00226710();                                /* extern */
s32 func_002307F0();                                /* extern */
M2C_UNK func_00934A10();                            /* extern */
s32 func_00936200();                                /* extern */
M2C_UNK func_00936410();                            /* extern */
M2C_UNK func_009364A0();                            /* extern */
M2C_UNK func_0093D7A0();                            /* extern */
M2C_UNK func_0093D850();                            /* extern */
M2C_UNK func_00949630();                            /* extern */
M2C_UNK func_0094C790(M2C_UNK);                     /* extern */
M2C_UNK func_0095CAE0();                            /* extern */
M2C_UNK func_0095CB30();                            /* extern */
s32 func_00961460();                                /* extern */
M2C_UNK func_009614A0(M2C_UNK);                     /* extern */
void *func_009614F0();                              /* extern */
M2C_UNK func_00994B90(void *);                      /* extern */
s32 func_0099C2F0();                                /* extern */
M2C_UNK func_0099E5A0();                            /* extern */
M2C_UNK func_00B187B0();                            /* extern */
extern void *D_003E77AC;
extern void *D_003E77B0;

s32 func_0096B7E0(void) {
    s32 temp_v1;
    s32 var_s0;
    void *temp_v0;

    var_s0 = -1;
    if (M2C_FIELD(D_003E77AC, s32 *, 4) != 0) {

    } else if ((func_00961460() & 0xFF) == 1) {
        if (func_00210DF0() == 2) {
            func_00B187B0();
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
            func_00994B90(D_003E77B0);
            func_009614A0(0);
        }
        func_0093D850();
        func_0093D7A0();
        var_s0 = 0x47;
    } else {
        if ((func_00226710() & 0xFF) == 0x2E) {
            goto block_21;
        }
        func_0095CB30();
        func_0095CAE0();
        func_00949630();
        temp_v0 = func_009614F0();
        if ((temp_v0 != NULL) && (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3D) >> 0x3F) == 0)) {
            func_00936410();
        }
        temp_v1 = func_002307F0() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_0099E5A0();
            if (func_0099C2F0() == 1) {
                var_s0 = 7;
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x800);
            } else if (func_00936200() == 0) {
                func_00934A10();
                var_s0 = 1;
            } else {
block_21:
                var_s0 = 0x3F;
            }
            break;
        default:
        case 0:
            if (func_00936200() == 0) {
                func_00934A10();
                var_s0 = 1;
            } else {
                func_009364A0();
                goto block_21;
            }
            break;
        }
    }
    if (var_s0 != -1) {
        func_0094C790(0);
    }
    return var_s0;
}
