/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
M2C_UNK func_008540F0(s32, M2C_UNK *);
extern s32 D_003E77F8;
extern s32 D_003EA288;
extern s32 D_003EA28C;
extern void (*D_003EA2B8)(M2C_UNK, s32);
extern s32 D_003EA2BC;
extern s8 D_003EA2C0;
extern char D_008AF950[];
s32 func_00847CA0(M2C_UNK arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    temp_s0 = arg1 / 1000;
    if (D_003EA2B8 != NULL) {
        D_003EA2B8(arg0, arg1);
    }
    if (temp_s0 < D_003EA2C0) {
        if (D_003EA288 <= 0) {
            D_003EA288 = 0;
        } else {
            D_003EA288 -= 1;
        }
        if (D_003EA28C > 0) {
            D_003EA28C -= 1;
        }
        D_003EA2BC = 0;
    } else {
        temp_v1 = temp_s0 - D_003EA2C0;
        if ((temp_v1 == D_003EA288) && (temp_v1 < 0xA)) {
            D_003EA288 += 1;
            func_008540F0(D_003E77F8, ((void *)D_008AF950));
            D_003EA28C += 1;
        }
    }
    return 0;
}
