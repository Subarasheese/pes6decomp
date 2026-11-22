/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    void *field_0;
    void *field_4;
    s32 field_8;
    s32 field_C;
} Fields;

extern void func_001D7F10(void *);
void func_008C91C0(Fields *arg0) {
    func_001D7F10(arg0->field_0);
    func_001D7F10(arg0->field_4);
    arg0->field_0 = 0;
    arg0->field_4 = 0;
    arg0->field_8 = 0;
    arg0->field_C = 0;
}
