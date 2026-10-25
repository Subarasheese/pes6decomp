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

static inline Rec *get(s32 i) {
    if (i < 0 || i >= 2) {
        return NULL;
    }
    return &D_005E2F50[i];
}

u8 func_002B8AA0(s32 i) {
    Rec *rec = get(i);

    if (rec == NULL) {
        return 0;
    }
    return rec->b5;
}
