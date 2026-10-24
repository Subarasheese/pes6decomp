/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

#define SLOT(x) ((x) != 0xFF ? (x) % 23 : 1)

typedef struct {
    u8 pad0[0x7D];
    u8 value;
    u8 padX[0x2CA];
} Ent;

extern char D_0058E5C1[];
extern char D_0058E5C2[];
extern Ent D_00592980[][32];
s32 func_00288670(s32, s32);

s32 func_00310500(s32 index) {
    s32 maskedIndex = index & 0xFF;
    Ent *ent = &D_00592980[*(u8 *)(D_0058E5C2 + SLOT(maskedIndex) * 0x240)][*(u8 *)(D_0058E5C1 + SLOT(maskedIndex) * 0x240)];

    return func_00288670(ent->value & 0x7F, 0x32);
}
