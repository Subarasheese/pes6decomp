/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    f32 scale;
    u8 padC[0x124];
} Anim;

void func_001C48E8(void *, s32, s32);

void func_0012FEF0(Anim *anim) {
    func_001C48E8(anim, 0, sizeof(Anim));
    anim->scale = 1.0f;
}
