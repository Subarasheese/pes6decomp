/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00BD3BA0(void *, s32, s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_009B3070(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern void * func_00B2A420(u32);
extern void func_00B364D0(u32);
extern void func_00B364E0(void);
M2C_UNK func_00B37240();                            /* extern */
M2C_UNK func_00B382F0(void *);                      /* extern */
M2C_UNK func_00B82670(u8 *);                        /* extern */
M2C_UNK func_00B9E7C0();                            /* extern */
M2C_UNK func_00BD3BE0(void *, M2C_UNK);             /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAD2[];
extern char D_00CBCB22[];

void func_00B9EA10(void *arg0) {
    s16 var_v1_2;
    s32 temp_a1;
    s8 var_v1;
    u32 var_s1;
    u8 temp_s0;
    u8 temp_v1;
    void *temp_a0;
    void *temp_v0;

    temp_s0 = (*(u8 *)D_00CBCAD2);
    if (temp_s0 == (*(u8 *)D_00CBCAD1)) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xC0;
        return;
    }
    func_00B82670(((void *)D_00CBCAD2));
    var_s1 = 0;
    do {
        temp_v0 = func_00B2A420(var_s1);
        if (temp_v0 == arg0) {
            var_v1 = 3;
            goto block_8;
        }
        if (M2C_FIELD(M2C_FIELD(temp_v0, void **, 0), u8 *, 0x12) == M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x12)) {
            var_v1 = 4;
block_8:
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s8 *, 0x53) = var_v1;
        }
        var_s1 += 1;
    } while ((s32) var_s1 < 0x17);
    if ((*(u8 *)D_00CBCAD2) == 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        temp_a1 = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF;
        temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0xC);
        switch (temp_v1) {                          /* irregular */
        case 1:
        case 0:
            func_00BD3BE0(arg0, 1);
            (*(u8 *)D_00CBCB22) = 0;
            if ((func_00BBB8C0(0x87) % 3) != 0) {
                (*(u8 *)D_00CBCB22) |= 1;
            }
            var_v1_2 = 0xBF;
            break;
        case 2:
            (*(u8 *)D_00CBCB22) = 0;
            if ((func_00BBB8C0(0x87) % 3) != 0) {
                (*(u8 *)D_00CBCB22) |= 1;
            }
            func_00B382F0(arg0);
            func_00BD3BE0(arg0, 2);
            var_v1_2 = 0xC1;
            break;
        default:
            if ((func_009B3070((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26), temp_a1) & 0xFFFF) >= 0x3001) {
                func_00BD3BE0(arg0, 3);
                (*(u8 *)D_00CBCB22) = 0;
                if ((func_00BBB8C0(0x87) % 3) != 0) {
                    (*(u8 *)D_00CBCB22) |= 1;
                }
                func_00BD3BA0(arg0, 5, 0);
                var_v1_2 = 0xBE;
            } else {
                (*(u8 *)D_00CBCB22) = 0;
                if ((func_00BBB8C0(0x87) % 3) != 0) {
                    (*(u8 *)D_00CBCB22) |= 1;
                }
                var_v1_2 = 0xBF;
            }
            break;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_v1_2;
        func_00B9E7C0();
    }
    func_00B37240();
    (*(u8 *)D_00CBCAD2) = temp_s0;
    (*(u8 *)D_00CBCAD1) = (*(u8 *)D_00CBCAD2);
    func_00B364E0();
    func_00B364D0(3U);
}
