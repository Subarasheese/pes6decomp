/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/ntgui_widget_timer.h"

typedef struct WidgetTreeNode {
    u8 reserved00[0x50];
    struct WidgetTreeNode *parent, *root;
} WidgetTreeNode;

extern s32 D_005BFE2C[];
extern s32 func_00163C30(void *widget, s32 type);

void *func_00165B00(void *widget) {
    WidgetTreeNode *node = widget;
    WidgetTreeNode *root = node->root;
    if (root)
        return root;
    if (node->parent) {
        node->root = func_00165B00(node->parent);
        return node->root;
    }
    return func_00163C30(node, D_005BFE2C[0]) ? node : 0;
}
