/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x14];
    s32 pos;
    u8 pad18[0x28];
    s32 sema;
} Stream;

void WaitSema(s32);
void func_00105380(s32);

void func_00137570(Stream *s) {
    WaitSema(s->sema);
    s->pos = (s->pos + 0x7FF) / 2048 * 2048;
    func_00105380(s->sema);
}
