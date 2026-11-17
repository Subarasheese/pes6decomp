/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CA8580[];
extern char D_00CA8540[];
extern char D_00CA8550[];
extern char D_00CA8570[];
extern char D_00CCCE30[];
extern char D_00CCBCD8[];
extern s32 func_00C8B100(s32);
extern void func_001F6FC0(s32, void *, u32, s32);
extern f32 func_001F6F60(s32, u32, s32);
extern void func_001EE5D0(s32, void *);
extern void func_001EF860(s32, void *);
extern void func_001EEAC0(s32, s32);
extern void func_001EE630(s32, void *);
extern void func_00C94090(void *, s32, void *, void *, s32, s32);
extern void func_001EF900(s32, s32);

void func_00C716C0(u32 arg) {
    s32 st[28];
    s32 va[4];
    s16 *sh = (s16 *)(st + 22); f32 *fl = (f32 *)(st + 24);
    s32 *g = (s32 *)D_00CA8580;
    u32 idx = arg & 0xFF;
    s32 s2, s3, i;
    s32 *s4;
    s16 *p;
    st[16+0] = g[0]; st[16+1] = g[1]; st[16+2] = g[2]; st[16+3] = g[3];
    st[12+0] = g[4]; st[12+1] = g[5]; st[12+2] = g[6]; st[12+3] = g[7];
    st[8+0] = g[8]; st[8+1] = g[9]; st[8+2] = g[10]; st[8+3] = g[11];
    s2 = *(s32 *)D_00CCBCD8;
    s4 = (s32 *)(D_00CCCE30 + st[16+idx] * 4 + 0x1C);
    st[0] = g[12]; st[1] = g[13]; st[2] = g[14]; st[3] = g[15];
    s3 = func_00C8B100(1);
    if (idx == 3) {
        p = (s16 *)D_00CA8570;
        sh[0] = p[0]; sh[1] = p[1]; sh[2] = p[2]; sh[3] = p[3];
    } else if (idx == 0) {
        p = (s16 *)D_00CA8550;
        sh[0] = p[0]; sh[1] = p[1]; sh[2] = p[2]; sh[3] = p[3];
    } else if (idx == 2 || idx == 1) {
        p = (s16 *)D_00CA8540;
        sh[0] = p[0]; sh[1] = p[1]; sh[2] = p[2]; sh[3] = p[3];
    }
    {
        u32 s0 = st[idx];
        fl[0] = (f32)sh[2];
        fl[1] = (f32)sh[3];
        func_001F6FC0(s2, (st+4), s0 & 0xFFFF, 2);
        fl[2] = func_001F6F60(s2, s0 & 0xFFFF, 2);
    }
    for (i = 0; i < st[12+idx]; i++) {
        func_001EE5D0(s4[i], va);
        ((f32 *)va)[2] = fl[2];
        func_001EF860(s4[i], va);
        func_001EEAC0(s4[i], s3);
        func_001EE630(s4[i], sh);
    }
    func_00C94090(s4, st[12+idx], (st+4), fl, st[8+idx], 5);
    if (idx == 3) func_001EF900(s4[0], 0);
}
