/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 sector;
    s32 pos;
    u8 pad18[0x28];
    s32 sema;
} Stream;

void func_001053A0(s32);
void func_00105380(s32);

s32 func_001375C0(Stream *s) {
    s32 offset;

    func_001053A0(s->sema);
    offset = s->pos + (s->sector << 11);
    func_00105380(s->sema);
    return offset;
}
