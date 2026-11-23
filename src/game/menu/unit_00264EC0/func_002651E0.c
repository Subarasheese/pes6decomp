/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_tree_query.h"

s32 func_002651E0(MenuTree *tree, s32 key, s32 value, s32 mode) {
    s32 result = 0;
    if (tree) {
        s32 root = func_00256DC0(tree->id);
        MenuNode *node = findMenuNode(root, key);
        if (node)
            result = func_00265CA0(node->item, 0, value, mode);
    }
    return result;
}
