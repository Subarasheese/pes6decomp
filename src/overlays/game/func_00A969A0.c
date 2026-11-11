/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s16 func_009B3480(char *, f32, f32);             /* extern */
extern void *Pes6Ball_Current;


typedef struct { char pad[0x10C]; s16 v; char pad2[0x240-0x10E]; } E;
extern E D_0058E7F0[];
void func_00A969A0(void) {
    E *p;
    s32 i;
    p = D_0058E7F0;
    for (i = 0; i < 0x16; i++) {
        p->v = func_009B3480((char *)p, M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
        p++;
    }
}
