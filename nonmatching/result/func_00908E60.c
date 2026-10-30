/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F3D30(void *, void *);
M2C_UNK func_001F3D80(void *, f32 *, M2C_UNK);      /* extern */
extern void *D_00923FC8;

s32 func_00908E60(void) {
    f32 sp10;
    s32 temp_v0;

    if (!((f32) M2C_FIELD(D_00923FC8, s32 *, 0x618) <= M2C_FIELD(D_00923FC8, f32 *, 0x62C))) {
        temp_v0 = M2C_FIELD(D_00923FC8, s32 *, 0x610);
        if (temp_v0 != 0) {
            M2C_FIELD(D_00923FC8, s32 *, 0x610) = (s32) (temp_v0 - 1);
            return 0;
        }
        func_001F3D30(M2C_FIELD(D_00923FC8, void **, 0x604), &sp10);
        sp10 = (f32) -((s32) ((s32) -sp10 + 1) % (s32) M2C_FIELD(D_00923FC8, s32 *, 0x618));
        func_001F3D80(M2C_FIELD(D_00923FC8, void **, 0x604), &sp10, 0);
        goto block_7;
    }
block_7:
    return 0;
}
