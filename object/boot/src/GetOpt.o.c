/* generated by Id 1.0 at 2007-02-22 05:39:33 Z */
/* with the command: -I../stage1/ -I. -c GetOpt.st -o ../stage2/GetOpt.o.c */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <setjmp.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <sys/param.h>
#include <assert.h>
#define GC_DLL 1
#include <gc/gc.h>
#if defined(WIN32)
# include <malloc.h>
# include <windows.h>
  typedef HINSTANCE dlhandle_t;
# define dlopen(path, mode)	LoadLibrary(path)
# define dlsym(handle, name)	((void *)GetProcAddress(handle, name))
# define dlclose(handle)	FreeLibrary(handle)
# include <winbase.h>
  inline int gettimeofday(struct timeval *tp, void *tzp)
  {
     union {
       long long ns100;
       FILETIME ft;
     } _now;
     GetSystemTimeAsFileTime(&_now.ft);
     tp->tv_usec= (long)((_now.ns100 / 10LL) % 1000000LL);
     tp->tv_sec= (long)((_now.ns100 - (116444736000000000LL)) / 10000000LL);
     return 0;
   }
#else
# include <dlfcn.h>
  typedef void *dlhandle_t;
#endif
#ifndef O_BINARY
# define O_BINARY 0
#endif

typedef struct t__object *oop;

typedef oop (*_imp_t)(oop _thunk, oop receiver, ...);

struct __closure
{
  _imp_t method;
  oop	 data;
};

static void              *(*_local_param   )(int index)= 0;
static oop  		  (*_local_intern  )(const char *string)= 0;
static oop  		  (*_local_proto   )(oop base)= 0;
static oop  		  (*_local_import  )(const char *name)= 0;
static oop  		  (*_local_export  )(const char *name, oop value)= 0;
static void 		  (*_local_method  )(oop type, oop selector, _imp_t method)= 0;
static oop  		  (*_local_alloc   )(oop type, size_t size)= 0;
static oop  		 *(*_local_palloc  )(size_t size)= 0;
static void  		 *(*_local_balloc  )(size_t size)= 0;
static struct __closure  *(*_local_bind    )(oop selector, oop receiver)= 0;
static oop                (*_local_nlreturn)(oop nlr, oop result)= 0;
static oop                (*_local_nlresult)(void)= 0;
static oop  		    _local_object= 0;
static oop  		   *_local_tag_vtable= 0;
static oop  		   *_local_nil_vtable= 0;
static void               (*_local_gc_addRoots)(char *lo, char *hi)= 0;
static void	          (*_local_gc_unregisterDisappearingLink)(void *ptr)= 0;
static void		  (*_local_gc_generalRegisterDisappearingLink)(void *link, void *ptr)= 0;
static void		  (*_local_gc_gcollect)(void)= 0;

#define _param(INDEX)		_local_param(INDEX)
#define _selector(NAME)		_local_intern(NAME)
#define _proto(BASE)		_local_proto(BASE)
#define _id_import(NAME)	_local_import(NAME)
#define _id_export(NAME, VAL)	_local_export((NAME), (VAL))
#define _method(TYPE, SEL, IMP)	_local_method((TYPE), (SEL), (_imp_t)(IMP))
#define _alloc(RCV, LBS)	_local_alloc((RCV), (LBS))
#define _palloc(LBS)		_local_palloc((LBS))
#define _balloc(LBS)		_local_balloc((LBS))
#define _nlreturn(NLR, ARG)	_local_nlreturn((NLR), (ARG))
#define _nlresult()		_local_nlresult()

#define _send(MSG, RCV, ARG...) ({					\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), _r);	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

#define _super(TYP, MSG, RCV, ARG...) ({				\
  register oop _r= (RCV);						\
  struct __closure *_c= (struct __closure *)_local_bind((MSG), (TYP));	\
  (_c->method)((oop)_c, _r, _r, ##ARG);					\
})

