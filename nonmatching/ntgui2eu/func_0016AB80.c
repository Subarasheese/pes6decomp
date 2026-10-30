/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BFF94[];

void *func_0016AB80(void *arg0, s16 arg1) {
    void *temp_a0;

    if (M2C_FIELD(arg0, s32 *, 0xFD0) >= 0x64) {
        return NULL;
    }
    temp_a0 = (M2C_FIELD(arg0, s32 *, 0xFCC) * 0x28) + arg0;
    M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_a0, s16 *, 0) = arg1;
    M2C_FIELD(temp_a0, s64 *, 8) = (s64) (*(s32 *)D_005BFF94);
    M2C_FIELD(arg0, s32 *, 0xFD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xFD0) + 1);
    M2C_FIELD(arg0, s32 *, 0xFCC) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0xFCC) + 1) % 100);
    return temp_a0;
}
