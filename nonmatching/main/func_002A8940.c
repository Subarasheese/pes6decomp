/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001A4880(int);
extern void func_001A56D0(f32, f32);
extern char D_005E19A0[];
extern char D_005E2200[];
extern char D_005E2204[];

void func_002A8940(f32 x) {
    f32 v;
    s32 flags;

    if (x < 0.0f) {
        x = -x;
        if (x != 0.0f) {
            v = 40000.0f;
            if (x <= 40000.0f) {
                if (x < *(f32 *)D_005E2204) {
                    v = *(f32 *)D_005E2204;
                } else {
                    v = x;
                }
            }
            flags = *(s32 *)D_005E19A0 | 0x200;
            *(s32 *)D_005E19A0 = flags;
            x = v;
            if (flags & 2) {
                func_001A4880(1);
            } else {
                func_001A4880(0);
            }
        } else if (*(f32 *)D_005E2200 > 0.0f) {
            func_001A56D0(50.0f, 16000.0f);
        }
        *(f32 *)D_005E2200 = x;
        return;
    }
    if (x != 0.0f) {
        v = 30000.0f;
        if (x <= 30000.0f) {
            if (x < 200.0f) {
                v = 200.0f;
            } else {
                v = x;
            }
        }
        x = v;
    } else if (*(f32 *)D_005E2200 > 0.0f) {
        func_001A56D0(50.0f, 16000.0f);
    }
    *(f32 *)D_005E2200 = x;
    flags = *(s32 *)D_005E19A0 & ~0x200;
    *(s32 *)D_005E19A0 = flags;
    if (flags & 2) {
        func_001A4880(1);
    } else {
        func_001A4880(0);
    }
}
