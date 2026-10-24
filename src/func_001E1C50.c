/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x78];
    u8 on;
} Obj;

void func_001E1C80(Obj *);

void func_001E1C50(Obj *obj) {
    if (obj->on == 0) {
        return;
    }
    func_001E1C80(obj);
}
