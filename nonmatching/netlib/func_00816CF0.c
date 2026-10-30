/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_008882E0[];
extern char D_008A3A18[];
extern char D_008A3A20[];
extern char D_008A3A28[];
extern char D_008A3A30[];
extern char D_008A3A50[];
extern M2C_UNK func_00816DC0;
extern M2C_UNK func_00816E10;
extern M2C_UNK func_00816E60;

s32 func_00816CF0(void) {
    s32 temp_v0;

    temp_v0 = func_001BBEC0(&func_00816E60, &func_00816E10, &func_00816DC0, 0, 0, ((void *)D_008882E0));
    (*(s32 *)D_008A3A18) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)D_008A3A28) = 0;
        (*(s32 *)D_008A3A30) = 0;
        return 0;
    }
    (*(s32 *)D_008A3A30) = 0;
    func_001BBC60(temp_v0);
    func_001C48E8(((void *)D_008A3A50), 0, 0x210);
    (*(s32 *)D_008A3A28) = 1;
    (*(s32 *)D_008A3A20) = 1;
    if (((void *)D_008A3A50) != NULL) {
        M2C_FIELD(((void *)D_008A3A50), s8 *, 0) = 1;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 1) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 2) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 3) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 4) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 5) = 0;
        M2C_FIELD(((void *)D_008A3A50), s8 *, 0x20C) = 0;
    }
    return 1;
}
