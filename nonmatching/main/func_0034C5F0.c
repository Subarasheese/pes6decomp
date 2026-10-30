/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_00310340(void *, s32);
M2C_UNK func_00310D50(M2C_UNK *, M2C_UNK);          /* extern */
extern s16 D_003E9F68;
extern char D_0061C6E0[];
extern char D_0061C6E4[];
extern char D_0061C6E8[];

s32 func_0034C5F0(s32 *arg0, s32 arg1) {
    s16 sp3E;
    s32 *temp_a2_2;
    s32 *temp_a2_4;
    s32 *temp_a3;
    s32 *temp_a3_2;
    s32 temp_a2;
    s32 temp_a2_3;

    *arg0 = 0;
    func_00310340(&sp3E, arg1);
    func_00310D50(((void *)D_0061C6E0), 0);
    func_00310D50(((void *)D_0061C6E8), 1);
    if (D_003E9F68 < sp3E) {
        *arg0 |= 0x80000001;
    }
    temp_a2 = (arg1 & 0xFF) * 8;
    temp_a3 = ((void *)D_0061C6E0) + temp_a2;
    temp_a2_2 = ((void *)D_0061C6E4) + temp_a2;
    if (*temp_a2_2 < *temp_a3) {
        *arg0 |= 0x80000002;
    }
    if (*temp_a3 < *temp_a2_2) {
        *arg0 |= 0x80000004;
    }
    temp_a2_3 = ((arg1 & 0xFF) ^ 1) * 8;
    temp_a3_2 = ((void *)D_0061C6E0) + temp_a2_3;
    temp_a2_4 = ((void *)D_0061C6E4) + temp_a2_3;
    if (*temp_a2_4 < *temp_a3_2) {
        *arg0 |= 0x40000002;
    }
    if (*temp_a3_2 < *temp_a2_4) {
        *arg0 |= 0x40000004;
    }
    if (sp3E == D_003E9F68) {
        *arg0 |= 0x40000001;
    }
    return 0;
}
