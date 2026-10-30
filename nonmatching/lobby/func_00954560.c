/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_0082AE20(M2C_UNK, s32);                  /* extern */
extern char D_00A68410[];
extern char D_00A68810[];

void *func_00954560(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_0082AE20(3, arg0);
    if (temp_v0 != NULL) {
        if (M2C_FIELD(temp_v0, s8 *, 8) == 0) {
            return NULL;
        }
        func_001C48E8(((void *)D_00A68810), 0, 0x400);
        func_001C48E8(((void *)D_00A68410), 0, 0x400);
        return temp_v0 + 8;
    }
    return NULL;
}
