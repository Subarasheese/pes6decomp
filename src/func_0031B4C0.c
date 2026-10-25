/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 kind;
    u8 pad3[0x5];
    u32 colorA;
    u32 colorB;
    u8 pad10[0x8];
} Obj18;

void func_001C48E8(void *, s32, s32);

s32 func_0031B4C0(Obj18 *obj) {
    func_001C48E8(obj, 0, sizeof(Obj18));
    obj->colorA = 0x8F8F8F8F;
    obj->colorB = 0x8F8F8F8F;
    obj->kind = 0xAB;
    return 1;
}
