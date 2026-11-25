/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct Obj UiObject;
extern void func_001DF820(UiObject *object, s32 argument);
typedef struct {
    u8 reserved[12];
    UiObject *object;
} View;

void func_0063AD20(View *view, s32 value) {
    if (!view || !value)
        return;
    func_001DF820(view->object, value);
}
