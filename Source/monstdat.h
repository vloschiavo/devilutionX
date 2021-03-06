/**
 * @file monstdat.h
 *
 * Interface of all monster data.
 */
#ifndef __MONSTDAT_H__
#define __MONSTDAT_H__

DEVILUTION_BEGIN_NAMESPACE

#ifdef __cplusplus
extern "C" {
#endif

extern MonsterData monsterdata[];
#ifdef HELLFIRE
extern int MonstConvTbl[];
extern int MonstAvailTbl[];
#else
extern BYTE MonstConvTbl[];
extern BYTE MonstAvailTbl[];
#endif
extern UniqMonstStruct UniqMonst[];

#ifdef __cplusplus
}
#endif

DEVILUTION_END_NAMESPACE

#endif /* __MONSTDAT_H__ */
