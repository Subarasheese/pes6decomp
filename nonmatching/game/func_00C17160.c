/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00C13AB0(void *a0, s32 a1, void *a2, s32 a3);
extern char D_00CCAE00[];

void func_00C17160(s32 arg0, char *arg1) {
    char *dst;
    char *e;
    s32 i;
    s32 b;

    e = D_00CCAE00 + *(u8 *)arg1 * 0x14;
    dst = e;
    i = 0;
    do {
        char *s = arg1 + i;
        i += 5;
        dst[1] = s[1];
        dst[2] = s[2];
        dst[3] = s[3];
        dst[4] = s[4];
        dst[5] = s[5];
        dst += 5;
    } while (i < 6);
    b = (u8)arg1[i + 1];
    e[i + 1] = b;
    *(f32 *)(e + 0xC) = *(f32 *)(arg1 + 0xC);
    *(f32 *)(e + 0x10) = *(f32 *)(arg1 + 0x10);
    func_00C13AB0(D_00CCAE00 + 0x28, arg0, arg1, b);
}
