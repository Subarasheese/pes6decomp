/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x13];
    u8 kind;
    u8 pad14[0x22C];
} Rec240;

extern Rec240 D_0058E5B0[];
extern u8 D_00591EFD[];

u8 func_003108E0(s32 index) {
    Rec240 *rec;

    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    rec = &D_0058E5B0[index];
    return D_00591EFD[rec->kind];
}
