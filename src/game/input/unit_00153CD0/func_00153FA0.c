/* compiler: ee-gcc-2.96-nosib */
/* Shared release entry point: a null object requires no allocator call. */
extern void func_0012D8E0(void *);
void func_00153FA0(void *object) {
    if (object) func_0012D8E0(object);
}