static oop s_next= 0;
static oop s_new_5f_= 0;
static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_atEnd= 0;
static oop s_skip_= 0;
static oop s__2c= 0;
static oop s_size= 0;
static oop s_first= 0;
static oop s_parse_= 0;
static oop s_second= 0;
static oop s__3d= 0;
static oop s_whileFalse_= 0;
static oop s_function_5f_arity_5f_= 0;
static oop s__5fdebugName= 0;
static oop s_parse_startingAt_= 0;
static oop s_new= 0;
static oop s_readStream= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_parseArgument_with_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_and_= 0;
static oop s__3e= 0;
static oop s_parseOption_with_= 0;
static oop s_default_= 0;
static oop s_at_ifAbsent_= 0;
static oop s_value_= 0;
static oop s_arity= 0;
static oop s_applyOption_to_= 0;
static oop s_applyOption_to_with_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_value_value_= 0;
static oop s_error_= 0;
static oop s_copyFrom_= 0;
static oop s__5fsizeof= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "next", &s_next },
  { "new_:", &s_new_5f_ },
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "atEnd", &s_atEnd },
  { "skip:", &s_skip_ },
  { ",", &s__2c },
  { "size", &s_size },
  { "first", &s_first },
  { "parse:", &s_parse_ },
  { "second", &s_second },
  { "=", &s__3d },
  { "whileFalse:", &s_whileFalse_ },
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "_debugName", &s__5fdebugName },
  { "parse:startingAt:", &s_parse_startingAt_ },
  { "new", &s_new },
  { "readStream", &s_readStream },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "parseArgument:with:", &s_parseArgument_with_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "and:", &s_and_ },
  { ">", &s__3e },
  { "parseOption:with:", &s_parseOption_with_ },
  { "default:", &s_default_ },
  { "at:ifAbsent:", &s_at_ifAbsent_ },
  { "value:", &s_value_ },
  { "arity", &s_arity },
  { "applyOption:to:", &s_applyOption_to_ },
  { "applyOption:to:with:", &s_applyOption_to_with_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "value:value:", &s_value_value_ },
  { "error:", &s_error_ },
  { "copyFrom:", &s_copyFrom_ },
  { "_sizeof", &s__5fsizeof },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_Set {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_LookupKey {
  struct _vtable *_vtable[0];
  oop v_key;
};
struct t_Association {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Dictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentitySet {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_IdentityDictionary {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
};
struct t_Stream {
  struct _vtable *_vtable[0];
};
struct t_PositionableStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_ReadStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_GetOpt {
  struct _vtable *_vtable[0];
  oop v_tally;
  oop v_array;
  oop v_defaultBlock;
};
static oop l_1= 0;
static oop l_2= 0;
static oop l_5= 0;
static oop l_6= 0;
static oop l_8= 0;
static oop l_9= 0;
static oop l_11= 0;
static oop l_12= 0;
static oop l_13= 0;
static oop l_14= 0;
static oop l_15= 0;
static oop l_16= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Character= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_nil= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_Set= 0;
static oop v_LookupKey= 0;
static oop v_Dictionary= 0;
static oop v_IdentityDictionary= 0;
static oop v_Stream= 0;
static oop v_PositionableStream= 0;
static oop v_GetOpt= 0;
static size_t GetOpt___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_GetOpt); }
static char *GetOpt___5fdebugName(oop _closure, oop v_self) { return "GetOpt"; }
static oop b_1(oop v__closure, oop v__self, oop v_arg)
 {
  oop _1= 0;
  _1= v_nil;
  return _1;
 }
static oop GetOpt__new(oop v__closure, oop v_stateful_self, oop v_self)
 {
  oop _1= 0;
  _1= v_self;
  _1=_super(v_IdentityDictionary, s_new, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= l_1;
  ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock= _1;
  _1= v_self;
  return _1;
 }
static oop GetOpt__default_(oop v__closure, oop v_stateful_self, oop v_self, oop v_unaryBlock)
 {
  oop _1= 0;
  _1= v_unaryBlock;
  ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock= _1;
  _1= v_self;
  return _1;
 }
static oop GetOpt__parse_(oop v__closure, oop v_stateful_self, oop v_self, oop v_argumentCollection)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _1= v_self;
  _2= v_argumentCollection;
  _3= l_2;
  _1=_send(s_parse_startingAt_, _1, _2, _3);
  return _1;
 }
static oop b_3(oop v__closure, oop v__self)
 {
  oop _1= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _1=_send(s_atEnd, _1);
  return _1;
 }
static oop b_4(oop v__closure, oop v__self)
 {
  oop v_arg= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  (void)v_arg;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _1=_send(s_next, _1);
  v_arg= _1;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* self */
  _2= v_arg;
  _3= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* args */
  _1=_send(s_parseArgument_with_, _1, _2, _3);
  return _1;
 }
static oop GetOpt__parse_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_argumentCollection, oop v_offset)
 {
  oop _state1= _send(s_new_5f_, v__vector, 7);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[3]= v_stateful_self;
  ((oop *)_state1)[2]= v_self;
  _1= v_argumentCollection;
  _1=_send(s_readStream, _1);
  _2= v_offset;
  _1=_send(s_skip_, _1, _2);
  ((oop *)_state1)[1]= _1;  /* args */
  /* Scope() */
  /* Scope('args'->TemporaryVariableNode 'tally'->SlotVariableNode 'argumentCollection'->ArgumentVariableNode 'array'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'defaultBlock'->SlotVariableNode 'offset'->ArgumentVariableNode 'self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _1= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_3, 0, 0, ((oop *)_state1), 0);
  /* Scope('arg'->TemporaryVariableNode) */
  /* Scope('args'->TemporaryVariableNode 'tally'->SlotVariableNode 'argumentCollection'->ArgumentVariableNode 'array'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'defaultBlock'->SlotVariableNode 'offset'->ArgumentVariableNode 'self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_4, 0, 0, ((oop *)_state1), 0);
  _1=_send(s_whileFalse_, _1, _2);
  _1= ((oop *)_state1)[2];  /* self */
  return _1;
 }
