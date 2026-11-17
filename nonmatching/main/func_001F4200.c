/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x, y, z, w; } V4;
typedef struct { f32 x, y; s32 z; } V3;

s32 func_001F4200(void *arg0) {
    V4 a;
    V3 b;
    void *var_s4;

    if (M2C_FIELD(arg0, u8 *, 2) != 0) {
        var_s4 = M2C_FIELD(arg0, void **, 0x2C);
        if (var_s4 != NULL) {
            do {
                M2C_FIELD(var_s4, u8 *, 1) = M2C_FIELD(var_s4, u8 *, 1) | M2C_FIELD(arg0, u8 *, 1);
                a.y = M2C_FIELD(arg0, f32 *, 0xC);
                a.z = M2C_FIELD(arg0, f32 *, 0x10);
                a.x = M2C_FIELD(arg0, f32 *, 8);
                a.w = M2C_FIELD(arg0, f32 *, 0x14);
                b.x = a.x;
                b.y = a.y;
                b.z = 0;
                M2C_FIELD(var_s4, M2C_UNK (**)(void *, V3 *), 0x3C)(var_s4, &b);
                var_s4 = M2C_FIELD(var_s4, void **, 0x38);
            } while (var_s4 != NULL);
        }
        M2C_FIELD(arg0, u8 *, 1) = 0U;
    }
    return 0;
}
