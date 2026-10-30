/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001630D0(int, int);
extern void func_0015B478(void *);
void *func_0015CA58();                              /* extern */
extern char D_003C7FB0[];
extern char D_003C7FE8[];

void *func_0015CAB0(void) {
    M2C_UNK *var_a0;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_0015CA58();
    var_a0 = ((void *)D_003C7FB0);
    if ((temp_v0 == NULL) || (temp_v0_2 = func_001630D0(0, 0x100), M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2, var_a0 = ((void *)D_003C7FE8), (temp_v0_2 == 0))) {
        func_0015B478(var_a0);
        return NULL;
    }
    M2C_FIELD(temp_v0, s8 *, 0) = 1;
    M2C_FIELD(temp_v0, s8 *, 1) = 1;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_v0, s8 *, 2) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s8 *, 3) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0x200;
    return temp_v0;
}
