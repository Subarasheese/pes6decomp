/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { void *h; u8 pad[0x4A0]; } Rec;
typedef struct {
    u8 pad0[4];
    u8 on;
    u8 pad5[0x543];
    Rec recs[2];
} Obj;

extern void func_001B5440(void);
extern void func_002DF960(void *);
extern void func_002F0160(void *);
extern void func_00153FA0(void *);

void func_002F4E10(Obj *o) {
    s32 i;
    if (o != 0) {
        if (o->on != 0) {
            func_001B5440();
            o->on = 0;
        }
        for (i = 0; i < 2; i++) {
            func_002DF960(o->recs[i].h);
        }
        func_002F0160((u8 *)o + 0xC);
        func_00153FA0(o);
    }
}
