/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[0xA8];
} Item;

typedef struct {
    s32 pad0;
    Item *items;
} Group;

extern Group **D_003E98C0;
void func_001AA670(s32, Item *);

void func_001AA5E0(s32 i, s32 j) {
    func_001AA670(0, &D_003E98C0[i]->items[j]);
}
