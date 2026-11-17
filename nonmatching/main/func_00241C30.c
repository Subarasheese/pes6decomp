/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s8 a; s8 b; s8 c; s8 d; } P;
typedef struct { P e[73]; } T;
typedef struct { s32 w[73]; } U;

extern U D_003A9FB0;
extern f32 func_00243930(P a, P b, s32 c, void *d);

s32 func_00241C30(s32 a, s32 b, s32 c, s32 d, s32 e) {
    s32 r = 0xFF;
    T yc, xc, y2c, x2c;
    T yd, xd, y2d, x2d;
    U tc, t2c, td, t2d;
    P zc, zd;
    f32 f;
    if (a == 0x48) {
        if (b == 0x3 || b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0xF || b == 0x10 || b == 0x14 || b == 0x15) {
            r = 0;
        }
    }
    else if (a == 0x47) {
        if (b == 0x0 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A) {
            r = 0;
        }
    }
    else if (a == 0x46) {
        if (b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43 || b == 0x46) {
            r = 53;
        }
    }
    else if (a == 0x43) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43) {
            r = 0;
        }
    }
    else if (a == 0x42) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43) {
            r = 0;
        }
    }
    else if (a == 0x3E) {
        if (b == 0x6 || b == 0x7 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43) {
            r = 0;
        }
    }
    else if (a == 0x3D) {
        if (b == 0x6 || b == 0x7 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43) {
            r = 0;
        }
    }
    else if (a == 0x3A) {
        if (b == 0x6 || b == 0x7 || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43 || b == 0x47) {
            r = 0;
        }
    }
    else if (a == 0x38) {
        if (b == 0x6 || b == 0x7 || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x42 || b == 0x43 || b == 0x47) {
            r = 0;
        }
    }
    else if (a == 0x35) {
        if (b == 0x29 || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x47) {
            r = 0;
        }
    }
    else if (a == 0x33) {
        if (b == 0x29 || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A || b == 0x3D || b == 0x3E || b == 0x47) {
            r = 0;
        }
    }
    else if (a == 0x30) {
        if (b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A) {
            r = 0;
        }
    }
    else if (a == 0x2E) {
        if (b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35 || b == 0x38 || b == 0x3A) {
            r = 0;
        }
    }
    else if (a == 0x2B) {
        if (b == 0x4 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x35) {
            r = 0;
        }
    }
    else if (a == 0x29) {
        if (b == 0x1A || b == 0x1C || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x33 || b == 0x35) {
            r = 0;
        }
    }
    else if (a == 0x26) {
        if (b == 0x4) {
            r = 0;
        }
    }
    else if (a == 0x25) {
        if (b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30) {
            r = 0;
        }
    }
    else if (a == 0x24) {
        if (b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30) {
            r = 0;
        }
    }
    else if (a == 0x21) {
        if (b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x2E || b == 0x30 || b == 0x46) {
            r = 0;
        }
    }
    else if (a == 0x1F) {
        if (b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x2E || b == 0x30 || b == 0x46) {
            r = 0;
        }
    }
    else if (a == 0x1C) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x46 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x1A) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x1A || b == 0x1C || b == 0x1F || b == 0x21 || b == 0x24 || b == 0x25 || b == 0x29 || b == 0x2B || b == 0x2E || b == 0x30 || b == 0x46 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x16) {
        if (b == 0x4 || b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x1A || b == 0x1C || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x15) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x1A || b == 0x1C || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x11) {
        if (b == 0x4 || b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x1A || b == 0x1C || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x10) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x1A || b == 0x1C || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0xC) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x1A || b == 0x1C || b == 0x42 || b == 0x43 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0xB) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x1A || b == 0x1C || b == 0x42 || b == 0x43 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x7) {
        if (b == 0x4 || b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x42 || b == 0x43 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x6) {
        if (b == 0x6 || b == 0x7 || b == 0xB || b == 0xC || b == 0x10 || b == 0x11 || b == 0x15 || b == 0x16 || b == 0x42 || b == 0x43 || b == 0x48) {
            r = 0;
        }
    }
    else if (a == 0x4) {
        if (b == 0x3 || b == 0x7 || b == 0x11 || b == 0x16 || b == 0x26 || b == 0x2B || b == 0x43 || b == 0x48) {
            r = 6;
        } else {
            tc = D_003A9FB0;
            xc = *(T *)&tc;
            yc = *(T *)&tc;
            if (func_00243930(*(P *)((char *)&yc + a * 4), *(P *)((char *)&xc + b * 4), 0, &tc.w[72]) < 10.0f) {
                t2c = D_003A9FB0;
                x2c = *(T *)&t2c;
                zc = *(P *)&x2c;
                y2c = *(T *)&t2c;
                f = func_00243930(*(P *)((char *)&y2c + a * 4), zc, 0, (void *)(s32)(u8)zc.a);
                if (10.0f < f) {
                    r = 0;
                } else {
                    r = 3;
                }
            }
        }
    }
    else if (a == 0x3) {
        if (b == 0x3 || b == 0x4) {
            r = 0;
        }
    }
    else if (a == 0x0) {
        if (b == 0x0 || b == 0x47) {
            r = 3;
        }
    }
    else {
        td = D_003A9FB0;
        xd = *(T *)&td;
        yd = *(T *)&td;
        if (func_00243930(*(P *)((char *)&yd + a * 4), *(P *)((char *)&xd + b * 4), 0, &td.w[72]) < 10.0f) {
            t2d = D_003A9FB0;
            x2d = *(T *)&t2d;
            zd = *(P *)&x2d;
            y2d = *(T *)&t2d;
            f = func_00243930(*(P *)((char *)&y2d + a * 4), zd, 0, (void *)(s32)(u8)zd.a);
            if (10.0f < f) {
                r = 0;
            } else {
                r = 3;
            }
        }
    }

    if (r != 0xFF && e == 1) {
        if (c == ((s32 (*)(s32, s32, s32, s32, s32))0x00241C30)(a, c, 0, 0, 0)) {
            r = c;
        }
    }
    if (r != 0xFF && e == 1) {
        if (d == ((s32 (*)(s32, s32, s32, s32, s32))0x00241C30)(a, d, 0, 0, 0)) {
            r = d;
        }
    }
    if (r == 0xFF) {
        r = b;
    }
    return r;
}
