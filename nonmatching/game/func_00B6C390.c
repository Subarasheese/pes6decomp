/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00973EC0(void *, M2C_UNK);             /* extern */
void **func_00B2A420(u8, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_00B6C390(void **arg0) {
    void **temp_v0;
    void *temp_a0;
    void *temp_a4;

    func_00973EC0(*arg0, 1);
    func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x4A3, 0x7E);
    M2C_FIELD(*arg0, s8 *, 0x4E) = 1;
    M2C_FIELD(*arg0, s8 *, 0x66) = 0xFF;
    M2C_FIELD(*arg0, s8 *, 0x16) = 0x47;
    M2C_FIELD(*arg0, s16 *, 0x18) = 0xC;
    temp_a0 = *arg0;
    temp_v0 = func_00B2A420(M2C_FIELD(((M2C_FIELD(temp_a0, u8 *, 0x13) * 0xB) + temp_a0), u8 *, 0x1B4), 0xFF, 1);
    temp_a4 = *temp_v0;
    M2C_FIELD(temp_a4, s8 *, 0x66) = 0xFF;
    M2C_FIELD(M2C_FIELD(*temp_v0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D);
    func_00B347F0(temp_v0, arg0, 0, 0, temp_a4, 0xFF, 0xBEB3B646, 0xC1366A7F);
    func_00209A00(M2C_FIELD(*temp_v0, void **, 4), 0x59E, 0);
    M2C_FIELD(*temp_v0, s8 *, 0x16) = 0x47;
    M2C_FIELD(*temp_v0, s16 *, 0x18) = 0xC;
}
