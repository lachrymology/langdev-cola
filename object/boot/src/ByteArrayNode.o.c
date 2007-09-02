/* generated by Id 1.0 at 2007-09-02 14:34:39 Z */
/* with the command: -I../stage1/ -I../st80 -c ByteArrayNode.st -o ../stage2/ByteArrayNode.o.c */

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
# include <winbase.h>
  typedef HINSTANCE dlhandle_t;
# define dlopen(path, mode)	LoadLibrary(path)
# define dlsym(handle, name)	((void *)GetProcAddress(handle, name))
# define dlclose(handle)	FreeLibrary(handle)
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
static void		 *(*_local_enter)(char *name, char *type, char *file)= 0;
static void		  (*_local_line)(int line)= 0;
static void		  (*_local_leave)(void *)= 0;
static char		 *(*_local_backtrace)(void)= 0;

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
#define _backtrace()		_local_backtrace()
#ifdef ID_DEBUG
# define _enter(NM, TYPE, FILE)	void *__id_debug= _local_enter(NM, TYPE, FILE)
# define _line(line)		_local_line(line)
# define _leave()		_local_leave(__id_debug)
#else
# define _enter(NM, TYPE, FILE)
# define _line(line)
# define _leave()
#endif
#define _return			_leave(); return

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

static oop s_function_5f_arity_5f_= 0;
static oop s_genInitialisation_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_asByteArray= 0;
static oop s_requireType_at_= 0;
static oop s__5fimport_= 0;
static oop s__5fdebugName= 0;
static oop s_encodeLiteral_= 0;
static oop s_collect_= 0;
static oop s_initialiseByteArray_constructor_with_= 0;
static oop s_println_= 0;
static oop s_printIndent_= 0;
static oop s_push= 0;
static oop s_print= 0;
static oop s_do_= 0;
static oop s_encode_= 0;
static oop s_value= 0;
static oop s__5fsizeof= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "function_:arity_:", &s_function_5f_arity_5f_ },
  { "genInitialisation:", &s_genInitialisation_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "asByteArray", &s_asByteArray },
  { "requireType:at:", &s_requireType_at_ },
  { "_import:", &s__5fimport_ },
  { "_debugName", &s__5fdebugName },
  { "encodeLiteral:", &s_encodeLiteral_ },
  { "collect:", &s_collect_ },
  { "initialiseByteArray:constructor:with:", &s_initialiseByteArray_constructor_with_ },
  { "println:", &s_println_ },
  { "printIndent:", &s_printIndent_ },
  { "push", &s_push },
  { "print", &s_print },
  { "do:", &s_do_ },
  { "encode:", &s_encode_ },
  { "value", &s_value },
  { "_sizeof", &s__5fsizeof },
  { "println", &s_println },
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
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
struct t_LiteralNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_ArrayLiteralNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
struct t_ByteArrayNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_value;
  oop v_tag;
  oop v_constructor;
};
static oop l_1= 0;
static oop l_2= 0;
static oop l_3= 0;
static oop l_5= 0;
static oop l_6= 0;
static oop l_4= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_ParseNode= 0;
static oop v_LiteralNode= 0;
static oop v_ArrayLiteralNode= 0;
static oop v_ByteArrayNode= 0;
static size_t ByteArrayNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_ByteArrayNode); }
static char *ByteArrayNode___5fdebugName(oop _closure, oop v_self) { return "ByteArrayNode"; }
static oop b_2(oop v__closure, oop v__self, oop v_byte)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/idc/ByteArrayNode.st");
  oop _1= 0;
  _line(27);
  _1= v_byte;
  _line(27);
  _1=_send(s_value, _1);
  _leave();
  return _1;
  _leave();
 }
