/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Res {
    struct Res *next;
    s32 id;
    s32 data;
} Res;

extern Res *D_003E98DC;

s32 func_001B02F0(s32 id) {
    Res *res;

    for (res = D_003E98DC; res != NULL; res = res->next) {
        if (res->id == id) {
            return res->data;
        }
    }
    return 0;
}
