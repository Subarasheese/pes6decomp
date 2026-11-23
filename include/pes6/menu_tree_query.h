#ifndef PES6_MENU_TREE_QUERY_H
#define PES6_MENU_TREE_QUERY_H

#include "types.h"
typedef struct {
    s32 id;
} MenuTree;
typedef struct {
    u8 pad00[0x18];
    void *item;
} MenuNode;
extern s32 func_00256DC0(s32);
extern void func_001B9250(s32, s32 (*)(void *node));
extern s32 func_00265920(void *node), func_00265990(void *node);
extern s32 func_00265CA0(void *, s32, s32, s32);
extern s32 D_0058D410[], D_0058D414[], D_0058D418[];
extern MenuNode *D_0058D41C[];

static inline MenuNode *findMenuNode(s32 root, s32 key) {
    D_0058D418[0] = key;
    D_0058D41C[0] = 0;
    func_001B9250(root, func_00265920);
    return D_0058D41C[0];
}
static inline MenuNode *findMenuNodePair(s32 root, s32 first, s32 second) {
    D_0058D410[0] = first;
    D_0058D414[0] = second;
    D_0058D41C[0] = 0;
    func_001B9250(root, func_00265990);
    return D_0058D41C[0];
}

#endif
