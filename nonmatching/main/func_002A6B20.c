/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A55C0(int);
extern void func_001A5620(void *);
extern void func_001A5670(f32);
extern float func_001A5660(void);
extern float func_001A4890(void);
extern void func_001A54F0(int);
M2C_UNK func_001A4210(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_001A48A0(f32);                         /* extern */
M2C_UNK func_0029AF00();                            /* extern */
M2C_UNK func_0029C7C0();                            /* extern */
M2C_UNK func_0029D030();                            /* extern */
M2C_UNK func_002A06E0();                            /* extern */
s32 func_002A6E90();                                /* extern */
extern f32 *D_003E74CC;
extern char D_005E19A0[];
extern M2C_UNK (*D_005E19A4)();
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
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s32 var_s2;

    var_s2 = 0xFF;
    func_001A54F0((s32) &sp40);
    (*(f32 *)D_005E2300) = sp40;
    (*(f32 *)D_005E2304) = sp44;
    (*(f32 *)D_005E2308) = sp48;
    func_001A55C0((s32) &sp40);
    (*(f32 *)D_005E2310) = sp40;
    (*(f32 *)D_005E2314) = sp44;
    (*(f32 *)D_005E2318) = sp48;
    (*(f32 *)D_005E2324) = func_001A5660();
    (*(f32 *)D_005E2320) = 57.295776f * func_001A4890();
    if (func_002A6E90() != 0) {
        var_s2 = 1;
    }
    func_002A06E0();
    func_0029D030();
    func_0029C7C0();
    func_0029AF00();
    if (D_005E19A4 != NULL) {
        D_005E19A4();
    }
    sp40 = (*(f32 *)D_005E2300);
    (*(f32 *)D_005E1D20) += *D_003E74CC;
    sp44 = (*(f32 *)D_005E2304);
    sp48 = (*(f32 *)D_005E2308);
    func_001A5550(&sp40);
    sp40 = (*(f32 *)D_005E2310);
    sp44 = (*(f32 *)D_005E2314);
    sp48 = (*(f32 *)D_005E2318);
    func_001A5620(&sp40);
    func_001A5670((*(f32 *)D_005E2324));
    func_001A48A0(0.017453292f * (*(f32 *)D_005E2320));
    if (((*(s32 *)D_005E19A0) & 0x100) && ((*(s32 *)D_005E19A0) & 0x800)) {
        func_001A4210(((void *)D_005E2330), 0, 1, 1, 7, 0x3F800000, (*(f32 *)D_005E2460));
        (*(f32 *)D_005E2460) += *D_003E74CC;
    }
    if ((var_s2 & 0xFF) == 0xFF) {
        var_s2 = 0;
    }
    return var_s2;
}
