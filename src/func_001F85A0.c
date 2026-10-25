/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_001F85A0(u16 *src, u8 *dst) {
    u8 *d = dst;
    u32 c;
    while (*src != 0) {
        c = *src++;
        if ((s32)c < 0x80) {
            *d++ = c;
        } else if ((s32)c < 0x800) {
            d[0] = (((s32)c >> 6) & 0x1F) | 0xC0;
            d[1] = (c & 0x3F) | 0x80;
            d += 2;
        } else if ((s32)c < 0x10000) {
            d[0] = (((s32)c >> 12) & 0xF) | 0xE0;
            d[1] = (((s32)c >> 6) & 0x3F) | 0x80;
            d[2] = (c & 0x3F) | 0x80;
            d += 3;
        }
    }
    *d = 0;
    return dst;
}
