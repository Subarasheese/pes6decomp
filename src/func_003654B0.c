/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    f32 x;
    f32 y;
} Vec2;

typedef struct {
    Vec2 v;
    u8 pad[8];
} Locals;

s32 Pes6Sprite_SetPositionZ(s32, f32);
s32 func_001D7BE0(s32, Vec2 *);
s32 func_001D7C20(s32, s32);
s32 func_001D7CE0(s32, Vec2 *);
s32 func_001D7D60(s32, s32);
s32 func_001D7D80(s32, s32);
s32 func_001D7E40(s32, s32);
s32 func_001D7F90(s32);
extern s32 D_003EA03C;

s32 func_003654B0(s32 arg0, Vec2 *arg1) {
    Locals L;
    s32 var_s2;
    s32 temp_v1;

    temp_v1 = D_003EA03C;
    if (temp_v1 == 0) {
        return 0;
    }
    if (temp_v1 == 0) {
        var_s2 = 0;
    } else {
        s32 var_s1 = 0;
        switch (arg0) {
        case 0:
            var_s1 = 0;
            break;
        case 1:
            var_s1 = 1;
            break;
        case 2:
            var_s1 = 2;
            break;
        case 3:
            var_s1 = 3;
            break;
        }
        var_s2 = func_001D7F90(temp_v1);
        func_001D7E40(var_s2, var_s1);
        func_001D7D80(var_s2, 0);
        func_001D7C20(var_s2, 2);
        Pes6Sprite_SetPositionZ(var_s2, 0.0f);
        func_001D7D60(var_s2, 1);
    }
    func_001D7BE0(var_s2, &L.v);
    L.v.x = arg1->x;
    L.v.y = arg1->y;
    func_001D7CE0(var_s2, &L.v);
    return var_s2;
}
