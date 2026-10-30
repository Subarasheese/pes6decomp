/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_00154080(M2C_UNK);                         /* extern */
s32 func_00309440(M2C_UNK);                         /* extern */
M2C_UNK func_00309460(M2C_UNK, s32);                /* extern */
M2C_UNK func_0080AC90(M2C_UNK);                     /* extern */
M2C_UNK func_0080AE00(M2C_UNK);                     /* extern */
M2C_UNK func_0081CA90();                            /* extern */
M2C_UNK func_0081CB00(M2C_UNK);                     /* extern */
s32 func_0081D2C0();                                /* extern */
M2C_UNK func_0084A790(M2C_UNK);                     /* extern */
s32 func_00858450(M2C_UNK);                         /* extern */
s32 func_00858580(M2C_UNK);                         /* extern */
s32 func_0085E1D0();                                /* extern */
s32 func_0085EC00();                                /* extern */
M2C_UNK func_0085EC20();                            /* extern */
s32 func_0085EC80(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0085F190();                            /* extern */
extern void *D_003EA26C;
extern char D_0088A914[];

s8 func_00811000(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s1;

    temp_s0 = (*(s32 *)D_0088A914);
    temp_v0 = func_00309440(3);
    switch (temp_v0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0081CB00(0x3C);
        func_0085EC20();
        if (func_0085EC80(0xE, 1, 0, 0) == 0xE) {
            func_00309460(3, func_00309440(3) + 1);
        }
        break;
    case 1:                                         /* switch 1 */
        if (func_0085EC00() != 0) {
            func_00309460(3, func_00309440(3) + 1);
        } else {
            var_s1 = 1;
            if (func_0085E1D0() != 0) {
                temp_v1 = temp_s0 & 0xF;
                switch (temp_v1) {                  /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    func_0080AC90(0);
                    break;
                case 8:                             /* switch 2 */
                    func_0080AE00(0);
                    break;
                }
            }
            if (func_00858580(-1) == 0) {
                var_s1 = 0;
            }
            if (func_00858450(-1) == 0) {
                var_s1 = 0;
            }
            if (var_s1 != 0) {
                func_0085F190();
            }
        }
        break;
    case 2:                                         /* switch 1 */
        func_0085EC20();
        func_0081CA90();
        func_00309440(2);
        func_00309460(2, 2);
        M2C_FIELD(D_003EA26C, s8 *, 0x28) = 0;
        M2C_FIELD(D_003EA26C, s32 *, 0x58) = (s32) ((s64) (func_00154080(0xC) << 0x20) >> 0x20);
        break;
    default:                                        /* switch 1 */
        func_00309460(3, 0);
        break;
    }
    if (func_0081D2C0() == 0) {
        func_0084A790(1);
    }
    return M2C_FIELD(D_003EA26C, s8 *, 0x3F);
}
