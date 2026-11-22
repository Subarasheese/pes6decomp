/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x30];
    void *field_30;
    u8 pad_34[0x298];
    s32 field_2CC;
} Fields;

extern void func_009B50D0(void *);
extern void func_001D4E00(void *);
s32 func_002DF960(s32);
s32 func_0099C7C0(s32);
extern char D_00A7DC08[];

s32 func_009B7210(void **arg0) {
    s32 value;
    void *entry;
    Fields *value2;

    value2 = *arg0;
    func_009B50D0(value2);
    value = value2->field_2CC;
    if (value != 0) {
        func_002DF960(value);
        value2->field_2CC = 0;
    }
    entry = value2->field_30;
    if (entry != 0) {
        func_001D4E00(entry);
        value2->field_30 = 0;
    }
    if ((*(s32 *)D_00A7DC08) != 0) {
        func_0099C7C0((*(s32 *)D_00A7DC08));
        (*(s32 *)D_00A7DC08) = 0;
    }
    return 1;
}
