/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364C0(void);
extern u8 func_00BF6270(void);
M2C_UNK func_001CD9E0(f32);                         /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
void **func_00B2A420(u8);                           /* extern */
s32 func_00B3B1F0(void *);                          /* extern */
M2C_UNK func_00B84330(void *, s32, u16, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_00B897B0(void *);                      /* extern */
M2C_UNK func_00B93E50(void *, M2C_UNK);             /* extern */
M2C_UNK func_00B93FA0(void *);                      /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCD72[];
extern char D_00CBCD81[];

void func_00B925D0(void *arg0) {
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;
    f32 var_f12;
    s32 temp_v0_2;
    u16 temp_s0_2;
    void **temp_s0;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;

    temp_s0 = func_00B2A420(func_00BF6270());
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    temp_v0_2 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (temp_v0_2 >= 0) {
        var_f12 = (f32) temp_v0_2;
    } else {
        var_f12 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
    }
    func_001CD9E0(var_f12);
    if ((func_00B364C0() == 2) && (M2C_FIELD(*temp_s0, u8 *, 0x4E) != 0) && (func_00B3B1F0(arg0) != 0)) {
        if ((*(u8 *)D_00CBCD81) != 2) {
            switch ((*(u8 *)D_00CBCAD1)) {                   /* switch 1; irregular */
            case 8:                                 /* switch 1 */
                var_a1 = 0xA00;
                break;
            case 7:                                 /* switch 1 */
                var_a1 = 0xA00;
                break;
            case 9:                                 /* switch 1 */
                /* fallthrough */
            default:                                /* switch 1 */
            case 6:                                 /* switch 1 */
                var_a1 = 0xC00;
                break;
            }
            func_00B93E50(arg0, var_a1);
            func_00B93FA0(arg0);
            return;
        }
        (*(u8 *)D_00CBCD81) = 3;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = (u16) M2C_FIELD(*temp_s0, u16 *, 0x26);
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_v1, u16 *, 0x28) = (u16) M2C_FIELD(temp_v1, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), u8 *, 0x2D);
        func_00B897B0(arg0);
        temp_s0_2 = (*(u16 *)D_00CBCD72);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59C, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        func_00B84330(arg0, func_00BF6270() & 0xFF, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), 0, temp_s0_2 & 0xFFFF, 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x2C;
    } else if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x44) & 0x80) || ((*(u8 *)D_00CBCD81) == 0xFF)) {
        switch ((*(u8 *)D_00CBCAD1)) {                       /* switch 2; irregular */
        case 8:                                     /* switch 2 */
            var_a1_2 = 0xA00;
            break;
        case 7:                                     /* switch 2 */
            var_a1_2 = 0xA00;
            break;
        case 9:                                     /* switch 2 */
            /* fallthrough */
        default:                                    /* switch 2 */
        case 6:                                     /* switch 2 */
            var_a1_2 = 0xC00;
            break;
        }
        func_00B93E50(arg0, var_a1_2);
        func_00B93FA0(arg0);
    }
}
