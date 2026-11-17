/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA820;
extern char D_00CCCE30[];
extern char D_00CCCE4C[];
extern char D_00CCBD4C[];
extern char D_00CA85D8[];
extern char D_00CA85DC[];
extern char D_00CA8610[];
extern char D_00CA8614[];
extern char D_00CA8650[];
extern char D_00CA8654[];
extern char D_00CA86C0[];
extern char D_00CA86C4[];
extern char D_00CA86E0[];
extern char D_00CA86E4[];

void func_001EF900(s32, s32);

void func_00C73A40(s32 a0) {
    s32 t0[2];
    s32 t2[2];
    s32 t3[2];
    s32 t4[2];
    s32 t1[2];
    s32 i;
    s32 *p;
    s32 a1;

    t0[0] = *(s32 *)D_00CA85D8;
    t0[1] = *(s32 *)D_00CA85DC;
    p = (s32 *)(D_00CCCE30 + t0[D_003EA820] * 4 + 0x1C);
    for (i = 0; i < 8; i++) {
        func_001EF900(*p, a0 & 0xFF);
        p++;
    }
    t1[0] = *(s32 *)D_00CA8610;
    t1[1] = *(s32 *)D_00CA8614;
    a1 = a0;
    if (*(u8 *)D_00CCBD4C & 1) {
        a1 = 0;
    }
    func_001EF900(((s32 *)D_00CCCE4C)[t1[D_003EA820]], a1 & 0xFF);
    t2[0] = *(s32 *)D_00CA8650;
    t2[1] = *(s32 *)D_00CA8654;
    p = (s32 *)(D_00CCCE30 + t2[D_003EA820] * 4 + 0x1C);
    for (i = 0; i < 2; i++) {
        func_001EF900(*p, a0 & 0xFF);
        p++;
    }
    t3[0] = *(s32 *)D_00CA86C0;
    t3[1] = *(s32 *)D_00CA86C4;
    p = (s32 *)(D_00CCCE30 + t3[D_003EA820] * 4 + 0x1C);
    for (i = 0; i < 4; i++) {
        func_001EF900(*p, a0 & 0xFF);
        p++;
    }
    t4[0] = *(s32 *)D_00CA86E0;
    t4[1] = *(s32 *)D_00CA86E4;
    func_001EF900(((s32 *)D_00CCCE4C)[t4[D_003EA820]], a0 & 0xFF);
}
