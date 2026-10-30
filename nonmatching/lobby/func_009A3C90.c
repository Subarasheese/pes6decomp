/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081D7E0(s32, M2C_UNK);                /* extern */
s32 func_00831A70();                                /* extern */
s32 func_00960C70();                                /* extern */
s32 func_00960D80();                                /* extern */
s32 func_00960F50();                                /* extern */
s32 func_00960FD0();                                /* extern */
s32 func_00961050();                                /* extern */
s32 func_009610D0();                                /* extern */
s32 func_00961110();                                /* extern */
s32 func_00961150();                                /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009A3BB0(void *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_009A3EB0(void *, s32);                 /* extern */
M2C_UNK func_009A4580(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_009A48C0(void *);                      /* extern */
M2C_UNK func_00D0C540();                            /* extern */
M2C_UNK func_00D0C7B0(f32 *, M2C_UNK);              /* extern */
extern void *D_003EAD04;
extern char D_009FEDD0[];
extern char D_009FEDD4[];
extern char D_009FEDD8[];
extern char D_009FEDDC[];
extern char D_009FEDE0[];
extern char D_009FEDE4[];

s32 func_009A3C90(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    f32 spA0;
    f32 spA4;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 var_s5;
    void *temp_v0;
    void *var_s0;

    temp_v0 = func_0099C7E0(0x278);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x268) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x260) = arg0;
        M2C_FIELD(temp_v0, s32 *, 0x264) = arg1;
        if (arg2 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x26C) = (s32) *arg2;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x26C) = 0;
        }
        if (arg3 == NULL) {
            M2C_FIELD(temp_v0, s32 *, 0x274) = 0;
        } else {
            M2C_FIELD(temp_v0, s32 *, 0x274) = (s32) *arg3;
        }
        var_s0 = temp_v0;
    } else {
        var_s0 = NULL;
    }
    D_003EAD04 = var_s0;
    if (var_s0 != NULL) {
        func_0099C760();
        func_0099C730(0x01FD000E);
    }
    sp90 = (*(f32 *)D_009FEDD0);
    sp94 = (*(f32 *)D_009FEDD4);
    sp98 = (*(f32 *)D_009FEDD8);
    sp9C = (*(f32 *)D_009FEDDC);
    spA0 = (*(f32 *)D_009FEDE0);
    spA4 = (*(f32 *)D_009FEDE4);
    if (var_s0 != NULL) {
        func_00D0C540();
        func_00D0C7B0(&sp90, 3);
    }
    func_009A48C0(var_s0);
    var_s5 = func_00961150();
    temp_v0_2 = func_00831A70();
    if (temp_v0_2 < var_s5) {
        var_s5 = temp_v0_2;
    }
    if (var_s5 >= 7) {
        var_s5 = 6;
    }
    if (var_s5 > 0) {
        func_009A3BB0(var_s0, 0, var_s5 & 0xFFFF, 1);
    }
    func_009A3EB0(var_s0, var_s5);
    if (var_s0 != NULL) {
        if ((var_s0 + 0x84) != NULL) {
            func_0081D7E0(M2C_FIELD(var_s0, s32 *, 0x84), 1);
        }
        temp_s4 = func_00961110();
        temp_s3 = func_00960C70();
        temp_s2 = func_00961050();
        temp_s1 = func_00960F50();
        temp_s6 = func_00960FD0();
        temp_s7 = func_00960D80();
        func_009A4580(var_s0 + 0x84, temp_s4, temp_s3, temp_s2, temp_s1, temp_s6, temp_s7, func_009610D0());
    }
    if (var_s5 <= 0) {
        M2C_FIELD(var_s0, s8 *, 0x268) = 4;
    }
    return 0;
}
