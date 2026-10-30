/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213920(s32, s32, s32, void *, s32);
extern void func_00213800(void *);
M2C_UNK func_002136B0(s32, u8);                     /* extern */
M2C_UNK func_0099C7C0(s8 *);                        /* extern */
s8 *func_0099C7E0(M2C_UNK);                         /* extern */
M2C_UNK func_009B8280(s32);                         /* extern */
s32 func_009B8300(M2C_UNK);                         /* extern */
extern char D_00A00B00[];
extern s8 *D_00A7E248;

void func_009F3F60(void) {
    s32 temp_v0_2;
    s8 *temp_v0;

    if ((D_00A7E248 == NULL) && (temp_v0 = func_0099C7E0(8), D_00A7E248 = temp_v0, (temp_v0 != NULL))) {
        *temp_v0 = 0;
        M2C_FIELD(D_00A7E248, s32 *, 4) = func_009B8300(0);
        temp_v0_2 = M2C_FIELD(D_00A7E248, s32 *, 4);
        if (temp_v0_2 != 0) {
            func_00213920(temp_v0_2, 0x01FC0006, -1, ((void *)D_00A00B00), 4);
            func_002136B0(M2C_FIELD(D_00A7E248, s32 *, 4), M2C_FIELD(D_00A7E248, u8 *, 2));
            func_00213800((void *) M2C_FIELD(D_00A7E248, s32 *, 4));
            func_009B8280(M2C_FIELD(D_00A7E248, s32 *, 4));
        } else {
            func_0099C7C0(D_00A7E248);
            D_00A7E248 = NULL;
        }
    }
}
