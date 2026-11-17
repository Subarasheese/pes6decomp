/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));

s32 func_001EDD00(s32);
void func_001EE5D0(s32, void *);
void func_001EE630(s32, void *);
void func_001EEAC0(s32, s32);
void func_001EF370(s32, void *);
void func_001EF860(s32, void *);
f32 func_001F6F60(s32, u16, s32);
void func_001F6FC0(s32, void *, u16, s32);
s32 func_00C8B100(s32);
void func_00C8B160(s32, s32);
s32 func_00C8B190(s32);
extern s32 D_003EA820;
extern char D_00CA8620[];
extern char D_00CA8624[];
extern char D_00CA8628[];
extern char D_00CA862C[];
extern char D_00CA8630[];
extern char D_00CA8634[];
extern char D_00CA8640[];
extern char D_00CA8688[];
extern char D_00CCBD30[];
extern char D_00CCCE30[];

void func_00C74090(void) {
    f32 v[8];
    s128 q;
    s128 spC0;
    f32 spB0[4];
    s32 s4, s3, s0, s2, s6, fp, i;
    f32 f20;
    s32 idx;

    s4 = *(s32 *)D_00CCCE30;
    idx = D_003EA820;
    v[6] = *(f32 *)D_00CA8620;
    v[7] = *(f32 *)D_00CA8624;
    v[4] = *(f32 *)D_00CA8628;
    v[5] = *(f32 *)D_00CA862C;
    v[2] = *(f32 *)D_00CA8630;
    s3 = *(s32 *)(D_00CCBD30 + idx * 0x50);
    q = *(s128 *)D_00CA8640;
    v[3] = *(f32 *)D_00CA8634;
    fp = func_00C8B100(0);
    s6 = ((s32 *)(v + 6))[idx];
    s0 = s6;
    for (i = 0; i < 2; i++, s0++) {
        s2 = func_001EDD00(s4);
        func_001F6FC0(s3, &spC0, *(u16 *)&v[i + 2], 2);
        f20 = func_001F6F60(s3, *(u16 *)&v[i + 2], 2);
        func_001EF370(s2, &spC0);
        func_001EE5D0(s2, spB0);
        spB0[2] = f20;
        func_001EF860(s2, spB0);
        func_00C8B160(s0, s2);
    }
    func_001EEAC0(func_00C8B190(((s32 *)(v + 4))[idx]), fp);
    func_001EF370(s2, &q);
    s0 = func_00C8B190(s6);
    func_001EEAC0(s0, func_00C8B100(1));
    func_001EE630(s0, D_00CA8688);
}
