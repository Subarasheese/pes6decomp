/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_009B4430(u32);
M2C_UNK func_00849DA0(s32, u8, u8, u8 *);                            /* extern */
M2C_UNK func_00914FA0(s32, u8);                 /* extern */
M2C_UNK func_009A7540();                            /* extern */
M2C_UNK func_009B6C00();                            /* extern */
M2C_UNK func_00B25720(M2C_UNK, u8 *, u8, u8 *, M2C_UNK, u8 *, u8 *); /* extern */
M2C_UNK func_00B78E60(M2C_UNK);                     /* extern */
M2C_UNK func_00B79040(M2C_UNK);                     /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];
extern char D_00591E67[];
extern char D_00591E68[];
extern char D_00591F24[];
extern char D_00592372[];
extern char D_00592374[];
extern char D_00592375[];

void func_00BEA9D0(void) {
    s32 var_a0;
    u8 sw;
    s32 mode;
    u8 *temp_a3_2;
    u8 *temp_a5;
    u8 temp_a3;

    func_00B79040(0);
    func_009B6C00();
    (*(s8 *)D_00592372) = 0;
    func_009A7540();
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    temp_a3 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x12);
    temp_a5 = &(((void *)D_00591E67))[temp_a3];
    *temp_a5 = 0;
    temp_a3_2 = &(((void *)D_00591E67))[temp_a3 ^ 1];
    *temp_a3_2 = 1;
    (*(u8 *)D_00592374) = (*(u8 *)D_00591E67);
    (*(u8 *)D_00592375) = ((u8 *)D_00591E67)[1];
    func_00B25720(0, (u8 *)(D_00592374 - 0x2374), (*(u8 *)D_00591E67), temp_a3_2, 1, temp_a5, ((void *)D_00591E67));
    func_009B4430(0U);
    sw = (*(u8 *)D_00591F24);
    mode = 2;
    if (sw == 3) {
        mode = 1;
        func_00914FA0(mode, sw);
    } else if (sw == 6) {
        mode = 4;
        func_00914FA0(mode, sw);
    } else if (sw == 2) {
        mode = 3;
        func_00914FA0(mode, sw);
    } else if (sw == 1) {
        func_00914FA0(mode, sw);
    }
    if (func_002DCA30() != 0) {
        func_00849DA0(mode, (*(u8 *)D_00591F24), (*(u8 *)D_00591E67), temp_a3_2);
    }
    func_00B78E60(0);
}
