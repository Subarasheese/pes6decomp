/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct UiDrawNode UiDrawNode;
struct UiDrawNode {
    u8 type, id;
    u8 reserved02[0x3a];
    void (*draw)(UiDrawNode *);
    void (*update)(UiDrawNode *);
    void (*destroy)(UiDrawNode *);
    void *drawable;
};
extern UiDrawNode *func_001F4140(void *parent, s8 type, s32 size);
extern void *func_001D7F80(void *);
extern void func_001F0940(UiDrawNode *), func_001F0900(UiDrawNode *), func_001F1DA0(UiDrawNode *);
UiDrawNode *func_001F1E20(void *parent, void *resource) {
    if (parent) {
        UiDrawNode *node = func_001F4140(parent, 15, sizeof(UiDrawNode));
        node->drawable = func_001D7F80(resource);
        node->draw = func_001F0940;
        node->update = func_001F0900;
        node->destroy = func_001F1DA0;
        node->id = 0xff;
        return node;
    }
    return 0;
}
