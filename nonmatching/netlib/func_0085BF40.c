/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0085C0A0();                            /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E1A[];
extern char D_00591E1B[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591E57[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00591E64[];
extern char D_00591E65[];
extern char D_00591E66[];
extern char D_00591E79[];
extern char D_008B1454[];
extern char D_008B1458[];
extern char D_008B145C[];
extern char D_008B1460[];
extern char D_008B1464[];
extern char D_008B1466[];
extern char D_008B14F4[];
extern char D_00CBCDB1[];

void func_0085BF40(void *arg0) {
    func_0085C0A0();
    (*(u8 *)D_00591E57) = M2C_FIELD(arg0, u8 *, 0x31C);
    (*(u8 *)D_00591E64) = M2C_FIELD(arg0, u8 *, 0x31D);
    (*(u8 *)D_00591E65) = M2C_FIELD(arg0, u8 *, 0x31E);
    (*(u8 *)D_00591E66) = M2C_FIELD(arg0, u8 *, 0x31F);
    (*(u8 *)D_00591E19) = M2C_FIELD(arg0, u8 *, 0x320);
    (*(u8 *)D_00591E1A) = M2C_FIELD(arg0, u8 *, 0x321);
    (*(u8 *)D_00591E1B) = M2C_FIELD(arg0, u8 *, 0x322);
    (*(u8 *)D_00591E4D) = M2C_FIELD(arg0, u8 *, 0x323);
    (*(u8 *)D_00591E4E) = M2C_FIELD(arg0, u8 *, 0x324);
    (*(f32 *)D_00591E58) = M2C_FIELD(arg0, f32 *, 0x328);
    (*(f32 *)D_00591E5C) = M2C_FIELD(arg0, f32 *, 0x32C);
    (*(f32 *)D_00591E60) = M2C_FIELD(arg0, f32 *, 0x330);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0xA4) = (u16) M2C_FIELD(arg0, u16 *, 0x338);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0xA0) = (u16) M2C_FIELD(arg0, u16 *, 0x334);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0xA2) = (u16) M2C_FIELD(arg0, u16 *, 0x336);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1470) = (s32) M2C_FIELD(arg0, s32 *, 0x33C);
    (*(u8 *)D_00591E79) = M2C_FIELD(arg0, u8 *, 0x340);
    (*(u8 *)D_00CBCDB1) = M2C_FIELD(arg0, u8 *, 0x325);
    (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
    (*(s32 *)D_008B1458) = (*(s32 *)D_008B1460);
    (*(s16 *)D_008B1464) = 0;
    (*(s16 *)D_008B1466) = 0;
    (*(s32 *)D_008B14F4) = M2C_FIELD(arg0, s32 *, 0x348);
}
