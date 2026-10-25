/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[8];
    u64 a;
    u64 b;
} Out;

extern u8 *D_003E97A0;
void func_00137170(void *, u64 *);

s32 func_001387B0(s32 unused, Out *out) {
    u64 buf[4];

    func_00137170(D_003E97A0 + 0x53CDC0, buf);
    out->a = buf[0];
    out->b = buf[1];
    return 1;
}
