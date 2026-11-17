/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_001F5120(s32);
void func_001D7FA0(void *arg0) {
    void *temp_s0;
    void **list;
    s32 count;
    s32 i;
    s32 sum;

    temp_s0 = M2C_FIELD(arg0, void **, 0x1C);
    count = M2C_FIELD(temp_s0, u8 *, 0);
    if (count == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        return;
    }
    sum = 0;
    list = M2C_FIELD(temp_s0, void ***, 0xC);
    i = 0;
    if (count >= 9) {
        void **p = list;
        do {
            i += 8;
            sum += M2C_FIELD(p[0], u16 *, 4) + M2C_FIELD(p[1], u16 *, 4) + M2C_FIELD(p[2], u16 *, 4) + M2C_FIELD(p[3], u16 *, 4)
                 + M2C_FIELD(p[4], u16 *, 4) + M2C_FIELD(p[5], u16 *, 4) + M2C_FIELD(p[6], u16 *, 4) + M2C_FIELD(p[7], u16 *, 4);
            p += 8;
        } while (i < count - 8);
    }
    for (; i < count; i++) {
        sum += M2C_FIELD(list[i], u16 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 0x10;
    if (sum != 0) {
        M2C_FIELD(arg0, s32 *, 0x50) += 0x20;
        M2C_FIELD(arg0, s32 *, 0x50) += 0x10;
        M2C_FIELD(arg0, s32 *, 0x50) += func_001F5120(M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), u8 *, 3));
        M2C_FIELD(arg0, s32 *, 0x50) += 0x10;
        M2C_FIELD(arg0, s32 *, 0x50) += 0x10;
        M2C_FIELD(arg0, s32 *, 0x50) += M2C_FIELD(temp_s0, u8 *, 0) * 0x10;
        M2C_FIELD(arg0, s32 *, 0x50) += sum * 0x30;
        M2C_FIELD(arg0, s32 *, 0x50) += 0x20;
        M2C_FIELD(arg0, s32 *, 0x50) += 0x10;
    }
}
