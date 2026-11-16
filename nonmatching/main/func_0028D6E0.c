/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s8 *func_002CA180(s32);
extern void func_002CA0F0(void *);
extern u8 func_002B8C00(s32);
extern u8 func_002B8CB0(s32);
M2C_UNK func_0028D140(u8 *, s8 *, s32, s32, s32);
s32 func_002B8DB0(s32, s32, s8 *);

void func_0028D6E0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s8 buf[16];
    s8 *src;
    s8 *dst;
    s32 n;
    u8 v;

    if (*arg0 != 0) {
        src = func_002CA180(arg2);
        dst = buf;
        n = 8;
        do {
            s8 t = src[1];
            n -= 1;
            dst[0] = src[0];
            src += 2;
            dst[1] = t;
            dst += 2;
        } while (n > 0);
        if (func_002B8DB0(arg2, n, dst) != 0) {
            v = func_002B8CB0(arg2);
            if (v == 2) {
                buf[0] = 0;
            } else if (v == 0) {
                buf[0] = 4;
            } else {
                buf[0] = 2;
            }
            v = func_002B8C00(arg2);
            if (v == 2) {
                buf[1] = 0;
            } else if (v == 0) {
                buf[1] = 4;
            } else {
                buf[1] = 2;
            }
        }
    } else {
        func_002CA0F0(buf);
    }
    func_0028D140(arg0, buf, arg1, arg2, arg3);
}
