/* compiler: ee-gcc-2.96-nosib */
/* Shared release entry point: a null object requires no allocator call. */
extern void func_0012D8E0(void *);
void Pes6Heap_Free(void *object) {
    if (object) func_0012D8E0(object);
}
