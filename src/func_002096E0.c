/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    f32 scale;
} Ctx;

typedef struct {
    u8 pad0[0x28];
    f32 value;
} Obj;

extern Ctx *D_003E74CC;

void func_002096E0(Obj *obj, s32 pct) {
    obj->value = D_003E74CC->scale * (f32)(pct + 100) / 100.0f;
}
