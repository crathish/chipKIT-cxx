extern void *memcpy(void *dest, const void *src, __SIZE_TYPE__ n);
char *p;
int int_gen_ti_header_c_ (char * hdrbuf, int * hdrbufsize,
                          int * itypesize, int * typesize,
                          int * DataHandle, char * Data,
                          int * Count, int * code)
{
  memcpy (typesize, p, sizeof(int)) ;
  memcpy (Data, p, *Count * *typesize) ;
}

