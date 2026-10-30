/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B150(s32, void *, s32, M2C_UNK);   /* extern */
extern char D_005CAB50[];
extern char D_01200F70[];

u8 func_0019C080(u8 arg0) {
    s32 temp_a2;
    s32 temp_v0;
    void *temp_a1;

    if ((arg0 >= 0x80U) || ((*(s32 *)D_005CAB50) == 0)) {
        return -1U;
    }
    temp_v0 = M2C_FIELD((void *)0x01200F78, s32 *, 4) & 0x1FF;
    temp_a2 = temp_v0 * 2;
    temp_a1 = temp_a2 + 0x01200F78;
    M2C_FIELD((void *)0x01200F78, s32 *, 4) = (s32) (temp_v0 + 1);
    M2C_FIELD(temp_a1, s8 *, 8) = 1;
    M2C_FIELD(temp_a1, u8 *, 9) = arg0;
    func_0019B150((*(s32 *)D_01200F70), temp_a1, temp_a2, 1);
    return arg0;
}
