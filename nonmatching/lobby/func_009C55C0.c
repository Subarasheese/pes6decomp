/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
extern void func_009C7840(s8);
M2C_UNK func_00213540(void *, M2C_UNK);             /* extern */
M2C_UNK func_00214290(void *);                      /* extern */
s32 func_009C4500(s8 *);                            /* extern */
M2C_UNK func_009D5600(M2C_UNK);                     /* extern */
M2C_UNK func_009D5BA0(M2C_UNK);                     /* extern */
extern s8 *D_00A7DD60;

s32 func_009C55C0(s8 *arg0) {
    s32 temp_v0;
    s8 *var_a0;
    s8 var_v1;
    u8 temp_v0_2;

    var_a0 = arg0;
    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_00213800(M2C_FIELD(D_00A7DD60, void **, 0xC));
        func_00214290(M2C_FIELD(D_00A7DD60, void **, 0x10));
        var_a0 = D_00A7DD60;
        M2C_FIELD(var_a0, void **, 0x10) = NULL;
        M2C_FIELD(D_00A7DD60, s8 *, 0) = 1;
    }
    temp_v0 = func_009C4500(var_a0);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        break;
    case 1:                                         /* switch 1 */
        temp_v0_2 = M2C_FIELD(D_00A7DD60, u8 *, 6);
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            func_009C7840(1);
            func_00213800(M2C_FIELD(D_00A7DD60, void **, 0x10));
            var_v1 = 0xE;
            M2C_FIELD(D_00A7DD60, s8 *, 0xB) = 0;
block_15:
            M2C_FIELD(D_00A7DD60, s8 *, 0) = var_v1;
            break;
        case 1:                                     /* switch 2 */
            func_009D5BA0(1);
            func_009D5600(0x10);
            func_00213540(M2C_FIELD(D_00A7DD60, void **, 0x10), 1);
            var_v1 = 0xF;
            M2C_FIELD(D_00A7DD60, s8 *, 0xB) = 0;
            goto block_15;
        case 2:                                     /* switch 2 */
            func_009D5BA0(1);
            func_009D5600(8);
            func_00213540(M2C_FIELD(D_00A7DD60, void **, 0x10), 1);
            var_v1 = 0x12;
            M2C_FIELD(D_00A7DD60, s8 *, 0xB) = 0;
            goto block_15;
        }
        break;
    case 2:                                         /* switch 1 */
        func_00213800(M2C_FIELD(D_00A7DD60, void **, 0xC));
        func_00214290(M2C_FIELD(D_00A7DD60, void **, 0x10));
        var_v1 = 1;
        M2C_FIELD(D_00A7DD60, void **, 0x10) = NULL;
        goto block_15;
    }
    return 0;
}
