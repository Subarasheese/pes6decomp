/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00828160();                                /* extern */
void *func_0082C2A0();                              /* extern */
M2C_UNK func_0095CD10(M2C_UNK *, void *);           /* extern */
extern char D_008A5F70[];
extern char D_008A8394[];
extern char D_008A8C28[];

s32 func_0095CDE0(void) {
    s32 temp_s0;
    void *temp_v0;

    temp_v0 = func_0082C2A0();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (((void *)D_008A5F70) != NULL) {
        temp_s0 = M2C_FIELD(temp_v0, s32 *, 0x147E8);
        if (temp_s0 != func_00828160()) {
            func_0095CD10(((void *)D_008A8C28), temp_v0 + 0x147E8);
        } else {
            func_0095CD10(((void *)D_008A8394), temp_v0 + 0x147E8);
        }
        return 4;
    }
    return 1;
}
