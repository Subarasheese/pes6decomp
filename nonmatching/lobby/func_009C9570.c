/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213920(s32, s32, s32, void *, s32);
extern s32 func_00935E70(void);
extern void func_00213800(void *);
M2C_UNK func_002136B0(s32, u8);                     /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009B8280(s32);                         /* extern */
s32 func_009B8300(M2C_UNK);                         /* extern */
extern char D_009FF970[];
extern void *D_00A7DD80;

void func_009C9570(void) {
    s32 temp_v0_2;
    void *temp_v0;

    if ((D_00A7DD80 == NULL) && (temp_v0 = func_0099C7E0(0xC), D_00A7DD80 = temp_v0, (temp_v0 != NULL))) {
        M2C_FIELD(D_00A7DD80, s32 *, 8) = func_009B8300(0);
        temp_v0_2 = M2C_FIELD(D_00A7DD80, s32 *, 8);
        if (temp_v0_2 != 0) {
            func_00213920(temp_v0_2, 0x01FC0029, -1, ((void *)D_009FF970), 3);
            if (func_00935E70() != 0) {
                M2C_FIELD(D_00A7DD80, s8 *, 4) = 1;
            }
            func_002136B0(M2C_FIELD(D_00A7DD80, s32 *, 8), M2C_FIELD(D_00A7DD80, u8 *, 2));
            func_00213800((void *) M2C_FIELD(D_00A7DD80, s32 *, 8));
            func_009B8280(M2C_FIELD(D_00A7DD80, s32 *, 8));
        } else {
            func_0099C7C0(D_00A7DD80);
            D_00A7DD80 = NULL;
        }
    }
}
