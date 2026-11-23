/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_tree_query.h"
extern s32 func_00265AC0(void *resource);
extern void func_00256DE0(s32 id, MenuNode *node);
static inline void removeMenuNode(MenuTree *tree, MenuNode *node) {
    if (node)
        func_00256DE0(tree->id, node);
}
s32 func_00265480(MenuTree *tree, s32 key) {
    s32 remaining = 0;
    if (tree) {
        MenuNode *found = findMenuNode(func_00256DC0(tree->id), key);
        if (found) {
            remaining = func_00265AC0(found->item);
            removeMenuNode(tree, found);
        }
    }
    return remaining;
}
