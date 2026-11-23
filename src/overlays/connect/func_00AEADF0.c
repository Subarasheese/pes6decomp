/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0x4];
    void *label;
} ConnectionRecord;
typedef struct {
    u8 reserved00[0xc];
    void *widget;
} ConnectionEntry;
extern void func_001DF820(void *, const char *);
extern const char *func_001F08B0(s32);
extern char D_00B005E8[];
extern ConnectionRecord *D_00B02A90;
void func_00AEADF0(void) {
    const char *text;
    ConnectionEntry *label;
    text = func_001F08B0(0x6C0019);
    if ((D_00B02A90 != 0) && (text != 0)) {
        label = D_00B02A90->label;
        if (label != 0) {
            if ((*text) == 0) {
                text = (void *)D_00B005E8;
            }
            func_001DF820(label->widget, text);
        }
    }
}
