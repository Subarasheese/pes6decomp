/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x50];
    u64 a;
    u8 pad2[0xF8];
    u64 b;
} Sub;

typedef struct {
    u8 pad[0x10];
    Sub sub;
    u8 pad2[0x200 - 0x10 - sizeof(Sub)];
} Elem;

typedef struct {
    u8 pad[0xD0];
    Elem e[1];
} Obj;

void func_001669E0(Obj *arg0) {
    u64 bit = (M2C_FIELD(arg0, s32 *, 0x5DC) & 1) << 6;
    Sub *s = &arg0->e[M2C_FIELD(arg0, s32 *, 0x4EC)].sub;

    s->a = (s->a & ~0x40) | bit;
    s->b = (s->b & ~0x40) | bit;
}