static oop ByteArrayNode__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder)
 {
  _enter("encode:", "ByteArrayNode", "/home/piumarta/src/idst/object/idc/ByteArrayNode.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(24);
  _1= v_encoder;
  _2= l_1;
  _3= ((struct t_ByteArrayNode *)v_stateful_self)->v_position;
  _line(26);
  _1=_send(s_requireType_at_, _1, _2, _3);
  ((struct t_ByteArrayNode *)v_stateful_self)->v_constructor= _1;
  _1= ((struct t_ByteArrayNode *)v_stateful_self)->v_value;
  _2= l_2;
  _line(27);
  _1=_send(s_collect_, _1, _2);
  _line(27);
  _1=_send(s_asByteArray, _1);
  ((struct t_ByteArrayNode *)v_stateful_self)->v_value= _1;
  _1= v_encoder;
  _2= v_self;
  _line(28);
  _1=_send(s_encodeLiteral_, _1, _2);
  ((struct t_ByteArrayNode *)v_stateful_self)->v_tag= _1;
  _1= v_encoder;
  _line(29);
  _1=_send(s_push, _1);
  ((struct t_ByteArrayNode *)v_stateful_self)->v_location= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop ByteArrayNode__genInitialisation_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter("genInitialisation:", "ByteArrayNode", "/home/piumarta/src/idst/object/idc/ByteArrayNode.st");
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(32);
  _1= v_gen;
  _2= ((struct t_ByteArrayNode *)v_stateful_self)->v_tag;
  _3= ((struct t_ByteArrayNode *)v_stateful_self)->v_constructor;
  _4= ((struct t_ByteArrayNode *)v_stateful_self)->v_value;
  _line(34);
  _1=_send(s_initialiseByteArray_constructor_with_, _1, _2, _3, _4);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static oop b_4(oop v__closure, oop v__self, oop v_elt)
 {
  _enter("[]", "?", "/home/piumarta/src/idst/object/idc/ByteArrayNode.st");
  oop _1= 0;
  _line(41);
  _1= v_elt;
  _line(41);
  _1=_send(s_value, _1);
  _line(41);
  _1=_send(s_print, _1);
  _1= l_6;
  _line(41);
  _1=_send(s_print, _1);
  _leave();
  return _1;
  _leave();
 }
static oop ByteArrayNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter("println:", "ByteArrayNode", "/home/piumarta/src/idst/object/idc/ByteArrayNode.st");
  oop _1= 0;
  oop _2= 0;
  _line(37);
  _1= v_self;
  _2= v_indent;
  _line(39);
  _1=_send(s_printIndent_, _1, _2);
  _1= l_3;
  _line(40);
  _1=_send(s_print, _1);
  _1= ((struct t_ByteArrayNode *)v_stateful_self)->v_value;
  _2= l_4;
  _line(41);
  _1=_send(s_do_, _1, _2);
  _1= l_5;
  _line(42);
  _1=_send(s_println, _1);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

void __id__init__ByteArrayNode(void)
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
    _local_enter= dlsym(global, "_libid_enter");
    _local_line= dlsym(global, "_libid_line");
    _local_leave= dlsym(global, "_libid_leave");
    _local_backtrace= dlsym(global, "_libid_backtrace");
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
  _enter("__id__init__", "<initialisation>", "ByteArrayNode.st");

  _send(s__5fimport_, _local_object, "ArrayLiteralNode", "__id__init__ArrayLiteralNode");
  _send(s__5fimport_, _local_object, "LiteralNode", "__id__init__LiteralNode");
  _send(s__5fimport_, _local_object, "ParseNode", "__id__init__ParseNode");
  _send(s__5fimport_, _local_object, "Object", "__id__init__Object");
  _send(s__5fimport_, _local_object, "_object", "__id__init___5fobject");
  v__object= _id_import("_object");
  v_Object= _id_import("Object");
  v_UndefinedObject= _id_import("UndefinedObject");
  v_StaticBlockClosure= _id_import("StaticBlockClosure");
  v_Magnitude= _id_import("Magnitude");
  v_Number= _id_import("Number");
  v_Integer= _id_import("Integer");
  v_LargePositiveInteger= _id_import("LargePositiveInteger");
  v_Collection= _id_import("Collection");
  v_SequenceableCollection= _id_import("SequenceableCollection");
  v_ArrayedCollection= _id_import("ArrayedCollection");
  v_Array= _id_import("Array");
  v_WordArray= _id_import("WordArray");
  v_ByteArray= _id_import("ByteArray");
  v_String= _id_import("String");
  v_ImmutableString= _id_import("ImmutableString");
  _send(s__5fimport_, _local_object, "BlockClosure", "__id__init__BlockClosure");
  _send(s__5fimport_, _local_object, "SmallInteger", "__id__init__SmallInteger");
  _send(s__5fimport_, _local_object, "Integer", "__id__init__Integer");
  _send(s__5fimport_, _local_object, "Number", "__id__init__Number");
  _send(s__5fimport_, _local_object, "Magnitude", "__id__init__Magnitude");
  _send(s__5fimport_, _local_object, "Array", "__id__init__Array");
  _send(s__5fimport_, _local_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  _send(s__5fimport_, _local_object, "SequenceableCollection", "__id__init__SequenceableCollection");
  _send(s__5fimport_, _local_object, "Collection", "__id__init__Collection");
  _send(s__5fimport_, _local_object, "Character", "__id__init__Character");
  _send(s__5fimport_, _local_object, "String", "__id__init__String");
  _send(s__5fimport_, _local_object, "ByteArray", "__id__init__ByteArray");
  _send(s__5fimport_, _local_object, "WordArray", "__id__init__WordArray");
  v_ParseNode= _id_import("ParseNode");
  v_LiteralNode= _id_import("LiteralNode");
  v_ArrayLiteralNode= _id_import("ArrayLiteralNode");
  v_ByteArrayNode= _proto(v_ArrayLiteralNode);
  _method(v_ByteArrayNode, s__5fsizeof, ByteArrayNode___5fsizeof);
  _method(v_ByteArrayNode, s__5fdebugName, ByteArrayNode___5fdebugName);
  _id_export("ByteArrayNode", v_ByteArrayNode);
  l_1= _send(s_size_5f_value_5f_, v_ImmutableString, 9, "byteArray");
  l_2= _send(s_function_5f_arity_5f_, v_StaticBlockClosure, b_2, 1);
  _method(v_ByteArrayNode, s_encode_, ByteArrayNode__encode_);
  _method(v_ByteArrayNode, s_genInitialisation_, ByteArrayNode__genInitialisation_);
  l_3= _send(s_size_5f_value_5f_, v_ImmutableString, 3, "#[ ");
  l_5= _send(s_size_5f_value_5f_, v_ImmutableString, 1, "]");
  l_6= _send(s_size_5f_value_5f_, v_ImmutableString, 1, " ");
  l_4= _send(s_function_5f_arity_5f_, v_StaticBlockClosure, b_4, 1);
  _method(v_ByteArrayNode, s_println_, ByteArrayNode__println_);
  _leave();
}
