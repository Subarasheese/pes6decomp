/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern s32 func_00154490(s32, s32);
extern void func_0020B3C0(void);
extern void func_00145380(s32);
extern void func_002648F0(int);
extern void func_002648E0(int);
extern s32 func_00145440(s32);
extern void func_0020B3A0(void);
extern void func_001AFD20(void);
s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00802FF0();                            /* extern */
M2C_UNK func_00803010();                            /* extern */
M2C_UNK func_00803060();                            /* extern */
M2C_UNK func_00803110();                            /* extern */
M2C_UNK func_0080F0C0(s32 *);                       /* extern */
s32 func_0080F340(s32);                             /* extern */
M2C_UNK func_00826E60();                            /* extern */
M2C_UNK func_009A7540();                            /* extern */
s32 func_009B22D0(f32);                             /* extern */
s32 func_009B4390();                                /* extern */
s32 func_009B44E0();                                /* extern */
M2C_UNK func_009B5D20();                            /* extern */
M2C_UNK func_00C92310();                            /* extern */
M2C_UNK func_00C92370(M2C_UNK);                     /* extern */
extern void *Pes6Ball_Current;
extern char D_00591DB4[];
extern char D_00828188[];
extern char D_0082818C[];
extern char D_00828190[];
extern char D_00829851[];

s32 func_0080EE00(s32 *arg0, s32 arg1) {
    s32 sp60;
    f32 sp64;
    f32 sp68;
    s32 *var_s1_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    u32 var_s2;

    var_s3 = 0;
    temp_s0 = *arg0;
    func_002648F0(temp_s0);
    temp_v1 = func_002646D0(temp_s0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        var_s1 = 0;
        func_009B5D20();
        func_0080F0C0(arg0);
        func_00C92310();
        if ((func_00154490(0, 0x4000) != 0) || (func_00154490(0, 0x1000) != 0)) {
            var_s1 = 1;
        }
        if (func_009B22D0(5.0f * -M2C_FIELD(M2C_FIELD(Pes6Ball_Current, void **, 0), f32 *, 0x80)) != 0) {
            func_00802FF0();
        }
        if ((var_s1 != 0) || (temp_s1 = func_009B4390() & 0xFFFF, (temp_s1 == ((s32) ((func_009B44E0() & 0xFFFF) + 0x12B) % 300)))) {
            func_009B44E0();
            func_009B4390();
            func_0020B3A0();
            func_00802FF0();
            func_002646E0(temp_s0);
        case 2:
            func_0020B3A0();
            func_00C92370(0);
            var_s3 = 1;
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x20) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x24) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
            M2C_FIELD(Pes6Ball_Current, f32 *, 0x28) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
            (*(s8 *)D_00591DB4) = 1;
        }
        break;
    case 0:
        var_s1_2 = &sp60;
        var_s2 = 0;
        sp60 = (*(s32 *)D_00828188);
        sp64 = (*(f32 *)D_0082818C);
        sp68 = (*(f32 *)D_00828190);
        do {
            var_v0 = func_00145440(func_001454C0(*var_s1_2));
            var_a1 = 0;
loop_8:
            M2C_FIELD(var_v0, s8 *, 3) = 0x40;
            M2C_FIELD(var_v0, s8 *, 7) = 0x40;
            var_a1 += 8;
            M2C_FIELD(var_v0, s8 *, 0xB) = 0x40;
            M2C_FIELD(var_v0, s8 *, 0xF) = 0x40;
            M2C_FIELD(var_v0, s8 *, 0x13) = 0x40;
            M2C_FIELD(var_v0, s8 *, 0x17) = 0x40;
            M2C_FIELD(var_v0, s8 *, 0x1B) = 0x40;
            M2C_FIELD(var_v0, s8 *, 0x1F) = 0x40;
            var_v0 += 0x20;
            if (var_a1 < 0x10) {
                goto loop_8;
            }
            func_00145380(*var_s1_2);
            var_s2 += 1;
            var_s1_2 += 4;
        } while (var_s2 < 3U);
        if (func_0080F340(arg1) == 0) {
            func_00264790((void *) temp_s0, 2U);
        } else {
            func_00803110();
            if ((*(s8 *)D_00829851) == 1) {
                func_0020B3C0();
            } else {
                func_00803060();
                func_00803010();
            }
            func_001AFD20();
            func_009A7540();
            func_00826E60();
            func_002646E0(temp_s0);
        }
        break;
    }
    func_002648E0(temp_s0);
    return var_s3;
}
