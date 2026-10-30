/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern void func_001BC2B0(void);
extern int func_002DCA30(void);
extern void func_001BA3C0(void);
extern s32 func_0017F8A0(s32);
extern s32 func_001BC3D0(s32, s32, s32, s32);
s32 func_00814FC0(M2C_UNK *);                       /* extern */
s32 func_008157A0(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_0081C8F0(M2C_UNK);                     /* extern */
M2C_UNK func_0081CA90();                            /* extern */
M2C_UNK func_0081CB00(s32);                         /* extern */
M2C_UNK func_0081CC20(M2C_UNK);                     /* extern */
M2C_UNK func_0081CCA0(M2C_UNK);                     /* extern */
M2C_UNK func_0081D200(M2C_UNK);                     /* extern */
M2C_UNK func_0081D240(M2C_UNK);                     /* extern */
s32 func_0081E320(M2C_UNK);                         /* extern */
s32 func_008375D0();                                /* extern */
M2C_UNK func_0085EC20();                            /* extern */
M2C_UNK func_0085EC80(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00B24670();                                /* extern */
M2C_UNK func_00B246A0(M2C_UNK);                     /* extern */
M2C_UNK func_00B24700();                            /* extern */
s32 func_00B24750();                                /* extern */
s32 func_00B24770();                                /* extern */
M2C_UNK func_00B24800();                            /* extern */
s32 func_00B24830();                                /* extern */
M2C_UNK func_00C8D000();                            /* extern */
s32 func_00C8D620();                                /* extern */
M2C_UNK func_00C8E380();                            /* extern */
M2C_UNK func_00D0C980();                            /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_00814FB0[];
extern char D_00CA8960[];
extern char D_00CA8964[];
extern char D_00CA8968[];
extern char D_00CA896C[];
extern char D_00CA8970[];
extern char D_00CA8974[];
extern char D_00CA8978[];
extern char D_00CA897C[];
extern char D_00CA8980[];
extern char D_00CA8984[];
extern char D_00CA8988[];
extern char D_00CA898C[];
extern char D_00CB50E0[];
extern char D_00CCD550[];
extern char D_00CCD554[];
extern char D_00CCD558[];
extern char D_00CCD55C[];
extern char D_00CCD560[];
extern char D_00CCD564[];
extern char D_00CCD568[];
extern char D_00CCD56C[];
extern char D_00CCD570[];
extern char D_00CCD88C[];
extern M2C_UNK func_00C8C510;
extern M2C_UNK func_00C8C6C0;
extern M2C_UNK func_00C8C970;

void func_00C8C9A0(void) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    f32 sp8C;
    M2C_UNK *var_s1;
    M2C_UNK *var_s3_2;
    s32 *var_s2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s4;

    if (func_00B24830() != 0) {
        if (func_00B24750() != 0) {
            if ((func_002DCA30() == 0) || (func_00814FC0(((void *)D_00CB50E0)) != 0)) {
                if ((*(u8 *)D_00CCD88C) != 0) {
                    var_s0 = 0;
                    (*(u8 *)D_00CCD88C) = 0;
                    do {
                        var_s3 = 0;
loop_7:
                        func_001BA3C0();
                        var_s3 += 1;
                        if (var_s3 < 6) {
                            goto loop_7;
                        }
                        var_s0 += 1;
                    } while (var_s0 < 2);
                    func_001BC2B0();
                    (*(s32 *)D_00CCD550) = 0;
                    (*(s32 *)D_00CCD554) = 0;
                    (*(s32 *)D_00CCD558) = 0;
                    (*(s32 *)D_00CCD55C) = 0;
                    (*(s32 *)D_00CCD560) = 0;
                    (*(s32 *)D_00CCD564) = 0;
                    (*(s32 *)D_00CCD568) = 0;
                    (*(s32 *)D_00CCD56C) = 0;
                    func_00C8E380();
                }
                func_00B24700();
                func_00B24800();
                func_00B246A0(0);
                if (func_002DCA30() != 0) {
                    if (func_002DCA30() != 0) {
                        func_0085EC20();
                    }
                    func_00D0C980();
                    func_00D0FBE0(0);
                    func_0081D200(0);
                    func_0081CA90();
                    func_0081D240(0);
                }
            }
        } else if (func_00B24770() != 0) {
            if (func_0017F8A0(0x1024E) != 0) {
                if (func_002DCA30() != 0) {
                    func_00815B70(0);
                    if (func_008375D0() == 1) {
                        func_00D10140(0x10);
                    } else {
                        func_00D10140(0x14);
                    }
                    func_00D0CB50();
                    if (func_008157A0(((void *)D_00814FB0), ((void *)D_00814FB0), ((void *)D_00CB50E0)) != 0) {
                        goto block_21;
                    }
                } else {
block_21:
                    if ((*(u8 *)D_00CCD88C) == 0) {
                        (*(u8 *)D_00CCD88C) = 1;
                        func_00C8D000();
                        func_001BC300();
                        var_s0_2 = 0;
                        var_s3_2 = ((void *)D_00CCD570);
                        sp60 = (*(s32 *)D_00CA8960);
                        sp64 = (*(f32 *)D_00CA8964);
                        sp68 = (*(f32 *)D_00CA8968);
                        sp6C = (*(f32 *)D_00CA896C);
                        sp70 = (*(f32 *)D_00CA8970);
                        sp74 = (*(f32 *)D_00CA8974);
                        sp78 = (*(f32 *)D_00CA8978);
                        sp7C = (*(f32 *)D_00CA897C);
                        sp80 = (*(f32 *)D_00CA8980);
                        sp84 = (*(f32 *)D_00CA8984);
                        sp88 = (*(f32 *)D_00CA8988);
                        sp8C = (*(f32 *)D_00CA898C);
                        do {
                            var_s4 = 0;
                            var_s2 = &sp60;
                            var_s1 = var_s3_2;
loop_24:
                            M2C_FIELD(var_s1, s32 *, 0xC) = func_001BC3D0((s32) M2C_FIELD(var_s3_2, u8 *, 5), M2C_FIELD(var_s2, s32 *, 0), M2C_FIELD(var_s2, s32 *, 4), (s32) &func_00C8C970);
                            var_s4 += 1;
                            var_s2 += 8;
                            var_s1 += 4;
                            if (var_s4 < 6) {
                                goto loop_24;
                            }
                            var_s0_2 += 1;
                            var_s3_2 += 0x18C;
                        } while (var_s0_2 < 2);
                        (*(s32 *)D_00CCD550) = 0;
                        (*(s32 *)D_00CCD554) = 0;
                        (*(s32 *)D_00CCD558) = 0;
                        (*(s32 *)D_00CCD55C) = 0;
                        (*(s32 *)D_00CCD560) = 0;
                        (*(s32 *)D_00CCD564) = 0;
                        (*(s32 *)D_00CCD568) = 0;
                        (*(s32 *)D_00CCD56C) = 0;
                    }
                    func_00B24700();
                    func_00B246A0(1);
                    if (func_002DCA30() != 0) {
                        if (func_002DCA30() != 0) {
                            func_0085EC80(0xD, 1, &func_00C8C6C0, &func_00C8C510);
                        }
                        func_00D0FBE0(1);
                        func_0081C8F0(1);
                        func_0081D200(1);
                        func_0081CB00(func_0081E320(0xA));
                        func_0081CCA0(0);
                        func_0081D240(1);
                        func_0081CC20(3);
                    }
                    goto block_31;
                }
            }
        } else {
block_31:
            if ((func_00B24670() != 0) && (func_00C8D620() != 0)) {
                func_00B246A0(0);
            }
            (*(s32 *)D_00CCD550) = 0;
            (*(s32 *)D_00CCD554) = 0;
            (*(s32 *)D_00CCD558) = 0;
            (*(s32 *)D_00CCD55C) = 0;
            (*(s32 *)D_00CCD560) = 0;
            (*(s32 *)D_00CCD564) = 0;
            (*(s32 *)D_00CCD568) = 0;
            (*(s32 *)D_00CCD56C) = 0;
        }
    }
}