static oop GetOpt__parseArgument_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_arg, oop v_rest)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  /* ifTrue:ifFalse: */
  /* and: */
  _1= v_arg;
  _1=_send(s_first, _1);
  _2= l_5;
  if (1 & (int)_1 & (int)_2) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
  if (!_1) goto _l3;
 {
  _1= v_arg;
  _1=_send(s_size, _1);
  _2= l_6;
  if (1 & (int)_1) {
    _1= (((int)_1 > (int)_2) ? v_true : v_false);
  } else _1= _send(s__3e, _1, _2);
 }
 _l3:;
  if (!_1) goto _l1;
 {
  _1= v_self;
  _2= v_arg;
  _3= v_rest;
  _1=_send(s_parseOption_with_, _1, _2, _3);
 }
  goto _l2;
 _l1:;
 {
  _1= ((struct t_GetOpt *)v_stateful_self)->v_defaultBlock;
  _2= v_arg;
  _1=_send(s_value_, _1, _2);
 }
 _l2:;
  _1= v_self;
  return _1;
 }
static oop b_10(oop v__closure, oop v__self)
 {
  oop _1= 0;
  oop _2= 0;
  _1= ((struct t_GetOpt *)((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_outer)->v_state))[2])->v_defaultBlock;  /* defaultBlock */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_outer)->v_state))[3];  /* option */
  _1=_send(s_value_, _1, _2);
  return _nlreturn(((struct t_BlockClosure *)v__self)->v__nlr, _1);
 }
static oop b_7(oop v__closure, oop v__self)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* self */
  _2= l_9;
  /* Scope() */
  /* Scope() */
  /* Object */
  /* 3 */
  /* 2 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_10, 0, v__self, 0, ((struct t_BlockClosure *)v__self)->v__nlr);
  _1=_send(s_at_ifAbsent_, _1, _2, _3);
  return _1;
 }
static oop GetOpt__parseOption_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_option, oop v_rest)
 {
  oop _state1= _send(s_new_5f_, v__vector, 7);
  oop v_block= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  jmp_buf __nlr;
  oop _nlr;
  (void)v_block;
  ((oop *)_state1)[2]= v_stateful_self;
  ((oop *)_state1)[1]= v_self;
  ((oop *)_state1)[3]= v_option;
  _nlr= (oop)&__nlr;
  if (setjmp(__nlr)) { return _nlresult(); }
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _2=_send(s_second, _2);
  /* Scope() */
  /* Scope('option'->ArgumentVariableNode 'tally'->SlotVariableNode 'stateful_self'->ArgumentVariableNode 'array'->SlotVariableNode 'defaultBlock'->SlotVariableNode 'self'->ArgumentVariableNode 'block'->TemporaryVariableNode 'rest'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _3= _send(s_function_5f_arity_5f_outer_state_nlr_5f_, v_BlockClosure, (oop)b_7, 0, 0, ((oop *)_state1), _nlr);
  _1=_send(s_at_ifAbsent_, _1, _2, _3);
  v_block= _1;
  /* ifTrue:ifFalse: */
  _1= v_block;
  _1=_send(s_arity, _1);
  _2= l_8;
  if (1 & (int)_1) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
  if (!_1) goto _l4;
 {
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _3= v_block;
  _1=_send(s_applyOption_to_, _1, _2, _3);
 }
  goto _l5;
 _l4:;
 {
  _1= ((oop *)_state1)[1];  /* self */
  _2= ((oop *)_state1)[3];  /* option */
  _3= v_block;
  _4= v_rest;
  _1=_send(s_applyOption_to_with_, _1, _2, _3, _4);
 }
 _l5:;
  return _1;
 }
