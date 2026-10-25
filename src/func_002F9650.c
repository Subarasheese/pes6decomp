/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s32 kind; } Item;
typedef struct {
    Item **data;
    u32 count;
} Tbl;

extern void func_001D6E40(Item *);
extern void func_001D67B0(Item *);
extern void func_001D6600(Item *);

void func_002F9650(Tbl *t, u32 idx) {
    Item *it;
    if (t != 0) {
        if (idx < t->count) {
            it = t->data[idx];
            t->data[idx] = 0;
            if (it != 0) {
                switch (it->kind) {
                case 0:
                    func_001D6E40(it);
                    break;
                case 1:
                    func_001D67B0(it);
                    break;
                case 2:
                    func_001D6600(it);
                    break;
                }
            }
        }
    }
}
