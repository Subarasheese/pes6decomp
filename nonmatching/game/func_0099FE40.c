/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002871C0(void *);
M2C_UNK func_00270530(M2C_UNK *, f32 *);            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E00[];
extern char D_00592380[];

void func_0099FE40(void) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    M2C_UNK *var_s4;
    s32 var_s3;
    s32 var_s5;
    void *temp_s0;

    func_002871C0(((void *)D_00592380));
    var_s5 = 0;
    var_s4 = ((void *)Pes6MatchPlayers);
    var_s3 = 0;
    do {
        temp_s0 = ((void *)D_00591E00) + (var_s3 + 0xC) + 0x580;
        func_00270530(var_s4, &sp70);
        var_s5 += 1;
        var_s3 += 0xC;
        var_s4 += 0x240;
        M2C_FIELD(temp_s0, f32 *, 0) = sp70;
        M2C_FIELD(temp_s0, f32 *, 4) = (f32) sp74;
        M2C_FIELD(temp_s0, f32 *, 8) = (f32) sp78;
    } while (var_s5 < 0x17);
}
