/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 key;
    s32 value;
} Pair;

typedef struct {
    u32 count;
} Head;

typedef struct {
    Head *head;
} Info;

typedef struct {
    u8 pad0[0xC];
    Info *info;
    u8 pad10[4];
    Pair *pairs;
} Obj;

s32 func_001F77E0(Obj *obj, u32 i) {
    Pair *pair;

    if (obj == NULL || obj->info->head->count < i) {
        pair = NULL;
    } else {
        pair = &obj->pairs[i];
    }
    if (pair == NULL) {
        return 0;
    }
    return pair->value;
}
