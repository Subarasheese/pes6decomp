/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F190(void);
M2C_UNK func_00AE1E20(u32, u8);                     /* extern */
extern void *D_003EADA4;

void func_00AE21F0(u32 arg0) {
    void *temp_s0;
    void *temp_v0;

    temp_v0 = func_0022F190();
    temp_s0 = D_003EADA4;
    if ((temp_s0 != NULL) && (temp_v0 != NULL) && (arg0 < (u8) M2C_FIELD(temp_s0, u8 *, 0x3DC4))) {
        func_00AE1E20(arg0, 1 - M2C_FIELD(((M2C_FIELD(temp_s0, s32 *, 0x3DBC) * 0x314) + temp_s0), u8 *, 0xF9F));
        func_00AE1E20(arg0, M2C_FIELD(((M2C_FIELD(temp_s0, s32 *, 0x3DBC) * 0x314) + temp_s0), u8 *, 0xF9F));
    }
}
