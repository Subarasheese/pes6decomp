/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
extern int func_002DCA30(void);
extern void func_00BBB960(u32);
extern u8 func_00BF6270(void);
M2C_UNK func_009832C0(void *, M2C_UNK);             /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
void **func_00B2A420(M2C_UNK);                      /* extern */
M2C_UNK func_00B619E0(void **, s32);                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern s8 D_003EA7A8;
extern s8 D_003EA7A9;
extern s8 D_003EA7AA;
extern s8 D_003EA7AB;
extern char D_00591E14[];
extern char Pes6MatchSquads[];
extern char D_008B145C[];

void func_00BDCF40(void) {
    s32 temp_v0_2;
    s32 var_s0;
    u8 temp_a1;
    u8 temp_s2;
    void **var_s1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    (*(s32 *)D_00591E14) = 0;
    D_003EA7A8 = 0;
    D_003EA7A9 = 0;
    D_003EA7AA = 0;
    D_003EA7AB = 0;
    if (func_002DCA30() != 0) {
        func_00BBB960((*(u32 *)D_008B145C));
    }
    var_s1 = func_00B2A420(1);
    var_s0 = 0;
    do {
        temp_s2 = M2C_FIELD(*var_s1, u8 *, 0);
        if (temp_s2 != func_00BF6270()) {
            temp_v0 = *var_s1;
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x12);
            temp_v1 = (M2C_FIELD(temp_v0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a1 * 0x6900));
            if ((M2C_FIELD(temp_v1, u8 *, 0xF8) == 0) && (M2C_FIELD(temp_v1, u8 *, 0xD4) != 0)) {
                func_00B619E0(var_s1, temp_a1 * 0x69);
                temp_a0 = *var_s1;
                M2C_FIELD(*var_s1, s16 *, 0x2C) = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
                func_00BD4040(var_s1, 1);
                func_009832C0(*var_s1, 0x37);
                M2C_FIELD(*var_s1, s8 *, 0x16) = 0x4E;
                M2C_FIELD(*var_s1, s16 *, 0x18) = 5;
            }
        }
        var_s0 += 1;
        var_s1 += 8;
    } while (var_s0 < 0x16);
    if ((func_00C01090(0x18) == 0) && (func_00C01090(0x19) == 0)) {
        D_003EA7A9 = 0;
    } else {
        temp_v0_2 = func_00BBB8C0(3);
        switch (temp_v0_2) {                        /* irregular */
        case 1:
            D_003EA7A9 = 2;
            break;
        case 0:
            D_003EA7A9 = 1;
            break;
        default:
        case 2:
            D_003EA7A9 = 3;
            break;
        }
    }
    func_00B27010(0);
    func_00B25C50(0);
    func_002727C0(0x21);
    func_009E1CB0(3);
}
