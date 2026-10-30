/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00834150(s32);
extern s32 func_00833600(s32);
extern u8 func_00833330(s32);
extern s32 func_00825610(void);
extern s32 func_002371A0(s32);
extern void * func_00833020(s32);
extern u8 func_00833280(s32);
extern u16 func_00833FE0(s32);
extern s32 func_008333E0(s32);
extern void * func_00833B70(s32);
extern s32 func_00833F30(s32);
extern s32 func_00834090(s32);
extern u16 func_00833490(s32);
extern s32 func_00833540(s32);
extern u8 func_00833DD0(s32);
extern u8 func_00833E80(s32);
M2C_UNK func_00256440();                            /* extern */
M2C_UNK func_00256D50(M2C_UNK, s32, s32);           /* extern */
u8 func_00276FD0(void *, s32, s32);                 /* extern */
s32 func_002779F0(void *);                          /* extern */
M2C_UNK func_0080D150();                            /* extern */
s8 func_00832E30(s32);                              /* extern */
s8 func_00832FD0(s32);                              /* extern */
s8 func_00833230(s32);                              /* extern */
s8 func_00833980(s32);                              /* extern */
s8 func_00833B20(s32);                              /* extern */
s8 func_00833D80(s32);                              /* extern */
s32 func_00842110(s32);                             /* extern */
s32 func_00842150(s32);                             /* extern */
s32 func_00842210(s32);                             /* extern */
s32 func_00842250(s32);                             /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char Pes6MatchSquads[];
extern char D_008B144E[];

