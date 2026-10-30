/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F38E0(void *, s32);
extern int func_00262340(void);
s32 func_00CD3D30(s32);                             /* extern */
M2C_UNK func_00CF4FA0(void *);                      /* extern */
M2C_UNK func_00CF51B0(void *, s32, s32, s32);       /* extern */
extern s32 D_003E7E1C;

void func_00CD3E30(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_003E7E1C + 0x190;
    temp_v0 = func_00CD3D30(func_00262340());
    M2C_FIELD(temp_s0, s32 *, 0x120) = temp_v0;
    func_00CF51B0(temp_s0, temp_v0, 2, 0);
    func_00CF4FA0(temp_s0);
    func_002F38E0(M2C_FIELD(temp_s0, void **, 0), (s32) (temp_s0 + 4));
    func_00CF51B0(temp_s0, M2C_FIELD(temp_s0, s32 *, 0x18), M2C_FIELD(temp_s0, s32 *, 0x10), M2C_FIELD(temp_s0, s32 *, 0x14));
}
