/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern Pair D_003A8DB0[];
void func_00272230(s32);
void func_00272240(Pair *);

void func_0020B600(s32 id) {
    if ((u8)id >= 18) {
        id = 0;
    }
    func_00272230(id);
    func_00272240(&D_003A8DB0[(u8)id]);
}
