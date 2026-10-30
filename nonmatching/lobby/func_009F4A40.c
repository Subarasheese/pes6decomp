/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
extern char D_00A7E250[];

void *func_009F4A40(void) {
    void *temp_v0;

    temp_v0 = func_0099C7F0(0x170E8);
    if (temp_v0 != NULL) {
        func_001C48E8(temp_v0, 0, 0x170E8);
        func_001C48E8(temp_v0 + 4, 0, 0x10);
        func_001C48E8(temp_v0 + 0x14, 0, 0x10);
        func_001C48E8(temp_v0 + 0x24, 0, 0xC000);
        func_001C48E8(temp_v0 + 0xC024, 0, 0xB0BC);
        (*(s32 *)D_00A7E250) = 0;
        M2C_FIELD(temp_v0, s32 *, 0) = 7;
        M2C_FIELD(temp_v0, s32 *, 0x170E0) = 0;
        return temp_v0;
    }
    return NULL;
}