static oop GetOpt__applyOption_to_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anOption, oop v_unaryBlock)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  /* ifTrue:ifFalse: */
  _1= v_anOption;
  _1=_send(s_size, _1);
  _2= l_11;
  if (1 & (int)_1) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
  if (!_1) goto _l6;
 {
  _1= v_unaryBlock;
  _2= v_anOption;
  _2=_send(s_second, _2);
  _1=_send(s_value_, _1, _2);
 }
  goto _l7;
 _l6:;
 {
  _1= v_self;
  _2= l_12;
  _3= v_anOption;
  _2=_send(s__2c, _2, _3);
  _3= l_13;
  _2=_send(s__2c, _2, _3);
  _1=_send(s_error_, _1, _2);
 }
 _l7:;
  return _1;
 }
static oop GetOpt__applyOption_to_with_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anOption, oop v_binaryBlock, oop v_rest)
 {
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  /* ifTrue:ifFalse: */
  _1= v_anOption;
  _1=_send(s_size, _1);
  _2= l_14;
  if (1 & (int)_1) {
    _1= (((int)_1 == (int)_2) ? v_true : v_false);
  } else _1= _send(s__3d, _1, _2);
  if (!_1) goto _l8;
 {
  /* ifTrue:ifFalse: */
  _1= v_rest;
  _1=_send(s_atEnd, _1);
  if (!_1) goto _l10;
 {
  _1= v_self;
  _2= l_15;
  _3= v_anOption;
  _2=_send(s__2c, _2, _3);
  _1=_send(s_error_, _1, _2);
 }
  goto _l11;
 _l10:;
 {
  _1= v_binaryBlock;
  _2= v_anOption;
  _2=_send(s_second, _2);
  _3= v_rest;
  _3=_send(s_next, _3);
  _1=_send(s_value_value_, _1, _2, _3);
 }
 _l11:;
 }
  goto _l9;
 _l8:;
 {
  _1= v_binaryBlock;
  _2= v_anOption;
  _2=_send(s_second, _2);
  _3= v_anOption;
  _4= l_16;
  _3=_send(s_copyFrom_, _3, _4);
  _1=_send(s_value_value_, _1, _2, _3);
 }
 _l9:;
  return _1;
 }

