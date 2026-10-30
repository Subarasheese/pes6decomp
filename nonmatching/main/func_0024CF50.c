/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00221230(s32);
extern void * func_00225160(s32);
extern void func_002250C0(s32, s32);
s32 func_00225940(u8);                              /* extern */
extern char D_003AA200[];
extern s32 D_003E77B0;
extern char D_0053CB60[];
extern char D_0053CBB2[];
extern char D_0053CBE2[];
extern char D_0053CBE3[];
extern char D_0053CBE4[];
extern char D_0053CC18[];
extern char D_0053CC4C[];
extern char D_0053CC80[];
extern char D_0053CCB4[];
extern char D_0053CCE8[];
extern char D_0053CD1C[];
extern char D_00591C09[];

void func_0024CF50(void *arg0) {
    M2C_UNK *var_s1;
    s32 *var_a3;
    s32 temp_s0;
    s32 var_a2;
    s32 var_a4;
    s32 var_s1_2;
    s32 var_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;

    var_a4 = 0;
    if ((u32) ((*(u8 *)D_00591C09) - 1) < 2U) {
        var_s2 = 0;
        var_s1 = ((void *)D_003AA200);
        do {
            temp_s0 = var_s2 % 2;
            if (func_00225940(M2C_FIELD((D_003E77B0 + temp_s0), u8 *, 0x2C)) & 0xFF) {
                temp_v0 = func_00225160((s32) M2C_FIELD((D_003E77B0 + temp_s0), u8 *, 0x2C));
                M2C_FIELD(temp_v0, s8 *, 0) = (s8) M2C_FIELD(var_s1, s8 *, 2);
                M2C_FIELD(temp_v0, s8 *, 2) = (s8) M2C_FIELD(var_s1, s8 *, 3);
                M2C_FIELD(temp_v0, s8 *, 1) = (s8) M2C_FIELD(var_s1, s8 *, 0x32);
                M2C_FIELD(temp_v0, s8 *, 3) = (s8) M2C_FIELD(var_s1, s8 *, 0x33);
                func_002250C0((s32) M2C_FIELD((D_003E77B0 + temp_s0), u8 *, 0x2C), (s32) temp_v0);
                var_s1 += 0x34;
            }
            var_s2 += 1;
        } while (var_s2 < 2);
        return;
    }
    var_a2 = 0;
    var_a3 = ((void *)D_0053CB60);
    do {
        if (*var_a3 == 1) {
            var_a4 = 1;
        }
        var_a2 += 1;
        var_a3 += 4;
    } while (var_a2 < 8);
    if (var_a4 != 1) {
        var_s0 = arg0;
        var_s1_2 = 0;
        do {
            temp_v0_2 = func_00221230(var_s1_2);
            var_s1_2 += 1;
            M2C_FIELD(temp_v0_2, s8 *, 0) = (s8) M2C_FIELD(var_s0, s8 *, 2);
            M2C_FIELD(temp_v0_2, s8 *, 1) = (s8) M2C_FIELD(var_s0, s8 *, 0x32);
            M2C_FIELD(temp_v0_2, s8 *, 3) = (s8) M2C_FIELD(var_s0, s8 *, 0x33);
            M2C_FIELD(temp_v0_2, s8 *, 2) = (s8) M2C_FIELD(var_s0, s8 *, 3);
            var_s0 += 0x34;
        } while (var_s1_2 < 8);
        return;
    }
    (*(s8 *)D_0053CBB2) = M2C_FIELD(arg0, s8 *, 2);
    (*(s8 *)D_0053CBE2) = M2C_FIELD(arg0, s8 *, 0x32);
    (*(s8 *)D_0053CBE3) = M2C_FIELD(arg0, s8 *, 0x33);
    M2C_FIELD(((void *)D_0053CBE4), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x36);
    M2C_FIELD(((void *)D_0053CBE4), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x66);
    M2C_FIELD(((void *)D_0053CBE4), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x67);
    M2C_FIELD(((void *)D_0053CC18), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x6A);
    M2C_FIELD(((void *)D_0053CC18), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x9A);
    M2C_FIELD(((void *)D_0053CC18), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x9B);
    M2C_FIELD(((void *)D_0053CC4C), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x9E);
    M2C_FIELD(((void *)D_0053CC4C), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0xCE);
    M2C_FIELD(((void *)D_0053CC4C), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0xCF);
    M2C_FIELD(((void *)D_0053CC80), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0xD2);
    M2C_FIELD(((void *)D_0053CC80), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x102);
    M2C_FIELD(((void *)D_0053CC80), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x103);
    M2C_FIELD(((void *)D_0053CCB4), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x106);
    M2C_FIELD(((void *)D_0053CCB4), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x136);
    M2C_FIELD(((void *)D_0053CCB4), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x137);
    M2C_FIELD(((void *)D_0053CCE8), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x13A);
    M2C_FIELD(((void *)D_0053CCE8), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x16A);
    M2C_FIELD(((void *)D_0053CCE8), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x16B);
    M2C_FIELD(((void *)D_0053CD1C), s8 *, 2) = (s8) M2C_FIELD(arg0, s8 *, 0x16E);
    M2C_FIELD(((void *)D_0053CD1C), s8 *, 0x32) = (s8) M2C_FIELD(arg0, s8 *, 0x19E);
    M2C_FIELD(((void *)D_0053CD1C), s8 *, 0x33) = (s8) M2C_FIELD(arg0, s8 *, 0x19F);
}
