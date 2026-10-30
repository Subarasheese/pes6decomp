/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
s32 func_0099AF50(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_0099B690(s32, s32, M2C_UNK *);             /* extern */
void *func_0099C7F0(M2C_UNK);                       /* extern */
extern void *D_003EAD10;
extern char D_009FF2D0[];
extern char D_00A02AE8[];

void func_009B1B40(void) {
    s32 *var_s2;
    s32 var_s3;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s1;

    temp_v0 = func_0099C7F0(0x10);
    D_003EAD10 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0) = 0;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    temp_s0 = D_003EAD10;
    temp_v0_2 = func_001D5A10(0x103B8);
    M2C_FIELD(temp_s0, void **, 0) = temp_v0_2;
    M2C_FIELD(temp_s0, s32 *, 4) = func_0099AF50(temp_v0_2, 0, 0);
    var_s3 = 0;
    var_s2 = ((void *)D_009FF2D0);
    var_s1 = temp_s0;
    do {
        var_s3 += 1;
        M2C_FIELD(var_s1, s32 *, 8) = func_0099B690(M2C_FIELD(temp_s0, s32 *, 4), *var_s2, ((void *)D_00A02AE8));
        var_s2 += 4;
        var_s1 += 4;
    } while (var_s3 < 2);
}
