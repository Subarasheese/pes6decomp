/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from shadow-decomp (src/CRI/mfci.c). */
extern const char *const volatile D_0038C180; /* mfci_build: the version string */
extern char D_0038C190[];                     /* mfci_vtbl: the MFS device's CVFS_IF table */

/* Returns the MFS device's CVFS_IF table. */
void *mfCiGetInterface(void)
{
    D_0038C180;
    return D_0038C190;
}