void func_0080CA80(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s2;
    s32 temp_s2_3;
    s32 temp_s2_5;
    s32 temp_s2_6;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s2;
    s32 var_s5;
    s8 temp_s0;
    s8 temp_s0_2;
    s8 temp_s0_3;
    s8 temp_s0_4;
    void *temp_s0_5;
    void *temp_s0_6;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2_2;
    void *temp_s2_4;
    void *temp_v0_3;
    void *temp_v0_4;

    if (func_00825610() == 6) {
        func_002371A0((s32) (*(u16 *)D_00591BB0));
        var_s1 = 0;
        do {
            temp_s2 = func_00842250(var_s1) & 0xFFFF;
            temp_s0 = func_00842210(var_s1) & 0xFF;
            func_00256D50(0, var_s1, temp_s2);
            temp_s2_2 = ((void *)Pes6MatchSquads) + (var_s1 * 0x348);
            M2C_FIELD(temp_s2_2, s8 *, 0x10) = temp_s0;
            M2C_FIELD(temp_s2_2, s8 *, 0x42) = 3;
            M2C_FIELD(temp_s2_2, s8 *, 0x40) = func_00834150(var_s1);
            M2C_FIELD(temp_s2_2, s8 *, 0x41) = func_00834090(var_s1);
            M2C_FIELD(temp_s2_2, s8 *, 0xD4) = func_00833980(var_s1);
            M2C_FIELD(temp_s2_2, u8 *, 0xF0) = func_00833E80(var_s1);
            M2C_FIELD(temp_s2_2, u8 *, 0xF1) = func_00833DD0(var_s1);
            M2C_FIELD(temp_s2_2, s8 *, 0xF2) = func_00833D80(var_s1);
            M2C_FIELD(temp_s2_2, s8 *, 0xC8) = func_00833B20(var_s1);
            var_s1 += 1;
        } while (var_s1 < 0x20);
        func_002371A0((s32) (*(u16 *)D_00591BB2));
        var_s1_2 = 0;
        do {
            temp_s2_3 = func_00842150(var_s1_2) & 0xFFFF;
            temp_s0_2 = func_00842110(var_s1_2) & 0xFF;
            func_00256D50(1, var_s1_2, temp_s2_3);
            temp_s2_4 = ((void *)Pes6MatchSquads) + (var_s1_2 * 0x348);
            M2C_FIELD(temp_s2_4, s8 *, 0x6910) = temp_s0_2;
            M2C_FIELD(temp_s2_4, s8 *, 0x6942) = 3;
            M2C_FIELD(temp_s2_4, s8 *, 0x6940) = func_00833600(var_s1_2);
            M2C_FIELD(temp_s2_4, s8 *, 0x6941) = func_00833540(var_s1_2);
            M2C_FIELD(temp_s2_4, s8 *, 0x69D4) = func_00832E30(var_s1_2);
            M2C_FIELD(temp_s2_4, u8 *, 0x69F0) = func_00833330(var_s1_2);
            M2C_FIELD(temp_s2_4, u8 *, 0x69F1) = func_00833280(var_s1_2);
            M2C_FIELD(temp_s2_4, s8 *, 0x69F2) = func_00833230(var_s1_2);
            M2C_FIELD(temp_s2_4, s8 *, 0x69C8) = func_00832FD0(var_s1_2);
            var_s1_2 += 1;
        } while (var_s1_2 < 0x20);
    } else {
        func_002371A0((s32) (*(u16 *)D_00591BB0));
        var_s1_3 = 0;
        do {
            temp_s2_5 = func_00842250(var_s1_3) & 0xFFFF;
            temp_s0_3 = func_00842210(var_s1_3) & 0xFF;
            func_00256D50(0, var_s1_3, temp_s2_5);
            temp_a0 = var_s1_3 * 0xF;
            temp_v0 = var_s1_3 * 0x78;
            var_s1_3 += 1;
            M2C_FIELD((((void *)Pes6MatchSquads) + ((temp_v0 - temp_a0) * 8)), s8 *, 0x10) = temp_s0_3;
        } while (var_s1_3 < 0x20);
        func_002371A0((s32) (*(u16 *)D_00591BB2));
        var_s1_4 = 0;
        do {
            temp_s2_6 = func_00842150(var_s1_4) & 0xFFFF;
            temp_s0_4 = func_00842110(var_s1_4) & 0xFF;
            func_00256D50(1, var_s1_4, temp_s2_6);
            temp_a0_2 = var_s1_4 * 0xF;
            temp_v0_2 = var_s1_4 * 0x78;
            var_s1_4 += 1;
            M2C_FIELD((((void *)Pes6MatchSquads) + ((temp_v0_2 - temp_a0_2) * 8)), s8 *, 0x6910) = temp_s0_4;
        } while (var_s1_4 < 0x20);
    }
    func_00256440();
    if (func_00825610() == 6) {
        var_s5 = 0;
        temp_s1 = ((void *)Pes6MatchSquads) + (((*(s8 *)D_008B144E) & 1) * 0x6900);
        do {
            temp_s0_5 = temp_s1 + (var_s5 * 0x348);
            M2C_FIELD(temp_s0_5, s8 *, 0x42) = func_00833F30(var_s5);
            M2C_FIELD(temp_s0_5, s8 *, 0x40) = func_00834150(var_s5);
            M2C_FIELD(temp_s0_5, s8 *, 0x41) = func_00834090(var_s5);
            M2C_FIELD(temp_s0_5, s8 *, 0xD4) = func_00833980(var_s5);
            temp_v0_3 = func_00833B70(var_s5);
            if (temp_v0_3 != NULL) {
                M2C_FIELD(temp_s0_5, u8 *, 0xF0) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0);
                M2C_FIELD(temp_s0_5, u8 *, 0xF1) = (u8) M2C_FIELD(temp_v0_3, u8 *, 1);
                M2C_FIELD(temp_s0_5, u8 *, 0xF2) = (u8) M2C_FIELD(temp_v0_3, u8 *, 2);
                M2C_FIELD(temp_s0_5, u8 *, 0xF3) = (u8) M2C_FIELD(temp_v0_3, u8 *, 3);
                temp_s3 = func_00833FE0(var_s5) & 0xFFFF;
                M2C_FIELD(temp_s0_5, u8 *, 0xF2) = func_00276FD0(temp_v0_3, temp_s3, func_002779F0(temp_v0_3) & 0xFFFF);
            }
            M2C_FIELD(temp_s0_5, s8 *, 0xC8) = func_00833B20(var_s5);
            var_s5 += 1;
        } while (var_s5 < 0x20);
        var_s2 = 0;
        temp_s1_2 = ((void *)Pes6MatchSquads) + ((((*(s8 *)D_008B144E) & 1) ^ 1) * 0x6900);
        do {
            temp_s0_6 = temp_s1_2 + (var_s2 * 0x348);
            M2C_FIELD(temp_s0_6, s8 *, 0x42) = func_008333E0(var_s2);
            M2C_FIELD(temp_s0_6, s8 *, 0x40) = func_00833600(var_s2);
            M2C_FIELD(temp_s0_6, s8 *, 0x41) = func_00833540(var_s2);
            M2C_FIELD(temp_s0_6, s8 *, 0xD4) = func_00832E30(var_s2);
            temp_v0_4 = func_00833020(var_s2);
            if (temp_v0_4 != NULL) {
                M2C_FIELD(temp_s0_6, u8 *, 0xF0) = (u8) M2C_FIELD(temp_v0_4, u8 *, 0);
                M2C_FIELD(temp_s0_6, u8 *, 0xF1) = (u8) M2C_FIELD(temp_v0_4, u8 *, 1);
                M2C_FIELD(temp_s0_6, u8 *, 0xF2) = (u8) M2C_FIELD(temp_v0_4, u8 *, 2);
                M2C_FIELD(temp_s0_6, u8 *, 0xF3) = (u8) M2C_FIELD(temp_v0_4, u8 *, 3);
                temp_s5 = func_00833490(var_s2) & 0xFFFF;
                M2C_FIELD(temp_s0_6, u8 *, 0xF2) = func_00276FD0(temp_v0_4, temp_s5, func_002779F0(temp_v0_4) & 0xFFFF);
            }
            M2C_FIELD(temp_s0_6, s8 *, 0xC8) = func_00832FD0(var_s2);
            var_s2 += 1;
        } while (var_s2 < 0x20);
    }
    func_0080D150();
}
