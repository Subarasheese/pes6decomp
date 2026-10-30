/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213920(s32, s32, s32, void *, s32);
extern void func_00213800(void *);
M2C_UNK func_002136B0(s32, u8);                     /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
extern char D_009FE508[];
extern void *D_00A68D78;

void func_00979F40(void) {
    void *temp_v0;

    if (D_00A68D78 == NULL) {
        temp_v0 = func_0099C7E0(0xC);
        D_00A68D78 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(D_00A68D78, s32 *, 0) = func_00214540(0);
            func_00213920(M2C_FIELD(D_00A68D78, s32 *, 0), 0x01F70036, -1, ((void *)D_009FE508), 3);
            func_002136B0(M2C_FIELD(D_00A68D78, s32 *, 0), M2C_FIELD(D_00A68D78, u8 *, 7));
            func_00213800((void *) M2C_FIELD(D_00A68D78, s32 *, 0));
            func_0099C730(0x01FC0020);
        }
    }
}
