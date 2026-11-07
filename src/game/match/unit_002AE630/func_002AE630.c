/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 scale;
} Ctx;

extern Ctx *D_003E74CC;

s32 func_002AE630(s32 x) {
    f32 scale = D_003E74CC->scale;

    if (1.0f != scale) {
        x = (s32)((f32)x * scale);
    }
    return x;
}
