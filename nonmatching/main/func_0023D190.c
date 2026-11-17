/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0023D560(s32 *a, s32 b, s32 c);

void func_0023D190(s8 *out, u8 *in) {
    s8 res[5] = {0};
    s32 a[11] = {0};
    s32 b[11] = {0};
    s32 i, j, v, sa, sb;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 11; j++) {
            u8 *p = in + j * 0x24;
            switch (i) {
            case 0:
                a[j] = ((p[2] & 0x7F) - 0x32) * 2;
                b[j] = ((p[0x10] & 0x7F) - 0x32) * 2;
                break;
            case 1:
                a[j] = ((p[3] & 0x7F) - 0x32) * 2;
                b[j] = ((p[4] & 0x7F) - 0x32) * 2;
                break;
            case 2:
                a[j] = ((p[0x17] & 0x7F) - 0x32) * 2;
                b[j] = ((p[0x17] & 0x7F) - 0x32) * 2;
                break;
            case 3:
                a[j] = ((p[6] & 0x7F) - 0x32) * 2;
                b[j] = ((p[7] & 0x7F) - 0x32) * 2;
                break;
            case 4:
                a[j] = ((p[0x18] & 0x7F) - 0x32) * 2;
                b[j] = ((p[0xC] & 0x7F) - 0x32) * 2;
                break;
            }
        }
        func_0023D560(a, 0, 10);
        func_0023D560(b, 0, 10);
        sa = a[10] + a[9] + a[8] + a[7] + a[6] + a[5];
        sb = b[10] + b[9] + b[8] + b[7] + b[6] + b[5];
        v = (sa / 6 + sb / 6) / 2;
        v = (s32)(1.2f * (f32)v);
        if (v >= 100) v = 100;
        if (v < 0) v = 0;
        res[i] = v;
    }
    for (i = 0; i < 5; i++) out[i] = res[i];
}
