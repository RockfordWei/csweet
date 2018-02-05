#ifndef __CPLUSER__
#define __CPLUSER__

#ifdef __cplusplus
extern "C" {
#endif

extern void * CPluser_new(int seed);
extern int CPluser_add(void * cpluser, int with);
extern void CPluser_del(void * cpluser);

#ifdef __cplusplus
}
#endif

#endif
