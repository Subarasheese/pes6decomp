/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099D280(s32);                         /* extern */
M2C_UNK func_0099D530(s32);                         /* extern */

void func_009EA930(s32 arg0, s32 arg1) {
    s32 temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;

    temp_s0 = arg1 * 0x14;
    temp_v0 = temp_s0 + arg0;
    func_001D7F10(*M2C_FIELD(temp_v0, void ***, 4));
    temp_v1 = temp_s0 + arg0;
    *M2C_FIELD(temp_v0, void ***, 4) = NULL;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 4) = 0;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 8) = 0;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 0x10) = 0;
    M2C_FIELD(M2C_FIELD(temp_v1, void **, 8), s32 *, 0x14) = 0;
    func_0099D280(M2C_FIELD(temp_v1, s32 *, 0xC));
    temp_v0_2 = temp_s0 + arg0;
    func_0099D530(M2C_FIELD(temp_v0_2, s32 *, 0x10));
    M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0;
}
