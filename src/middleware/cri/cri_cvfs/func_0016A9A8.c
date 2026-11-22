/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/sa20_a.c (func_00406220). See THIRD_PARTY.md. */
#include "types.h"
typedef struct {
    s32 val;
    char name[12];
} Ent;
extern Ent D_0050E580[32];
extern u8 D_003C9358[];
extern s32 func_001C83D8(s32, void *, s32);
extern s32 func_001C80F0(s32);

void func_0016A9A8(s32 a) {
    extern void func_0016A550(u8 *);
    u32 i;
    s32 r;
    if (a == 0) {
        func_0016A550(D_003C9358);
        return;
    }
    r = func_001C80F0(a);
    for (i = 0; i < 32; i++)
        if (!func_001C83D8(a, D_0050E580[i].name, r)) {
            D_0050E580[i].name[0] = 0;
            return;
        }
}
