/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00299FE0(s32);                           /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char Pes6MatchObj28_Heading[];

u16 func_002A1110(s32 arg0) {
    s32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 >= 0x17) {
        if (temp_a0 < 0x1B) {
            return M2C_FIELD(func_00299FE0(temp_a0 - 0x17), u16 *, 0x14);
        }
        switch (temp_a0) {                          /* irregular */
        case 27:
            return M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
        case 28:
            return (*(u16 *)Pes6MatchObj28_Heading);
        default:
            return 0U;
        }
    } else {
        return M2C_FIELD((((void *)Pes6MatchPlayers) + (temp_a0 * 0x240)), u16 *, 0x26);
    }
}
