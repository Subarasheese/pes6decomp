/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w181_a.c (func_004109C0). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    void *a;
    void *b;
} P8_a;
extern s32 D_00510B00[3];
extern s32 D_00510C00[];

void func_00178D40(s32 a, s32 b, s32 c, P8_a *out) {
    extern s32 func_0016E848(s32, s32 *, s32, s32 *, s32);
    D_00510B00[0] = a;
    D_00510B00[1] = b;
    D_00510B00[2] = c;
    func_0016E848(0x26, D_00510B00, 3, D_00510C00, 2);
    out->a = (void *)D_00510C00[0];
    out->b = (void *)D_00510C00[1];
}
