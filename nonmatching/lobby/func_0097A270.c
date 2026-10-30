/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
extern void func_00213A00(s32, void *, s32, s32);
M2C_UNK func_002136B0(s32, u8);                     /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
extern char D_009FE520[];
extern void *D_00A68D80;

void func_0097A270(void) {
    void *temp_v0;

    if (D_00A68D80 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A68D80 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(D_00A68D80, s32 *, 0) = func_00214540(0);
            func_00213A00(M2C_FIELD(D_00A68D80, s32 *, 0), ((void *)D_009FE520), 0, 7);
            func_002136B0(M2C_FIELD(D_00A68D80, s32 *, 0), M2C_FIELD(D_00A68D80, u8 *, 4));
            func_00213800((void *) M2C_FIELD(D_00A68D80, s32 *, 0));
        }
    }
}
