/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FB250(void *);                      /* extern */

s32 func_008FBC58(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    M2C_FIELD(temp_s0, s32 *, 0x878) = 0;
    M2C_FIELD(temp_s0, s32 *, 0) = 0;
    M2C_FIELD(temp_s0, s32 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC0) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x98) = -1;
    func_008FB250(temp_s0);
    M2C_FIELD(temp_s0, s32 *, 0x858) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x128) = 0;
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xFF7FFFFF) | 0x800000;
    return 1;
}
