/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003A4740[];
extern char D_003A7510[];
extern char D_003A83EE[];

u16 func_001F8390(u16 arg0) {
    s32 temp_a2;
    u16 *var_v0;
    u32 temp_a1;
    u32 temp_v1;

    temp_a2 = arg0 & 0xFFFF;
    temp_v1 = (temp_a2 >> 8) & 0xFF;
    temp_a1 = arg0 & 0xFF;
    if ((temp_a2 >= 0xF040) && (temp_a2 < 0xF9FD)) {
        return (temp_a2 + 0x7FFF + 0x6FC1) & 0xFFFF;
    }
    switch (temp_a2) {                              /* irregular */
    case 0xED95:
        return 0xFA11U;
    case 0xEDC7:
        return 0x6852U;
    case 0xEEE0:
        return 0x9AD9U;
    default:
        if ((temp_v1 | temp_a1) & 0x80) {
            if (!(temp_v1 & 0x80) && (temp_a1 >= 0xA0U) && (temp_a1 < 0xE0U)) {
                var_v0 = ((void *)D_003A83EE) + (temp_a1 * 2);
            } else if ((temp_v1 >= 0x81U) && (temp_v1 < 0xA0U)) {
                var_v0 = ((void *)D_003A4740) + ((temp_a1 + ((temp_v1 - 0x81) * 0xBD)) * 2);
            } else {
                var_v0 = ((void *)D_003A7510) + ((temp_a1 + ((temp_v1 - 0xE0) * 0xBD)) * 2);
            }
            return *var_v0;
        }
        return arg0;
    }
}
