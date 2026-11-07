/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct N {
    u8 pad[0x38];
    struct N *next;
} N;

typedef struct {
    u8 pad[8];
    N *head;
} L;

void func_001A4728(void);
void func_001A4778(void);

N *func_0019F1D8(N *arg0, L *arg1) {
    N *p;

    func_001A4728();
    p = arg1->head;
    if (p == arg0) {
        arg1->head = p->next;
    } else {
        while (p != NULL) {
            if (p->next == arg0) {
                p->next = arg0->next;
                break;
            }
            p = p->next;
        }
    }
    func_001A4778();
    return p;
}
