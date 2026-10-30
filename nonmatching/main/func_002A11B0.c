/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00299FE0(s32, s32);                      /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char Pes6MatchObj28_Position[];
extern char D_005E1A24[];
extern char D_005E1A28[];

void func_002A11B0(void *arg0, s32 arg1) {
    f32 var_f0;
    s32 temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_a1 = arg1 & 0xFF;
    if (temp_a1 >= 0x17) {
        switch (temp_a1) {                          /* irregular */
        case 27:
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
            var_f0 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
            goto block_11;
        case 28:
            M2C_FIELD(arg0, f32 *, 0) = (f32) (*(f32 *)Pes6MatchObj28_Position);
            M2C_FIELD(arg0, f32 *, 4) = (f32) (*(f32 *)D_005E1A24);
            var_f0 = (*(f32 *)D_005E1A28);
            goto block_11;
        default:
            temp_v0 = func_00299FE0(temp_a1 - 0x17, temp_a1);
            M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(temp_v0, f32 *, 0x1C);
            M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_v0, f32 *, 0x20);
            var_f0 = M2C_FIELD(temp_v0, f32 *, 0x24);
            goto block_11;
        }
    } else {
        temp_v1 = ((void *)Pes6MatchPlayers) + (temp_a1 * 0x240);
        M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(temp_v1, f32 *, 0xE0);
        M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(temp_v1, f32 *, 0xE4);
        var_f0 = M2C_FIELD(temp_v1, f32 *, 0xE8);
block_11:
        M2C_FIELD(arg0, f32 *, 8) = var_f0;
    }
}
