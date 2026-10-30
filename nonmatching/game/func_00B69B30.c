/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00129E70(float);
extern void Pes6Ball_Update(void);
extern void func_002A96D0(void);
extern s32 func_00152130(s32, s8);
extern void func_00272620(void);
extern void func_00129E50(float);
extern u8 func_00BF6280(void);
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
void **func_00B2A420(M2C_UNK);                      /* extern */
M2C_UNK func_00BF6240(M2C_UNK);                     /* extern */
extern s8 D_003EA760;
extern char D_00591BE4[];
extern char D_00591E14[];
extern char Pes6MatchSquads[];

void func_00B69B30(void) {
    s32 var_s0;
    u8 temp_v1;
    void **var_s1;
    void *temp_a2;
    void *temp_v1_2;

    func_00AD0A20();
    if (func_00BF6280() != 5) {
        Pes6Ball_Update();
    }
    if (func_00152130(1, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF) != 0) {
        D_003EA760 = 0;
        (*(s32 *)D_00591E14) = 0;
        func_002A96D0();
        func_00272620();
        func_00129E70(50.0f);
        func_00129E50(16000.0f);
        var_s1 = func_00B2A420(1);
        var_s0 = 0;
        do {
            temp_a2 = *var_s1;
            temp_v1 = M2C_FIELD(temp_a2, u8 *, 0x16);
            if ((temp_v1 != 0xFD) && (temp_v1 != 0x46)) {
                temp_v1_2 = (M2C_FIELD(temp_a2, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_a2, u8 *, 0x12) * 0x6900));
                if ((M2C_FIELD(temp_v1_2, u8 *, 0xD4) != 0) && (M2C_FIELD(temp_v1_2, u8 *, 0xF8) == 0)) {
                    func_00209A00(M2C_FIELD(temp_a2, s32 *, 4), 0x1BF, 0);
                    M2C_FIELD(*var_s1, u8 *, 0x16) = 0xFDU;
                    M2C_FIELD(*var_s1, s16 *, 0x18) = 0;
                }
            }
            var_s0 += 1;
            var_s1 += 8;
        } while (var_s0 < 0x16);
        func_00BF6240(1);
    }
}
