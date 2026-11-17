/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CCBD21[];
extern char D_00CCBD18[];
extern char D_00CCBD1A[];
extern char D_00CCCFA0[];
extern char D_00CCCFA8[];
extern char D_00CCCF9C[];
extern char D_00CA8554[];
extern char D_00CA8550[];
extern char D_00CA8540[];
extern char D_00CA8542[];
extern char D_00CA8544[];
extern char D_00CA8546[];
extern void func_001EE580(s32, void *);
extern void func_001EF5B0(s32, void *);
extern void func_001EE630(s32, void *);

void func_00C71510(s32 mode, s32 val) {
    f32 m[16];
    s16 h[4];
    s32 *s2;
    char *s3;
    s32 s4, s1, s0, d;
    s32 off;
    if (*(u8 *)D_00CCBD21 == 0) {
        return;
    }
    if (mode == 1) {
        s2 = (s32 *)D_00CCCFA8;
        s3 = D_00CCBD1A;
    } else if (mode == 0) {
        s2 = (s32 *)D_00CCCFA0;
        s3 = D_00CCBD18;
    } else if (mode == 2) {
        s1 = *(s32 *)D_00CCCF9C;
        func_001EE580(s1, m);
        off = val * 8;
        m[4] = m[0] + (f32)*(s16 *)(D_00CA8554 + off);
        m[12] = m[8] + (f32)*(s16 *)(D_00CA8554 + off);
        func_001EF5B0(s1, m);
        func_001EE630(s1, D_00CA8550 + off);
        return;
    } else {
        return;
    }
    s4 = 0;
    do {
        u8 *p = (u8 *)(s3 + s4);
        d = val % 10;
        s1 = d & 0xFF;
        if (s1 != *p) {
            h[0] = *(s16 *)D_00CA8540 + s1 * *(s16 *)D_00CA8544;
            h[1] = *(s16 *)D_00CA8542;
            h[2] = *(s16 *)D_00CA8544;
            h[3] = *(s16 *)D_00CA8546;
            func_001EE630(*s2, h);
            *p = s1;
        }
        s4++;
        s2++;
        val = val / 10;
    } while (s4 < 2);
}
