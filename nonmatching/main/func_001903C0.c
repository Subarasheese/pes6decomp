/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEBD0(int);
extern void func_001CEA60(s32);
extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEC30();                            /* extern */
M2C_UNK func_001CECC0(M2C_UNK);                     /* extern */
M2C_UNK func_001D3FF0(f32 *, f32 *, f32 *, void *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00397640[];
extern char D_00397648[];
extern char D_00397650[];
extern char D_00397658[];
extern void *D_00520228;

void func_001903C0(void) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    s32 sp70;
    f32 *sp74;
    s32 sp78;
    void *sp7C;
    s32 var_s3;
    void *temp_a3;
    void *var_s4;

    if (D_00520228 != NULL) {
        func_001CECC0(0x16C8);
        func_001CEB90();
        func_001CEC30();
        func_001CEBD0(2);
        func_001CEAB0();
        func_001CEA60(0x2B01);
        sp78 = 1;
        sp74 = ((void *)D_00397640);
        var_s4 = D_00520228;
        var_s3 = 0;
        do {
            if (M2C_FIELD(var_s4, s32 *, 0x18) == 0) {

            } else {
                temp_a3 = var_s4 + 0x24;
                sp60 = M2C_FIELD(var_s4, f32 *, 0);
                sp6C = 0x42340000;
                sp64 = M2C_FIELD(var_s4, f32 *, 4);
                sp70 = 0x41F00000;
                sp68 = M2C_FIELD(var_s4, f32 *, 8);
                sp7C = temp_a3;
                (*(f32 *)D_00397640) = M2C_FIELD(var_s4, f32 *, 0x1C);
                (*(f32 *)D_00397648) = M2C_FIELD(var_s4, f32 *, 0x20);
                (*(f32 *)D_00397650) = M2C_FIELD(var_s4, f32 *, 0x20);
                (*(f32 *)D_00397658) = M2C_FIELD(var_s4, f32 *, 0x1C);
                func_001D3FF0(&sp60, ((void *)D_00397648), ((void *)D_00397640), temp_a3, 0x41F00000, 0x42340000);
            }
            var_s3 += 1;
            var_s4 += 0x28;
        } while (var_s3 < 0x14);
        func_001CEC70();
    }
}
