/* compiler: ee-gcc-2.96-G0 */
/* GCC frame-runtime.c, __deregister_frame_info. GPL with GCC runtime linking exception.
 * Via gustavocanepa/gt4-decomp, src/runtime/unit_0059BE80/func_005BED78.c.
 * See THIRD_PARTY.md. */
extern void func_001AD608(void) __attribute__((noreturn));

typedef unsigned int size_t;
extern void func_001ADBC8(void *);
struct object {
    void *pc_begin;
    void *pc_end;
    struct dwarf_fde *fde_begin;
    struct dwarf_fde **fde_array;
    size_t count;
    struct object *next;
};
typedef int __gthread_mutex_t;
extern int func_0019B160(int);
extern int func_0019B140(int);
inline static int __gthread_mutex_lock(__gthread_mutex_t *mutex) { return func_0019B160(*mutex); }

inline static int __gthread_mutex_unlock(__gthread_mutex_t *mutex) { return func_0019B140(*mutex); }

extern __gthread_mutex_t D_005CAC24;
typedef int sword;
typedef unsigned int uword;
typedef unsigned int uaddr;
struct dwarf_fde {
    uword length;
    sword CIE_delta;
    void *pc_begin;
    uaddr pc_range;
};
extern struct object *D_01208850;
void *func_001AC398(void *begin) {
    struct object **p;
    __gthread_mutex_lock(&D_005CAC24);
    p = &D_01208850;
    while (*p) {
        if ((*p)->fde_begin == begin) {
            struct object *ob = *p;
            *p = (*p)->next;
            if (ob->fde_array && (ob->fde_array != begin))
                func_001ADBC8(ob->fde_array);
            __gthread_mutex_unlock(&D_005CAC24);
            return (void *)ob;
        }
        p = &(*p)->next;
    }

    __gthread_mutex_unlock(&D_005CAC24);
    func_001AD608();
}
