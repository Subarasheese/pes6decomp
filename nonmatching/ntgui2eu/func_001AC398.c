/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B140(s32);                         /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
void *func_001AD608();                              /* extern */
M2C_UNK func_001ADBC8(s32);                         /* extern */
extern char D_005CAC24[];
extern void *D_01208850;

void *func_001AC398(s32 arg0) {
    s32 temp_a0;
    void **var_v1;
    void *temp_v0;
    void *var_s0;

    func_0019B160(M2C_FIELD(((void *)D_005CAC24), s32 *, 0));
    var_v1 = &D_01208850;
    var_s0 = D_01208850;
    if (var_s0 != NULL) {
loop_2:
        if (M2C_FIELD(var_s0, s32 *, 8) != arg0) {
            var_v1 = var_s0 + 0x14;
            temp_v0 = M2C_FIELD(var_s0, void **, 0x14);
            var_s0 = temp_v0;
            if (temp_v0 == NULL) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
                return func_001AD608();
            }
            goto loop_2;
        }
        temp_a0 = M2C_FIELD(var_s0, s32 *, 0xC);
        *var_v1 = M2C_FIELD(var_s0, void **, 0x14);
        if ((temp_a0 != 0) && (temp_a0 != arg0)) {
            func_001ADBC8(temp_a0);
        }
        func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
        return var_s0;
    }
    func_0019B140(M2C_FIELD(((void *)D_005CAC24), s32 *, -0x53DC));
    return func_001AD608();
}
