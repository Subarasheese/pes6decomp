/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC300(void);
extern s32 func_001BC3D0(s32, s32, s32, s32);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EA94C;
extern s8 D_003EA950;
extern s32 D_003EA954;
extern char D_009C0270[];
extern char D_009C0274[];
extern char D_009C0278[];

void func_009710C0(void) {
    s32 sp30;
    f32 sp34;
    f32 sp38;
    s32 *var_s0;
    s32 var_s1;
    void *temp_v0;

    if (D_003EA94C == NULL) {
        temp_v0 = func_0096DB90(0x408);
        D_003EA94C = temp_v0;
        func_001C48E8(temp_v0, 0, 0x408);
        D_003EA954 = 0;
        D_003EA950 = 0;
        sp30 = (*(s32 *)D_009C0270);
        sp34 = (*(f32 *)D_009C0274);
        sp38 = (*(f32 *)D_009C0278);
        func_001BC300();
        var_s1 = 0;
        var_s0 = &sp30;
        do {
            func_001BC3D0(0, M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4), M2C_FIELD(var_s0, s32 *, 8));
            var_s1 += 1;
            var_s0 += 0xC;
        } while (var_s1 == 0);
        M2C_FIELD(D_003EA94C, s8 *, 0x406) = 1;
    }
}
