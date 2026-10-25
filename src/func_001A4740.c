/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x8];
    s32 time;
} Anim;

void func_0012FEF0(Anim *, s32);
void func_0012FF40(Anim *, s32, f32);

void func_001A4740(Anim *anim, s32 clip) {
    func_0012FEF0(anim, clip);
    anim->time = 0;
    func_0012FF40(anim, clip, 0.0f);
}
