/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364E0(void);
extern void func_00B364D0(u32);
void *func_00B2A420(s32);                           /* extern */
M2C_UNK func_00B37240();                            /* extern */
M2C_UNK func_00B82670();                            /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B89460(void *arg0) {
    s32 var_t1;
    u16 temp_a0;
    void *temp_a0_2;
    void *temp_t0;
    void *var_v0;

    func_00B37240();
    func_00B82670();
    (*(s8 *)D_00CBCAD1) = 4;
    func_00B364E0();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8) (func_00BBB8C0(0x88) % 2);
    var_v0 = func_00B2A420((((s64) ((s64) M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x13) << 0x30) >> 0x30) * 0xB) + 2);
    var_t1 = 0;
    do {
        temp_t0 = M2C_FIELD(var_v0, void **, 0);
        if ((M2C_FIELD(temp_t0, u8 *, 0x16) == 0x33) && (M2C_FIELD(M2C_FIELD(temp_t0, void **, 4), u8 *, 0x2C) != 0)) {
            temp_a0 = M2C_FIELD(temp_t0, u16 *, 0x18);
            if ((temp_a0 != 0x7F) && (temp_a0 != 0x80)) {
                temp_a0_2 = M2C_FIELD(var_v0, void **, 4);
                if (M2C_FIELD(temp_a0_2, u8 *, 0x51) == 0) {
                    if (M2C_FIELD(temp_t0, u8 *, 0x12) == M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x12)) {
                        M2C_FIELD(temp_t0, s16 *, 0x1A) = 0xF;
                    }
                } else {
                    M2C_FIELD(temp_a0_2, u8 *, 0x51) = 0xFFU;
                    M2C_FIELD(M2C_FIELD(var_v0, void **, 0), u16 *, 0x18) = 0x7DU;
                    *(s8 *)0xCBCD8D = 0;
                }
            }
        }
        var_t1 += 1;
        var_v0 += 8;
    } while (var_t1 < 0xA);
    (*(f32 *)D_00CBCB00) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    func_00B364D0(1U);
}
