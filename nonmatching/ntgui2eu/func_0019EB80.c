/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0019E738(void *);
s32 func_0019E270(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void *func_0019EAF0(s32, void *);                   /* extern */
M2C_UNK func_001A64E8(M2C_UNK, M2C_UNK *, void *);  /* extern */
extern M2C_UNK func_0019EB40;

void func_0019EB80(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_0019E738(arg1);
    M2C_FIELD(temp_v0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_v0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0x80000009;
    temp_v0_2 = func_0019EAF0(M2C_FIELD(arg0, s32 *, 0x20), arg1);
    if (temp_v0_2 != NULL) {
        M2C_FIELD(temp_v0, void **, 0x24) = temp_v0_2;
        M2C_FIELD(temp_v0, s32 *, 0x28) = (s32) M2C_FIELD(temp_v0_2, s32 *, 8);
    } else {
        M2C_FIELD(temp_v0, void **, 0x24) = NULL;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    }
    if (func_0019E270(0x80000008, temp_v0, 0x40, 0, 0, 0) == 0) {
        func_001A64E8(0x800, &func_0019EB40, temp_v0);
    }
}
