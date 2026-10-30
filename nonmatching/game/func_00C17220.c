/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C168D0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_00591BE4[];
extern char D_00CCAE00[];

void func_00C17220(void) {
    s8 temp_v1;
    s8 temp_v1_2;

    temp_v1 = M2C_FIELD(((void *)D_00CCAE00), s8 *, 0) - 1;
    M2C_FIELD(((void *)D_00CCAE00), s8 *, 0) = temp_v1;
    if (((s64) ((s64) temp_v1 << 0x38) >> 0x38) <= 0) {
        M2C_FIELD(((void *)D_00CCAE00), s8 *, 0) = (s8) ((((*(u8 *)D_00591BE4) * 0x1388) / 1000) + ((u32) ((*(u8 *)D_00591BE4) * 0x1388) >> 0x1F));
        func_00C168D0(((void *)D_00CCAE00), 0);
    }
    temp_v1_2 = M2C_FIELD(((void *)D_00CCAE00), s8 *, 0x14) - 1;
    M2C_FIELD(((void *)D_00CCAE00), s8 *, 0x14) = temp_v1_2;
    if (((s64) ((s64) temp_v1_2 << 0x38) >> 0x38) <= 0) {
        M2C_FIELD(((void *)D_00CCAE00), s8 *, 0x14) = (s8) ((((*(u8 *)D_00591BE4) * 0x1388) / 1000) + ((u32) ((*(u8 *)D_00591BE4) * 0x1388) >> 0x1F));
        func_00C168D0(((void *)D_00CCAE00) + 0x14, 1);
    }
}
