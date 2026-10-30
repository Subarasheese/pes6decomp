/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0019E738(void *);
s32 func_0019E270(M2C_UNK, void *, M2C_UNK, s32, s32, s32); /* extern */
void *func_0019E768(void *, u32);                   /* extern */
M2C_UNK func_001A64E8(M2C_UNK, M2C_UNK *, void *);  /* extern */
extern M2C_UNK func_0019E878;

void func_0019E8B8(void *arg0, void *arg1) {
    u32 temp_a1;
    void *var_v0;

    temp_a1 = M2C_FIELD(arg0, u32 *, 0x10);
    if (temp_a1 & 4) {
        var_v0 = func_0019E768(arg1, temp_a1 >> 0x10);
    } else {
        var_v0 = func_0019E738(arg1);
    }
    M2C_FIELD(var_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(var_v0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(var_v0, s32 *, 0x20) = 0x8000000C;
    M2C_FIELD(var_v0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(var_v0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(var_v0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
    if (func_0019E270(0x80000008, var_v0, 0x40, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28)) == 0) {
        func_001A64E8(0x800, &func_0019E878, var_v0);
    }
}
