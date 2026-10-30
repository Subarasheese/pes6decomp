/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278970(int);
M2C_UNK func_008CB9F0(s32);                         /* extern */
M2C_UNK func_008CBAE0(s32);                         /* extern */
M2C_UNK func_008CBD30(s32, M2C_UNK, M2C_UNK, u8);   /* extern */
M2C_UNK func_008CC080(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_00BCAE40(s32, s32);                    /* extern */
M2C_UNK func_00BCC510(s32);                         /* extern */
M2C_UNK func_00BCC520(s32, void *);                 /* extern */
M2C_UNK func_00C18510(u8);                          /* extern */
M2C_UNK func_00C186E0(u8, M2C_UNK);                 /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CE5188[];

void func_00BCA370(void *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    u8 temp_s0;

    func_008CB9F0(M2C_FIELD(arg0, s32 *, 4));
    func_008CC080(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x40, 0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = temp_v1 % 23;
    }
    M2C_FIELD(*M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void ***, 4), u8 *, 0x207) = (u8) (*(u8 *)D_00CE5188);
    func_008CBD30(M2C_FIELD(arg0, s32 *, 4), 1, 0, (*(u8 *)D_00CE5188));
    func_008CBAE0(M2C_FIELD(arg0, s32 *, 4));
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        func_00278970(0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 1) {
        func_00BCC510(M2C_FIELD(arg0, s32 *, 4));
    } else {
        func_00BCC520(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x18);
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1_2 == 0xFF) {
        var_a0_2 = 1;
    } else {
        var_a0_2 = temp_v1_2 % 23;
    }
    func_00BCAE40(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), s32 *, 4), M2C_FIELD(arg0, s32 *, 0x10));
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1_3 != 0xFF) {
        var_a0_3 = temp_v1_3 % 23;
    } else {
        var_a0_3 = 1;
    }
    M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_3 * 0x240)), void **, 4), s8 *, 0x2C) = 1;
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_v1_4 == 0xFF) {
        var_a0_4 = 1;
    } else {
        var_a0_4 = temp_v1_4 % 23;
    }
    temp_s0 = **M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_4 * 0x240)), u8 ***, 4);
    func_00C186E0(temp_s0, 1);
    func_00C18510(temp_s0);
}
