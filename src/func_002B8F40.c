/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 flags;
    u8 b1;
    u8 b2;
    u8 b3;
    u8 b4;
    u8 b5;
    u8 b6;
} Rec;

extern Rec D_005E2F50[];

void func_002B8FA0(s32);

void func_002B8F40(void) {
    s32 i;
    Rec *rec;

    for (i = 0; i < 2; i++) {
        func_002B8FA0(i);
    }
    rec = D_005E2F50;
    if (rec != NULL) {
        rec->flags &= 0x3F;
    }
}
