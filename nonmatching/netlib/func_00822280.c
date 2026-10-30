/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00842990(M2C_UNK);                     /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */
M2C_UNK func_00842A50(M2C_UNK);                     /* extern */
M2C_UNK func_00842A80(M2C_UNK);                     /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
extern char D_008A4398[];
extern char D_008A5F70[];
extern char D_008A64CC[];
extern char D_008A7428[];

s32 func_00822280(void) {
    s32 temp_s1;
    s32 var_s3;
    u8 temp_v1;
    void *temp_a0;

    if ((*(s32 *)D_008A4398) == 0) {
        return 1;
    }
    if (((void *)D_008A5F70) == NULL) {
        return 1;
    }
    temp_s1 = (*(s32 *)D_008A4398) + 0x4BBC;
    func_001C48E8(((void *)D_008A64CC), 0, 0xF5C);
    func_001C48E8(((void *)D_008A7428), 0, 0xF5C);
    var_s3 = 0;
    do {
        temp_a0 = temp_s1 + (var_s3 * 0x38);
        if (M2C_FIELD(temp_a0, s32 *, 0xC) != 0) {
            temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x10);
            switch (temp_v1) {                      /* irregular */
            case 1:
                func_001C4730(((void *)D_008A7428) + (M2C_FIELD(((void *)D_008A7428), s32 *, 4) * 0x38) + 0xC, temp_a0 + 0xC, 0x38);
                M2C_FIELD(((void *)D_008A7428), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_008A7428), s32 *, 4) + 1);
                break;
            case 0:
                func_001C4730(((void *)D_008A64CC) + ((*(s32 *)D_008A64CC) * 0x38) + 0xC, temp_a0 + 0xC, 0x38);
                (*(s32 *)D_008A64CC) += 1;
                break;
            }
        }
        var_s3 += 1;
    } while (var_s3 < 0x46);
    func_00842A90(1);
    func_00842A80(1);
    func_00842A50(1);
    func_008429F0(1);
    func_00842990(1);
    return 4;
}
