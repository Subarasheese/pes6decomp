/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B4390(void);
u16 func_00151EA0(M2C_UNK);                         /* extern */
M2C_UNK func_001C47E0(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00851E70(void *);                      /* extern */
M2C_UNK func_00851F90(void *, f32 *, f32 *, f32 *, u8, u8, s32 *, u16); /* extern */
M2C_UNK func_00853240(void *, s32);                 /* extern */
void *func_00853430(M2C_UNK, s32 *, M2C_UNK);       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E0C[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591E4F[];
extern char D_00591E51[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00591F14[];
extern char D_005926D8[];
extern char D_008B1454[];
extern char D_008B1458[];
extern char D_008B145C[];
extern char D_008B1460[];
extern char D_008B1464[];
extern char D_008B1466[];
extern char D_008B14F2[];
extern char D_008B14F4[];
extern char D_00CBD260[];
extern char D_00CBD26C[];

s32 func_00BC2410(void) {
    s32 sp28;
    u8 sp2C;
    u8 sp2D;
    s32 var_a7;
    s32 var_v1;
    u16 temp_a7;
    u8 *var_a6;
    u8 temp_v0;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0;

    sp28 = 0;
    temp_s0 = func_00853430(6, &sp28, 0x3C4);
    if (sp28 == 0) {
        func_001C48E8(temp_s0, 0, 0x3C4);
        M2C_FIELD(temp_s0, s16 *, 0) = 0x17;
        M2C_FIELD(temp_s0, s16 *, 2) = 4;
        func_00851E70(temp_s0);
        func_001C47E0(temp_s0 + 0x31C, ((void *)D_00CBD260), 0x64);
        M2C_FIELD(temp_s0, u16 *, 0x380) = func_009B4390();
        M2C_FIELD(temp_s0, s32 *, 0x388) = (s32) (*(s32 *)D_00591E0C);
        (*(s32 *)D_008B14F4) = M2C_FIELD(temp_s0, s32 *, 0x388);
        M2C_FIELD(temp_s0, u16 *, 0x382) = func_00151EA0(0xEFFF);
        M2C_FIELD(temp_s0, u16 *, 0x384) = (u16) ~M2C_FIELD(temp_s0, u16 *, 0x382);
        (*(s32 *)D_008B145C) = (s32) M2C_FIELD(temp_s0, u16 *, 0x382);
        temp_a7 = M2C_FIELD(temp_s0, u16 *, 0x384);
        (*(s32 *)D_008B1460) = (s32) temp_a7;
        M2C_FIELD(temp_s0, u8 *, 0x38C) = (u8) (*(u8 *)D_00591E4D);
        M2C_FIELD(temp_s0, u8 *, 0x38D) = (u8) (*(u8 *)D_00591E4E);
        M2C_FIELD(temp_s0, f32 *, 0x390) = (f32) (*(f32 *)D_00CBD26C);
        M2C_FIELD(temp_s0, f32 *, 0x394) = (f32) (*(f32 *)D_00591E5C);
        M2C_FIELD(temp_s0, f32 *, 0x398) = (f32) (*(f32 *)D_00591E60);
        M2C_FIELD(temp_s0, u8 *, 0x39C) = (u8) (*(u8 *)D_00591F14);
        M2C_FIELD(temp_s0, s16 *, 0x386) = (s16) (s32) (*(f32 *)D_005926D8);
        func_00851F90(temp_s0 + 0x3A4, ((void *)D_00591E60), ((void *)D_00591E5C), ((void *)D_00CBD26C), (*(u8 *)D_00591E4E), (*(u8 *)D_00591E4D), ((void *)D_008B1460), temp_a7);
        var_a7 = 0;
        var_a6 = &sp2C;
        sp2C = (*(u8 *)D_00591E4F);
        sp2D = (*(u8 *)D_00591E51);
        do {
            temp_v0 = *var_a6;
            if (temp_v0 == 0xFF) {
                var_v1 = 1;
            } else {
                var_v1 = (s32) temp_v0 % 23;
            }
            temp_a0 = temp_s0 + var_a7;
            var_a7 += 1;
            var_a6 += 1;
            temp_a1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
            M2C_FIELD(temp_a0, s8 *, 0x39D) = (s8) M2C_FIELD(temp_a1, u16 *, 0x30);
            M2C_FIELD(temp_a0, s8 *, 0x39F) = (s8) M2C_FIELD(temp_a1, s32 *, 0x98);
        } while (var_a7 < 2);
        (*(s16 *)D_008B1466) = 0;
        (*(s32 *)D_008B1454) = (*(s32 *)D_008B145C);
        (*(s16 *)D_008B1464) = 0;
        (*(s32 *)D_008B1458) = (*(s32 *)D_008B1460);
        (*(s16 *)D_008B14F2) = (s16) (s32) (*(f32 *)D_005926D8);
    }
    func_00853240(temp_s0, ((temp_s0 + 0x31C) - temp_s0) + 0xA8);
    return 0;
}
