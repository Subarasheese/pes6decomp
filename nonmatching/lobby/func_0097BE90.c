/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009DDF80(void *);                      /* extern */
M2C_UNK func_009DE2A0(M2C_UNK *);                   /* extern */
M2C_UNK func_009DE320(s32);                         /* extern */
M2C_UNK func_009DE3A0(M2C_UNK);                     /* extern */
extern void *D_00A68D98;
extern char D_00A68DA0[];
extern char D_00A68DA4[];
extern char D_00A68DA8[];

void func_0097BE90(s32 arg0, s32 arg1) {
    void *temp_v0;

    if (D_00A68D98 == NULL) {
        temp_v0 = func_0099C7E0(0x14);
        D_00A68D98 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 1) = 0;
            if (arg0 != (*(s32 *)D_00A68DA0)) {
                func_001C48E8(((void *)D_00A68DA0), 0, 0x20C);
            }
            (*(s32 *)D_00A68DA0) = arg0;
            (*(s32 *)D_00A68DA4) = arg1;
            func_009DE3A0(0);
            func_009DE320((*(s32 *)D_00A68DA4));
            func_009DE2A0(((void *)D_00A68DA8));
            func_009DDF80(D_00A68D98 + 4);
        }
    }
}
