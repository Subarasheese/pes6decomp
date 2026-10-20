/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
struct SemaParam {
    int count;
    int max_count;
    int init_count;
    int wait_threads;
    unsigned int attr;
    unsigned int option;
};
extern char D_003C3F50[];
extern char D_003C3F60[];
extern int D_00371A20;
extern int object_mutex;
int func_00105360(struct SemaParam *p);

void func_0010F488(void)
{
    struct SemaParam p1, p2;

    p1.max_count = 1;
    p1.init_count = 1;
    p1.option = (unsigned int)D_003C3F50;
    p2.max_count = 1;
    p2.init_count = 1;
    p2.option = (unsigned int)D_003C3F60;
    D_00371A20 = func_00105360(&p1);
    object_mutex = func_00105360(&p2);
}
