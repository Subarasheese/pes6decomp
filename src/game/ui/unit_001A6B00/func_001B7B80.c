/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x70];
    u8 data[0x10];
} Ent;

extern Ent D_00522980[];
void func_001C48E8(void *, s32, s32);
void func_001B70A0(void);

void func_001B7B80(s32 i) {
    func_001C48E8(D_00522980[i].data, 0, 0x80);
    func_001B70A0();
}
