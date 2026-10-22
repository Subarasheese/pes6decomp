/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 Pes6Sprite_SetPositionZ(s32, f32);
f32 func_001D79A0(s32, s32);
s32 func_001D7A20(s32, f32 *);
s32 func_001D7BE0(s32, f32 *);
s32 func_001D7C20(s32, s32);
s32 func_001D7CE0(s32, f32 *);
s32 func_001D7D60(s32, s32);
s32 func_001D7D80(s32, s32);
s32 func_001D7E40(s32, s32);
s32 func_001D7F90(s32);
extern s32 D_003EA03C;

typedef struct {
    f32 a[2];
    u8 pad1[8];
    f32 b[2];
} Locals;

s32 func_00365340(s32 arg0, s32 arg1, s32 arg2) {
    Locals L;
    s32 var_s0;
    s32 var_s3;
    s32 temp_a0;

    if (func_001D7A20(arg1, L.b) == 0) {
        return 0;
    }
    temp_a0 = D_003EA03C;
    if (temp_a0 == 0) {
        var_s3 = 0;
    } else {
        if (temp_a0 == 0) {
            var_s3 = 0;
        } else {
            var_s0 = 0;
            switch (arg0) {
            case 0:
                var_s0 = 0;
                break;
            case 1:
                var_s0 = 1;
                break;
            case 2:
                var_s0 = 2;
                break;
            case 3:
                var_s0 = 3;
                break;
            }
            var_s3 = func_001D7F90(temp_a0);
            func_001D7E40(var_s3, var_s0);
            func_001D7D80(var_s3, 0);
            func_001D7C20(var_s3, 2);
            Pes6Sprite_SetPositionZ(var_s3, 0.0f);
            func_001D7D60(var_s3, 1);
        }
        func_001D7BE0(var_s3, L.a);
        L.a[0] = L.b[0];
        L.a[1] = L.b[1];
        func_001D7CE0(var_s3, L.a);
    }
    if (var_s3 != 0) {
        Pes6Sprite_SetPositionZ(var_s3, func_001D79A0(arg1, arg2));
    }
    return var_s3;
}
