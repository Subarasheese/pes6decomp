/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x14];
    s32 pos;
    u8 pad18[0x28];
    s32 sema;
    u8 pad44[0x4];
    s64 total;
} Stream;

void WaitSema(s32);
void func_00105380(s32);

void func_00137E50(Stream *s, s32 size) {
    WaitSema(s->sema);
    s->pos += size;
    s->total += size;
    func_00105380(s->sema);
}
