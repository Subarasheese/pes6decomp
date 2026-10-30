/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0027A780(void);
extern void func_0027A7B0(s32);
extern void func_0027A790(int);
extern int func_0027A7A0(void);
s32 func_00151EA0(M2C_UNK);                         /* extern */
void *func_009177C0(s32);                           /* extern */
extern s8 D_003EA524;
extern s8 D_003EA528;
extern char D_0092F0A0[];

void func_00904F30(s32 arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s2;
    s8 var_a2;
    void *temp_a1;
    void *temp_v0;

    D_003EA528 = func_0027A7A0();
    D_003EA524 = func_0027A780();
    func_0027A7B0(1);
    func_0027A790(0);
    var_s2 = 0;
    do {
        temp_s0 = ((var_s2 & 0xFF) + ((arg0 & 0xFF) * 0xB)) & 0xFF;
        temp_v0 = func_009177C0(temp_s0);
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s32 *, 0x20) = 0;
        M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s32 *, 0x24) = 0;
        temp_v1 = func_00151EA0(0x32) & 0xFF;
        if (temp_v1 < 0x15) {
            if (temp_v1 < 0xB) {
                var_a2 = 2;
            } else {
                var_a2 = 1;
            }
        } else {
            var_a2 = 0;
        }
        temp_a1 = ((void *)D_0092F0A0) + ((temp_s0 & 0xFF) * 2);
        M2C_FIELD((((void *)D_0092F0A0) + temp_s0), s8 *, 0x128) = var_a2;
        var_s2 = (var_s2 + 1) & 0xFF;
        M2C_FIELD(temp_a1, s16 *, 0x154) = 0x3E7;
        M2C_FIELD(temp_a1, s16 *, 0x180) = 0;
    } while (var_s2 < 0xB);
}
