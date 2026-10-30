/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008540F0(s32, M2C_UNK *);              /* extern */
extern s32 D_003E77F8;
extern s32 D_003EA288;
extern s32 D_003EA28C;
extern M2C_UNK (*D_003EA2B8)(u32);
extern s32 D_003EA2BC;
extern s8 D_003EA2C0;
extern char D_008AF950[];

s32 func_00847CA0(M2C_UNK arg0, u32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    u32 temp_a2;

    temp_a2 = arg1 >> 0x1F;
    temp_s0 = (arg1 / 1000) + temp_a2;
    if (D_003EA2B8 != NULL) {
        D_003EA2B8(temp_a2);
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
