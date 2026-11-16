/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003FB788[];
extern char D_003FB78C[];

void func_00130750(void *arg0) {
    u8 *a;
    u8 *b;
    u32 h;
    u32 r;

    a = *(u8 **)D_003FB788;
    b = *(u8 **)D_003FB78C;
    *(u8 **)D_003FB788 = a + 6;
    *(u8 **)D_003FB78C = b + 6;

    h = M2C_FIELD(a, u16 *, 0);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xA0) = r;
    h = M2C_FIELD(a, u16 *, 2);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xA4) = r;
    h = M2C_FIELD(a, u16 *, 4);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xA8) = r;
    h = M2C_FIELD(b, u16 *, 0);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xB0) = r;
    h = M2C_FIELD(b, u16 *, 2);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xB4) = r;
    h = M2C_FIELD(b, u16 *, 4);
    r = 0;
    if (h != 0) { r = ((h & 0x3FF) << 13) | (((h >> 15) & 1) << 31) | ((((h >> 10) & 0x1F) + 0x70) << 23); }
    M2C_FIELD(arg0, u32 *, 0xB8) = r;
}