void __id__init__GetOpt(void)
{
  if (_local_object) return;
  { 
    dlhandle_t global= dlopen(0, RTLD_LAZY);
    _local_object= *(oop *)dlsym(global, "_libid_object");
    _local_param= dlsym(global, "_libid_param");
    _local_intern= dlsym(global, "_libid_intern");
    _local_proto= dlsym(global, "_libid_proto");
    _local_import= dlsym(global, "_libid_import");
    _local_export= dlsym(global, "_libid_export");
    _local_method= dlsym(global, "_libid_method");
    _local_alloc= dlsym(global, "_libid_alloc");
    _local_palloc= dlsym(global, "_libid_palloc");
    _local_balloc= dlsym(global, "_libid_balloc");
    _local_bind= dlsym(global, "_libid_bind");
    _local_nlreturn= dlsym(global, "_libid_nlreturn");
    _local_nlresult= dlsym(global, "_libid_nlresult");
    _local_tag_vtable= dlsym(global, "_libid_tag_vtable");
    _local_nil_vtable= dlsym(global, "_libid_nil_vtable");
    _local_gc_addRoots= dlsym(global, "GC_add_roots");
    _local_gc_unregisterDisappearingLink= dlsym(global, "GC_unregister_disappearing_link");
    _local_gc_generalRegisterDisappearingLink= dlsym(global, "GC_general_register_disappearing_link");
    _local_gc_gcollect= dlsym(global, "GC_gcollect");
    dlclose(global);
  }
# define GC_add_roots _local_gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _selector(s->name);
  }

  _send(s__5fimport_, _local_object, "IdentityDictionary", "__id__init__IdentityDictionary");
  _send(s__5fimport_, _local_object, "Dictionary", "__id__init__Dictionary");
  _send(s__5fimport_, _local_object, "Set", "__id__init__Set");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v__vector= _id_import("_vector");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_BlockClosure= _id_import("BlockClosure");
  v_Magnitude= _id_import("Magnitude");
  v_Character= _id_import("Character");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_SmallInteger= _id_import("SmallInteger");
  v_LargePositiveInteger= _id_import("LargePositiveInteger");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_WordArray= _id_import("WordArray");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_ImmutableString= _id_import("ImmutableString");
  v_nil= _id_import("nil");
  v_true= _id_import("true");
  v_false= _id_import("false");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  v_Set= _id_import("Set");
  _send(s__5fimport_, _local_object, "Association", "__id__init__Association");
  _send(s__5fimport_, _local_object, "LookupKey", "__id__init__LookupKey");
  v_LookupKey= _id_import("LookupKey");
  _send(s__5fimport_, _local_object, "OrderedCollection", "__id__init__OrderedCollection");
  v_Dictionary= _id_import("Dictionary");
  _send(s__5fimport_, _local_object, "IdentitySet", "__id__init__IdentitySet");
  v_IdentityDictionary= _id_import("IdentityDictionary");
  _send(s__5fimport_, _local_object, "ReadStream", "__id__init__ReadStream");
  _send(s__5fimport_, _local_object, "PositionableStream", "__id__init__PositionableStream");
  _send(s__5fimport_, _local_object, "Stream", "__id__init__Stream");
  v_Stream= _id_import("Stream");
  v_PositionableStream= _id_import("PositionableStream");
  v_GetOpt= _proto(v_IdentityDictionary);
  _method(v_GetOpt, s__5fsizeof, GetOpt___5fsizeof);
  _method(v_GetOpt, s__5fdebugName, GetOpt___5fdebugName);
  _id_export("GetOpt", v_GetOpt);
  l_1= _send(s_function_5f_arity_5f_, v_StaticBlockClosure, b_1, 1);
  _method(v_GetOpt, s_new, GetOpt__new);
  _method(v_GetOpt, s_default_, GetOpt__default_);
  l_2= _send(s_value_5f_, v_SmallInteger, 0);
  _method(v_GetOpt, s_parse_, GetOpt__parse_);
  _method(v_GetOpt, s_parse_startingAt_, GetOpt__parse_startingAt_);
  l_5= _send(s_value_5f_, v_Character, 45);
  l_6= _send(s_value_5f_, v_SmallInteger, 1);
  _method(v_GetOpt, s_parseArgument_with_, GetOpt__parseArgument_with_);
  l_8= _send(s_value_5f_, v_SmallInteger, 1);
  l_9= _send(s_value_5f_, v_Character, 63);
  _method(v_GetOpt, s_parseOption_with_, GetOpt__parseOption_with_);
  l_11= _send(s_value_5f_, v_SmallInteger, 2);
  l_12= _send(s_size_5f_value_5f_, v_ImmutableString, 7, "option ");
  l_13= _send(s_size_5f_value_5f_, v_ImmutableString, 28, " should not have an argument");
  _method(v_GetOpt, s_applyOption_to_, GetOpt__applyOption_to_);
  l_14= _send(s_value_5f_, v_SmallInteger, 2);
  l_15= _send(s_size_5f_value_5f_, v_ImmutableString, 27, "argument missing to option ");
  l_16= _send(s_value_5f_, v_SmallInteger, 3);
  _method(v_GetOpt, s_applyOption_to_with_, GetOpt__applyOption_to_with_);
}