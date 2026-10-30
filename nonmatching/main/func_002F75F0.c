/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001ABA10(void);
extern void func_002CD320(s32);
extern void func_002873B0(void);
M2C_UNK func_0026EDE0();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591A90[];
extern char D_005E92CC[];
extern char D_005E92CE[];

void func_002F75F0(void) {
    s32 temp_a2_2;
    s32 var_a1;
    s32 var_a3;
    s8 temp_a2;
    void *temp_t2;

    var_a1 = 1;
    do {
        if (var_a1 == 0xFF) {
            var_a3 = 1;
        } else {
            var_a3 = var_a1 % 23;
        }
        temp_t2 = ((void *)Pes6MatchPlayers) + (var_a3 * 0x240);
        M2C_FIELD(M2C_FIELD(temp_t2, void **, 4), s8 *, 0x2C) = 1;
        temp_a2 = (var_a1 / 12) + ((u32) var_a1 >> 0x1F);
        M2C_FIELD(temp_t2, s8 *, 0x12) = temp_a2;
        temp_a2_2 = var_a1 % 12;
        var_a1 += 1;
        M2C_FIELD(temp_t2, u8 *, 0x11) = (u8) M2C_FIELD((temp_a2_2 + (((void *)D_00591A90) + (temp_a2 * 0x8B))), u8 *, 7);
    } while (var_a1 < 0x17);
    func_002CD320(0);
    func_002CD320(1);
    func_002873B0();
    func_0026EDE0();
    func_001ABA10();
    (*(s16 *)D_005E92CC) = 1;
    (*(s16 *)D_005E92CE) = 2;
}
