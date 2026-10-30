/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001440E0(void *, u32, s32, s32, s32);
extern void func_00144450(void);
extern void * func_00141A60(void);
extern void func_00144460(void);
extern int func_00141C70(void);
extern int func_00141C50(void);
extern u8 func_00142030(s32, s32);
extern int func_00141C60(void);
extern s32 func_00142090(void *);
s32 func_00143550(void *);                          /* extern */
void *func_001435B0(void *, void *, void *, s32);   /* extern */
void *func_00144100(M2C_UNK);                       /* extern */
M2C_UNK func_00144200();                            /* extern */
M2C_UNK func_001443D0();                            /* extern */
M2C_UNK func_00144880(s32);                         /* extern */
void *func_00144920(void *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_003E9810;
extern s32 D_003E9814;
extern s32 D_003E9818;
extern s32 D_003E981C;
extern void *D_003E9820;
extern char D_004FDFB8[];
extern char D_004FDFBC[];

void func_00144470(void *arg0, s32 arg1) {
    void *spA0;
    s32 spB0;
    s32 spB4;
    s32 spB8;
    s32 spBC;
    f32 spC0;
    f32 spC4;
    f32 spC8;
    f32 spCC;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s6;
    s32 var_s7;
    void *temp_v0;
    void *var_s2;
    void *var_s4;
    void *var_s4_2;
    void *var_s5;

    D_003E981C = 0;
    D_003E9818 = 0;
    if (func_00141C50() == 0) {
        var_s3 = M2C_FIELD(arg0, s32 *, 0x20);
        var_s2 = arg0 + M2C_FIELD(arg0, s32 *, 0x24);
        D_003E9810 = -1;
        D_003E9814 = 0;
        D_003E9820 = arg0 + M2C_FIELD(arg0, s32 *, 0x3C);
        func_00144460();
        func_00144450();
        if (D_003E9818 == 0) {
            if ((*(u8 *)D_004FDFBC) != 0) {
                func_001443D0();
            } else {
                func_00144200();
            }
        }
        var_s4 = func_00144100(0x70000000);
        if (var_s3 != 0) {
            do {
                if (func_00142030(arg1, (s32) M2C_FIELD(var_s2, u8 *, 0x43)) != 0) {
                    if (func_00142090(var_s2) == 0) {
                        var_s4 = func_001435B0(arg0, var_s2, var_s4, arg1);
                    }
                }
                var_s3 -= 1;
                var_s2 += M2C_FIELD(var_s2, s32 *, 0);
            } while (var_s3 != 0);
        }
        func_00144880(func_00143550(var_s4));
    } else {
        temp_s2 = M2C_FIELD(arg0, s32 *, 0x20);
        spA0 = arg0 + M2C_FIELD(arg0, s32 *, 0x24);
        var_s7 = func_00141C70();
        D_003E9820 = arg0 + M2C_FIELD(arg0, s32 *, 0x3C);
        func_00144460();
        func_00144450();
        if ((*(u8 *)D_004FDFBC) != 0) {
            func_001443D0();
        } else {
            func_00144200();
        }
        var_s5 = func_00144100(0x70000000);
        if ((*(u8 *)D_004FDFBC) != 0) {
            spB0 = (*(u32 *)D_004FDFB8) & 0xFF;
            spB4 = ((u32) (*(u32 *)D_004FDFB8) >> 8) & 0xFF;
            spB8 = ((u32) (*(u32 *)D_004FDFB8) >> 0x10) & 0xFF;
            spBC = ((u32) (*(u32 *)D_004FDFB8) >> 0x18) & 0xFF;
            temp_v0 = func_00141A60();
            spC0 = M2C_FIELD(temp_v0, f32 *, 0);
            spC4 = M2C_FIELD(temp_v0, f32 *, 4);
            spC8 = M2C_FIELD(temp_v0, f32 *, 8);
            spCC = M2C_FIELD(temp_v0, f32 *, 0xC);
            var_s5 = func_00144920(var_s5, 0x20, &spB0, 0x01000101, 0x6C0203EE, 0, 0);
        }
        temp_v0_2 = func_00141C60();
        var_s6 = 0;
        if (temp_v0_2 > 0) {
            do {
                var_s4_2 = spA0;
                var_s5 = func_001440E0(var_s5, 4U, var_s7, 0x01000101, 0x6C0401EC);
                var_s3_2 = 0;
                if (temp_s2 <= 0) {

                } else {
                    do {
                        if (func_00142030(arg1, (s32) M2C_FIELD(var_s4_2, u8 *, 0x43)) == 0) {

                        } else if (func_00142090(var_s4_2) == 0) {
                            var_s5 = func_001435B0(arg0, var_s4_2, var_s5, arg1);
                        }
                        var_s3_2 += 1;
                        var_s4_2 += M2C_FIELD(var_s4_2, s32 *, 0);
                    } while (var_s3_2 < temp_s2);
                }
                var_s6 += 1;
                var_s7 += 0x40;
            } while (var_s6 < temp_v0_2);
        }
        func_00144880(func_00143550(var_s5));
    }
}
