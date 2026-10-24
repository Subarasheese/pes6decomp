/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0xA];
    s16 open;
} Win;

extern Win *D_00520138[];
void func_0018C6A0(void);
void func_0018C530(void);

void func_0018D3F0(void) {
    if (D_00520138[0] == NULL) {
        return;
    }
    func_0018C6A0();
    if (D_00520138[0]->open != 0) {
        func_0018C530();
    }
}
