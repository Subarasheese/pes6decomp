/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_009B4050(void);
u16 Pes6Random_Below(s32);                         /* extern */
void func_001C48E8(void *, s32, s32);    /* extern */
void func_00851E70(void *);                      /* extern */
void func_00853240(void *, s32);                 /* extern */
void *func_00853430(s32, s32 *, s32);       /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E0C[];
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
extern char D_008B1454[];
extern char D_008B1458[];
extern char D_008B145C[];
extern char D_008B1460[];
extern char D_008B1464[];
extern char D_008B1466[];
extern char D_008B14F4[];
extern char D_00CBCDB1[];

s32 func_009B1200(void) {
    s32 sp2C;
    u16 temp_a6;
    void *temp_s0;

    sp2C = 0;
    temp_s0 = func_00853430(5, &sp2C, 0x3C4);
    if (sp2C == 0) {
        func_001C48E8(temp_s0, 0, 0x3C4);
        M2C_FIELD(temp_s0, s16 *, 0) = 0x17;
        M2C_FIELD(temp_s0, s16 *, 2) = 0;
        func_00851E70(temp_s0);
        M2C_FIELD(temp_s0, u8 *, 0x31C) = (u8) (*(u8 *)D_00591E57);
        M2C_FIELD(temp_s0, u8 *, 0x31D) = (u8) (*(u8 *)D_00591E64);
        M2C_FIELD(temp_s0, u8 *, 0x31E) = (u8) (*(u8 *)D_00591E65);
        M2C_FIELD(temp_s0, u8 *, 0x31F) = (u8) (*(u8 *)D_00591E66);
        M2C_FIELD(temp_s0, u8 *, 0x320) = (u8) (*(u8 *)D_00591E19);
        M2C_FIELD(temp_s0, u8 *, 0x321) = (u8) (*(u8 *)D_00591E1A);
        M2C_FIELD(temp_s0, u8 *, 0x322) = (u8) (*(u8 *)D_00591E1B);
        M2C_FIELD(temp_s0, u8 *, 0x323) = (u8) (*(u8 *)D_00591E4D);
        M2C_FIELD(temp_s0, u8 *, 0x324) = (u8) (*(u8 *)D_00591E4E);
        M2C_FIELD(temp_s0, f32 *, 0x328) = (f32) (*(f32 *)D_00591E58);
        M2C_FIELD(temp_s0, f32 *, 0x32C) = (f32) (*(f32 *)D_00591E5C);
        M2C_FIELD(temp_s0, f32 *, 0x330) = (f32) (*(f32 *)D_00591E60);
        M2C_FIELD(temp_s0, u16 *, 0x334) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0xA0);
        M2C_FIELD(temp_s0, u16 *, 0x336) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0xA2);
        M2C_FIELD(temp_s0, u16 *, 0x338) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0xA4);
        M2C_FIELD(temp_s0, s32 *, 0x33C) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x1470);
        M2C_FIELD(temp_s0, u8 *, 0x340) = func_009B4050();
        M2C_FIELD(temp_s0, u8 *, 0x325) = (u8) (*(u8 *)D_00CBCDB1);
        M2C_FIELD(temp_s0, u16 *, 0x342) = Pes6Random_Below(0xEFFF);
        M2C_FIELD(temp_s0, u16 *, 0x344) = (u16) ~M2C_FIELD(temp_s0, u16 *, 0x342);
        (*(s32 *)D_008B145C) = (s32) M2C_FIELD(temp_s0, u16 *, 0x344);
        temp_a6 = M2C_FIELD(temp_s0, u16 *, 0x342);
        (*(s32 *)D_008B1460) = (s32) temp_a6;
        (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
        (*(s32 *)D_008B1458) = (s32) temp_a6;
        (*(s16 *)D_008B1464) = 0;
        (*(s16 *)D_008B1466) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x348) = (s32) (*(s32 *)D_00591E0C);
        (*(s32 *)D_008B14F4) = M2C_FIELD(temp_s0, s32 *, 0x348);
    }
    func_00853240(temp_s0, 0x34C);
    return 0;
}
