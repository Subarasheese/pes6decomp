/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, s32);            /* extern */
void *func_001FC920(s32);                           /* extern */
M2C_UNK func_001FCEE0(void *, s32);                 /* extern */
extern char D_00533038[];
extern char D_0053303C[];

s32 func_001FCB10(s32 arg0, s32 arg1) {
    void *temp_a0;
    void *temp_v0;

    if (((*(s32 *)D_00533038) != 0) && (arg0 < (*(s32 *)D_0053303C))) {
        temp_v0 = func_001FC920(M2C_FIELD(((*(s32 *)D_00533038) + (arg0 * 8)), s32 *, 4));
        if (M2C_FIELD(temp_v0, u8 *, 0xC) != 0) {
            return 0;
        }
        if (M2C_FIELD(temp_v0, s32 *, 8) != arg0) {
            func_001C4730(M2C_FIELD(temp_v0, void **, 0), arg1, M2C_FIELD(temp_v0, s32 *, 4));
            temp_a0 = M2C_FIELD(temp_v0, void **, 0);
            func_001FCEE0(temp_a0, M2C_FIELD(temp_a0, s32 *, 0xC) + M2C_FIELD(temp_a0, s32 *, 0x10) + 0x40);
            M2C_FIELD(temp_v0, s32 *, 8) = arg0;
            M2C_FIELD(temp_v0, u8 *, 0xC) = 2U;
            return 1;
        }
        M2C_FIELD(temp_v0, u8 *, 0xC) = 2U;
        return 1;
    }
    return 0;
}
