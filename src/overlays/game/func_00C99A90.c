/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x18];
    void *field_18;
} Fields;

extern void func_002F4E10(void *);
extern void func_001BC2B0(void);
extern void Pes6Heap_Free(void *);
void func_00C99A90(Fields *arg0) {
    func_001BC2B0();
    func_002F4E10(arg0->field_18);
    arg0->field_18 = 0;
    Pes6Heap_Free(arg0);
}
