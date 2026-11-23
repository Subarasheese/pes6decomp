/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct UiCallback {
    void *data;
    void (*invoke)(void *);
    struct UiCallback *previous, *next;
} UiCallback;
extern UiCallback *D_0052B148[];
extern s32 func_001E62C0(void);
extern void func_001E5460(s32), func_001E53B0(void);
void func_001EB280(void) {
    UiCallback *node = D_0052B148[0];
    s32 enabled = func_001E62C0() & 1;
    if (enabled == 1) {
        if (node) {
            func_001E5460(enabled);
            do {
                node->invoke(node->data);
                node = node->next;
            } while (node);
        }
        func_001E53B0();
    }
}
