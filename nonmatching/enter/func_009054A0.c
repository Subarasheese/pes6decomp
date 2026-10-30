/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A7B0(s32);
extern void func_0027A790(int);
void *func_009177C0(s32);                           /* extern */
extern s8 **Pes6Ball_Current;
extern u8 D_003EA524;
extern u8 D_003EA528;
extern char D_0092F0A0[];
extern char D_0092F0C4[];
extern char D_0092F0C8[];
extern char D_0092F1A8[];
extern char D_0092F258[];

void func_009054A0(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0;
    void *temp_v0_2;

    if ((*(u8 *)D_0092F1A8) == 1) {
        func_0027A7B0((s32) D_003EA528);
        func_0027A790((s32) D_003EA524);
        var_s1 = 0;
        do {
            temp_s0 = var_s1 & 0xFF;
            temp_v0 = func_009177C0(temp_s0);
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s32 *, 0x20) = 0;
            temp_a1 = ((void *)D_0092F0A0) + ((temp_s0 & 0xFF) * 2);
            M2C_FIELD(M2C_FIELD(temp_v0, void **, 4), s32 *, 0x24) = 0;
            var_s1 = (var_s1 + 1) & 0xFF;
            M2C_FIELD(temp_a1, s16 *, 0x180) = 0;
            M2C_FIELD(temp_a1, s16 *, 0x154) = 0;
            M2C_FIELD((((void *)D_0092F0A0) + temp_s0), s8 *, 0x128) = (s8) (0 & 0xFFFF);
        } while (var_s1 < 0xB);
    }
    if ((*(u8 *)D_0092F1A8) == 2) {
        func_0027A7B0((s32) D_003EA528);
        func_0027A790((s32) D_003EA524);
        var_s1_2 = 0;
        do {
            temp_s0_2 = ((var_s1_2 & 0xFF) + 0xB) & 0xFF;
            temp_v0_2 = func_009177C0(temp_s0_2);
            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s32 *, 0x20) = 0;
            temp_a1_2 = ((void *)D_0092F0A0) + ((temp_s0_2 & 0xFF) * 2);
            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), s32 *, 0x24) = 0;
            var_s1_2 = (var_s1_2 + 1) & 0xFF;
            M2C_FIELD(temp_a1_2, s16 *, 0x180) = 0;
            M2C_FIELD(temp_a1_2, s16 *, 0x154) = 0;
            M2C_FIELD((((void *)D_0092F0A0) + temp_s0_2), s8 *, 0x128) = (s8) (0 & 0xFFFF);
        } while (var_s1_2 < 0xB);
    }
    **Pes6Ball_Current = 0;
    (*(s32 *)D_0092F0C4) = 1;
    (*(s32 *)D_0092F0C8) = (s32) (*(s16 *)D_0092F258);
}
