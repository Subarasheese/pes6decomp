/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x28];
    u16 busy;
} Obj;

void func_001E1AD0(void);
void func_001E1A60(Obj *);

void func_001E0110(Obj **ref) {
    Obj *obj;

    if (ref == NULL) {
        return;
    }
    obj = *ref;
    func_001E1AD0();
    if (obj->busy == 0) {
        func_001E1A60(obj);
    }
}
