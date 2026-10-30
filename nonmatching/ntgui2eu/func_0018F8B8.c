/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00192C88(void *);
extern char D_005C8D68[];
extern char D_011FC830[];

void func_0018F8B8(s32 arg0) {
    void *temp_s0;

    temp_s0 = (arg0 * 0x28) + ((void *)D_011FC830);
    func_00192C88(M2C_FIELD(temp_s0, s32 *, 0) + 0x10);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x1C) = (s32) M2C_FIELD(temp_s0, s16 *, 0x22);
    M2C_FIELD(((void *)D_005C8D68), s32 *, 0x18) = (s32) M2C_FIELD(temp_s0, s16 *, 0x20);
}
