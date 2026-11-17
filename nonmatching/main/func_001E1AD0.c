/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_001E1AD0(u8 *arg0) {
    s32 i;
    s32 j;
    u8 *a3;
    u8 *a2;
    u8 *p;

    a3 = M2C_FIELD(arg0, u8 **, 0);
    a2 = M2C_FIELD(a3, u8 **, 8);
    i = 0;
    if ((s32) arg0[0x37] > 0) {
        do {
            j = 0;
            p = arg0 + ((a2[0xA] * i) << 6);
            if ((s32) arg0[0x36] > 0) {
                do {
                    j += 1;
                    M2C_FIELD(p, u16 *, 0x34) = (u16) (M2C_FIELD(p, u16 *, 0x34) - 1);
                    p += 0x40;
                } while (j < (s32) arg0[0x36]);
            }
            i += 1;
        } while (i < (s32) arg0[0x37]);
    }
    M2C_FIELD(a3, u16 *, 0x28) = (u16) (M2C_FIELD(a3, u16 *, 0x28) - 1);
}
