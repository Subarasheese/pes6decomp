/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    void *field_4;
    void *field_8;
} Fields;

extern void func_001D7F10(void *);
extern s32 func_0020A540(s32);

void func_008E98F0(Fields *arg0) {
    if (arg0 != 0) {
        func_001D7F10(arg0->field_4);
        func_001D7F10(arg0->field_8);
        func_0020A540(arg0->field_0);
        arg0->field_0 = 0;
        arg0->field_4 = 0;
        arg0->field_8 = 0;
    }
}
