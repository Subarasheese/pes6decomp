/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    u8 flags;
} Pair10;

void func_001BB710(s32);
void func_00153FA0(void *);

void func_00256E90(Pair10 *pair) {
    if (pair == NULL) {
        return;
    }
    func_001BB710(pair->a);
    func_001BB710(pair->b);
    if (pair->flags & 1) {
        func_00153FA0(pair);
    } else {
        pair->c = 0;
        pair->a = 0;
        pair->b = 0;
    }
}
