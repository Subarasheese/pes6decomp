/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x240];
} Rec240;

extern Rec240 D_0058E5B0[];
void func_00952420(Rec240 *);

void func_00310B60(s32 index) {
    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    func_00952420(&D_0058E5B0[index]);
}
