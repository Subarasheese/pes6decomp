/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
extern u8 func_00B364A0(void);
extern void func_0027A5B0(void *, s8);
extern void * func_00B2A420(u32);
extern void func_00B364B0(u32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, u16); /* extern */
s32 func_00B3AE50(void **);                         /* extern */
M2C_UNK func_00B84330(void **, s32, u16, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00B897B0(void **);                     /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
extern char D_00CBCD10[];
extern char D_00CBCD12[];
extern char D_00CBCD14[];
extern char D_00CBCD70[];
extern char D_00CBCD72[];
extern char D_00CBCD74[];
extern char D_00CBCD81[];
extern char D_00CBCD8C[];

void func_00B9CF80(void **arg0) {
    M2C_UNK var_a1;
    s32 temp_v1;
    u16 var_a3;
    u16 var_s1;
    u8 **temp_v0;
    u8 *temp_a2;
    void *temp_v0_2;

    temp_v0 = func_00B2A420(func_00BF6270());
    func_0027A5B0(*arg0, (s8) **temp_v0);
    temp_v0_2 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    if ((func_00B3AE50(arg0) != 0) && ((*(u8 *)D_00CBCD81) == 0)) {
        if ((func_00B364A0() & 0xFF) == 1) {
            func_00B364B0(((*(u8 *)D_00CBCD8C) + 2) & 0xFF);
        }
        (*(u8 *)D_00CBCD81) = 1;
    }
    if ((*(u8 *)D_00CBCD81) == 2) {
        (*(u8 *)D_00CBCD81) = 3;
        func_00B897B0(arg0);
        temp_v1 = func_00B364A0() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 2:
            var_s1 = (*(u16 *)D_00CBCD70);
            var_a3 = (*(u16 *)D_00CBCD10);
            var_a1 = 0x4EF;
            break;
        case 3:
            var_s1 = (*(u16 *)D_00CBCD72);
            var_a3 = (*(u16 *)D_00CBCD12);
            var_a1 = 0x4F1;
            break;
        case 4:
            var_s1 = (*(u16 *)D_00CBCD74);
            var_a3 = (*(u16 *)D_00CBCD14);
            var_a1 = 0x4ED;
            break;
        default:
            var_a1 = 0x2ED;
            var_s1 = 0;
            var_a3 = 0;
            break;
        }
        temp_a2 = *temp_v0;
        M2C_FIELD(*arg0, u16 *, 0x26) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x26) + (var_a3 * ((M2C_FIELD(M2C_FIELD(temp_a2, void **, 4), u8 *, 0x2D) != 0) ? -1 : 1)));
        M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_v0, void **, 4), u8 *, 0x2D);
        func_00209A00(M2C_FIELD(*arg0, void **, 4), var_a1, 0, var_a3);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 0xA);
        func_00B84330(arg0, func_00BF6270() & 0xFF, M2C_FIELD(*arg0, u16 *, 0x26), 0, var_s1 & 0xFFFF, 0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x25;
    }
}
