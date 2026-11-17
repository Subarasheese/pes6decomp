/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002CE1E0(u8 *buf, s32 a1, s32 a2, s32 a3, s32 a4);

void func_00241660(u8 *out, s32 a1, s32 mode, s32 flag) {
    u8 buf[4];
    s32 s1;
    s32 s0;
    s32 i;

    for (i = 0; i < 4; i++) buf[i] = 0;
    s0 = -1;
    if (mode == 2) {
        s1 = flag ? 3 : 1;
        func_002CE1E0(buf, a1, s1, 5, 0);
        goto done;
    }
    if (mode == 3) {
        s1 = flag ? 2 : 0;
    } else if (mode == 1 || mode == 0) {
        s1 = flag ? 3 : 1;
    }
    if (mode == 0) {
        if (func_002CE1E0(buf, a1, s1, 3, 2) == 1) goto done;
        if (func_002CE1E0(buf, a1, s1, 4, 2) == 1) goto done;
        if (func_002CE1E0(buf, a1, s1, 3, 1) == 0 || func_002CE1E0(buf, a1, s1, 4, 1) == 0) {
            if (func_002CE1E0(buf, a1, s1, 0, 0) == 1) goto done;
        }
        if (func_002CE1E0(buf, a1, s1, 3, 1) == 1) goto done;
        func_002CE1E0(buf, a1, s1, 4, 1);
        goto done;
    }
    if (func_002CE1E0(buf, a1, s1, 3, 2) == 1) s0 = 3;
    if (s0 == -1) {
        if (func_002CE1E0(buf, a1, s1, 4, 2) == 1) s0 = 4;
    }
    if (s0 == -1) {
        if (func_002CE1E0(buf, a1, s1, 3, 1) == 0 || func_002CE1E0(buf, a1, s1, 4, 1) == 0) {
            if (func_002CE1E0(buf, a1, s1, 0, 0) == 1) s0 = 0;
        }
    }
    if (s0 == -1) {
        if (func_002CE1E0(buf, a1, s1, 3, 1) == 1) s0 = 3;
    }
    if (s0 == -1) {
        if (func_002CE1E0(buf, a1, s1, 4, 1) == 1) s0 = 4;
    }
    if (s0 != 3) {
        if (func_002CE1E0(buf, a1, s1, 3, 2) == 1) goto done;
    }
    if (s0 != 4) {
        if (func_002CE1E0(buf, a1, s1, 4, 2) == 1) goto done;
    }
    if (s0 != 0) {
        if (func_002CE1E0(buf, a1, s1, 0, 0) == 1) goto done;
    }
    if (s0 != 3) {
        if (func_002CE1E0(buf, a1, s1, 3, 0) == 1) goto done;
    }
    if (s0 != 4) {
        if (func_002CE1E0(buf, a1, s1, 4, 0) == 1) goto done;
    }
    if (func_002CE1E0(buf, a1, s1, 2, 0) == 1) goto done;
    func_002CE1E0(buf, a1, s1, 0, 0);
done:
    out[0] = buf[0];
    out[1] = buf[1];
    out[2] = buf[2];
    out[3] = buf[3];
}
