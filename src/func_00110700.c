/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
/* Release a generation-checked timer and return its record to the pool.
 * Callers provide interrupt exclusion. Handle bits 10..31 encode its
 * 64-byte-aligned address; bits 0..9 hold the generation. Layout provisional. */
struct Node {
    struct Node *next;
    int unknown4;
    int generation, flags;
    char unknown10[48];
};
struct Pool {
    char unknown0[0x10];
    int count;
    struct Node *free;
    int unknown18, current;
};
extern volatile struct Pool D_00372998;
extern struct Node *func_00110298(struct Node *);
/* Publish the identity/flag reset before this record rejoins the free list. */
static inline void clear_record(volatile struct Node *node) {
    node->generation=0;
    node->flags=0;
}
int func_00110700(int handle) {
    struct Node *node=(struct Node *)(((unsigned)handle>>10)<<6);
    if(handle<0 || (handle&0x3ff)!=node->generation) return 0x80008002;
    if(D_00372998.current==handle) return 0x80000010;
    if(node->flags&2) func_00110298(node);
    clear_record(node);
    {
        struct Node *previous=D_00372998.free;
        int remaining=D_00372998.count-1;
        node->next=previous;
        D_00372998.free=node;
        D_00372998.count=remaining;
    }
    return 0;
}
