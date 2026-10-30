/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A880(int);
extern void func_001B3D40(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_008CB660(s32);                         /* extern */
M2C_UNK func_008CB9F0(s32);                         /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00BCAE40(s32, s32);                    /* extern */
M2C_UNK func_00BCC510(s32);                         /* extern */
M2C_UNK func_00C184E0();                            /* extern */
M2C_UNK func_00C186B0();                            /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00CE50C0[];

void func_00BC95D0(s32 arg0) {
    s32 var_a0;
    s32 var_a0_2;

    if (M2C_FIELD(((void *)D_00CE50C0), s32 *, 0xC) != 0) {
        func_00BCC510(M2C_FIELD(((void *)D_00CE50C0), s32 *, 4));
        func_001C48E8(((void *)D_00CE50C0) + 0x14, 0, 0x14);
        func_008CB660(M2C_FIELD(((void *)D_00CE50C0), s32 *, 4));
        M2C_FIELD(((void *)D_00CE50C0), s32 *, 0x10) = 8;
        M2C_FIELD(((void *)D_00CE50C0), s32 *, 0x28) = 0x15;
        if (M2C_FIELD(((void *)D_00CE50C0), s32 *, 4) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) M2C_FIELD(((void *)D_00CE50C0), s32 *, 4) % 23;
        }
        func_00BCAE40(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), s32 *, 4), M2C_FIELD(((void *)D_00CE50C0), s32 *, 0x10));
        func_008CB9F0(M2C_FIELD(((void *)D_00CE50C0), s32 *, 4));
        if (M2C_FIELD(((void *)D_00CE50C0), s32 *, 4) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) M2C_FIELD(((void *)D_00CE50C0), s32 *, 4) % 23;
        }
        M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240)), void **, 4), s8 *, 0x2C) = 0;
        M2C_FIELD(((void *)D_00CE50C0), s32 *, 0xBC) = 0;
        if (Pes6Ball_Current != NULL) {
            M2C_FIELD(Pes6Ball_Current, s8 *, 0xC) = 0;
            if (M2C_FIELD(Pes6Ball_Current, s32 *, 8) != 0) {
                func_0027A880(0);
            }
        }
        func_00C186B0();
        func_00C184E0();
        M2C_FIELD(((void *)D_00CE50C0), s32 *, 0xC) = 0;
    }
    func_001B3D40();
    func_00BC91D0(0, arg0);
}
