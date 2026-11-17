/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_00C13870(u8 *);
s16 func_00C18C50(s32, f32, f32);

void func_00C0FF10(s32 arg0, u8 *arg1) {
    u8 buf[16];
    s32 i;
    u32 *w;
    u8 type;

    for (i = 0; i < 16; i++) {
        buf[i] = 0;
    }
    type = 0;
    w = (u32 *) (buf + 4);
    if (arg0 == 4) {
        type = 0x20;
        buf[1] = arg1[0];
        *(s16 *) (buf + 2) = func_00C18C50(arg0, (f32) *(s32 *) (arg1 + 0xC), (f32) *(s32 *) (arg1 + 0x10));
    } else if (arg0 == 3) {
        type = 0x1F;
        buf[1] = arg1[0];
        *(s16 *) (buf + 2) = func_00C18C50(arg0, (f32) *(s32 *) (arg1 + 0xC), (f32) *(s32 *) (arg1 + 0x10));
        for (i = 0; i < 11; i++) {
            *w = (*w & ~(3 << (i * 2))) | ((((s32) arg1[1 + i] >> 5) & 3) << (i * 2));
        }
    } else if (arg0 == 2 || arg0 == 1) {
        type = 0x1E;
        buf[1] = arg1[0];
        *(s16 *) (buf + 2) = func_00C18C50(arg0, (f32) *(s32 *) (arg1 + 0xC), (f32) *(s32 *) (arg1 + 0x10));
        for (i = 0; i < 11; i++) {
            buf[4 + i] = arg1[1 + i];
        }
    }
    if (type != 0) {
        buf[0] = type;
        func_00C13870(buf);
    }
}
