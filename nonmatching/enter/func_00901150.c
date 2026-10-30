/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_009088C0(u8, void *);                      /* extern */
s32 func_00909F20(s32, M2C_UNK);                    /* extern */
s32 func_00909FA0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0090B3D0(u8, void *);                  /* extern */
M2C_UNK func_00910B60(M2C_UNK *);                   /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_0092F0A4[];
extern char D_0092F1AB[];

s32 func_00901150(void) {
    void *temp_a0;

    func_00910B60(((void *)Pes6MatchPlayers));
    temp_a0 = M2C_FIELD(Pes6Ball_Current, void **, 0);
    M2C_FIELD(temp_a0, f32 *, 0xD0) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x10) * -0.2f);
    M2C_FIELD(temp_a0, f32 *, 0xD4) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) * 0.2f);
    M2C_FIELD(temp_a0, f32 *, 0xD8) = (f32) (M2C_FIELD(Pes6Ball_Current, f32 *, 0x18) * 0.2f);
    switch ((*(u8 *)D_0092F0A4)) {                           /* irregular */
    case 0:
        if ((func_00909FA0((*(u8 *)D_0092F1AB) & 1, -1) & 0xFF) == 1) {
            (*(u8 *)D_0092F0A4) += 1;
        }
block_10:
    default:
        return 0;
    case 1:
        if ((func_009088C0((*(u8 *)D_0092F0A4), Pes6Ball_Current) & 0xFF) == 1) {
            (*(u8 *)D_0092F0A4) += 1;
        }
        goto block_10;
    case 2:
        func_0090B3D0((*(u8 *)D_0092F0A4), Pes6Ball_Current);
        if ((func_00909F20(((s32) (*(u8 *)D_0092F1AB) >> 1) & 1, -1) & 0xFF) == 1) {
            return 1;
        }
        goto block_10;
    }
}
