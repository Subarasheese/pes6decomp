/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00B9A770(f32 *, s32, s32, s32, s32);
extern void func_002744C0(s32, s32, f32 *);
extern char D_00CBCDF4[];
extern char D_005926FD[];
extern char D_00CBCDE8[];
extern char D_00CBD2A0[];
extern char D_00591E0C[];
extern char D_00CBCDE6[];
extern char D_00CBCDE5[];
void func_00B9CB40(f32 *out, s32 a1, s32 a2) {
    f32 buf[12];
    u8 s0;
    s0 = *(u8 *)(*(u8 **)(*(u8 **)(a2 + 4) + 4) + 0xC);
    *(u8 *)D_00CBCDF4 = 1;
    func_00B9A770(buf, a1, a2, 0, s0);
    if (*(u8 *)D_005926FD == 0 && *(u16 *)D_00CBCDE8 == 0 && *(u16 *)D_00CBD2A0 == 0 && *(s32 *)D_00591E0C != 0) {
        func_002744C0(a1, a2, &buf[3]);
    }
    if (*(u16 *)&buf[1] > 0) {
        *(u8 *)D_00CBCDE6 = s0;
        *(u8 *)D_00CBCDE5 = 0;
    }
    out[0] = buf[0];
    out[1] = buf[1];
    out[2] = buf[2];
}
