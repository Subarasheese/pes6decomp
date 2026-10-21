/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/lsc.c). */
typedef void (*LSC_STATFN)(void *obj1, void *obj2);
void LSC_EntryChgStatFunc(LSC_STATFN statfn, void *obj1, void *obj2);
extern LSC_STATFN D_00387948;
extern void *D_0038794C;
extern void *D_00387950;
void LSC_EntryChgStatFunc(LSC_STATFN statfn, void *obj1, void *obj2)
{
    if (statfn == ((void *)0))
    {
        D_00387948 = ((void *)0);
        D_0038794C = ((void *)0);
        D_00387950 = ((void *)0);
    }
    else
    {
        D_00387948 = statfn;
        D_0038794C = obj1;
        D_00387950 = obj2;
    }
}