/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00176BF8();                            /* extern */
M2C_UNK func_00176CC8(void *);                      /* extern */
M2C_UNK func_00177658(void *);                      /* extern */
M2C_UNK func_0018C748(void *);                      /* extern */
extern M2C_UNK (*D_005C1450)(void *);

void func_00176690(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xEA8) == 0) {
        M2C_FIELD(arg0, s64 *, 0xEB0) = 0;
    } else {
        if (M2C_FIELD(arg0, s64 *, 0xEB0) & 0x1E) {
            func_00176BF8();
            func_00176CC8(arg0);
        }
        if (((s64) ((M2C_FIELD(arg0, s64 *, 0xEB0) & 1) << 0x20) >> 0x20) != 0) {
            func_00177658(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0xEA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xEA8) - 1);
    }
    D_005C1450(arg0);
    func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0xA0) + 0x910));
    if (M2C_FIELD(arg0, s32 *, 0xE84) == 0x13) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0xA0) + 0xA50));
    }
    func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x170) + 0xB90));
}
