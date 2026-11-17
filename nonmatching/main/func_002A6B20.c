/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A55C0(void *);
extern void func_001A5620(void *);
extern void func_001A5670(f32);
extern f32 func_001A5660(void);
extern f32 func_001A4890(void);
extern void func_001A54F0(void *);
extern void func_001A4210(void *, s32, s32, s32, s32, f32, f32);
extern void func_001A48A0(f32);
extern void func_0029AF00(void);
extern void func_0029C7C0(void);
extern void func_0029D030(void);
extern void func_002A06E0(void);
extern s32 func_002A6E90(void);
extern f32 *D_003E74CC;
extern char D_005E19A0[];
extern char D_005E19A4[];
extern char D_005E1D20[];
extern char D_005E2300[];
extern char D_005E2304[];
extern char D_005E2308[];
extern char D_005E2310[];
extern char D_005E2314[];
extern char D_005E2318[];
extern char D_005E2320[];
extern char D_005E2324[];
extern char D_005E2330[];
extern char D_005E2460[];

s32 func_002A6B20(void) {
    f32 v[3];
    s32 r;
    s32 flags;
    void (*cb)(void);

    r = 0xFF;
    func_001A54F0(v);
    *(f32 *)D_005E2300 = v[0];
    *(f32 *)D_005E2304 = v[1];
    *(f32 *)D_005E2308 = v[2];
    func_001A55C0(v);
    *(f32 *)D_005E2310 = v[0];
    *(f32 *)D_005E2314 = v[1];
    *(f32 *)D_005E2318 = v[2];
    *(f32 *)D_005E2324 = func_001A5660();
    *(f32 *)D_005E2320 = 57.295776f * func_001A4890();
    if (func_002A6E90() != 0) {
        r = 1;
    }
    func_002A06E0();
    func_0029D030();
    func_0029C7C0();
    func_0029AF00();
    cb = *(void (**)(void))D_005E19A4;
    if (cb != 0) {
        cb();
    }
    *(f32 *)D_005E1D20 = *(f32 *)D_005E1D20 + *D_003E74CC;
    v[0] = *(f32 *)D_005E2300;
    v[1] = *(f32 *)D_005E2304;
    v[2] = *(f32 *)D_005E2308;
    func_001A5550(v);
    v[0] = *(f32 *)D_005E2310;
    v[1] = *(f32 *)D_005E2314;
    v[2] = *(f32 *)D_005E2318;
    func_001A5620(v);
    func_001A5670(*(f32 *)D_005E2324);
    func_001A48A0(0.017453292f * *(f32 *)D_005E2320);
    flags = *(s32 *)D_005E19A0;
    if ((flags & 0x100) && (flags & 0x800)) {
        func_001A4210(D_005E2330, 0, 1, 1, 7, 1.0f, *(f32 *)D_005E2460);
        *(f32 *)D_005E2460 = *(f32 *)D_005E2460 + *D_003E74CC;
    }
    if ((r & 0xFF) == 0xFF) {
        r = 0;
    }
    return r;
}
