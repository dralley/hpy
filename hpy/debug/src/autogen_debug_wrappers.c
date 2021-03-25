
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.debug.autogen_debug_wrappers
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/

#include "debug_internal.h"

DHPy debug_ctx_Module_Create(HPyContext *dctx, HPyModuleDef *def)
{
    return DHPy_wrap(dctx, HPyModule_Create(get_info(dctx)->uctx, def));
}

DHPy debug_ctx_ModuleDef_Init(HPyContext *dctx, HPyModuleDef *def)
{
    return DHPy_wrap(dctx, HPyModuleDef_Init(get_info(dctx)->uctx, def));
}

DHPy debug_ctx_Dup(HPyContext *dctx, DHPy h)
{
    return DHPy_wrap(dctx, HPy_Dup(get_info(dctx)->uctx, DHPy_unwrap(dctx, h)));
}

DHPy debug_ctx_Long_FromLong(HPyContext *dctx, long value)
{
    return DHPy_wrap(dctx, HPyLong_FromLong(get_info(dctx)->uctx, value));
}

DHPy debug_ctx_Long_FromUnsignedLong(HPyContext *dctx, unsigned long value)
{
    return DHPy_wrap(dctx, HPyLong_FromUnsignedLong(get_info(dctx)->uctx, value));
}

DHPy debug_ctx_Long_FromLongLong(HPyContext *dctx, long long v)
{
    return DHPy_wrap(dctx, HPyLong_FromLongLong(get_info(dctx)->uctx, v));
}

DHPy debug_ctx_Long_FromUnsignedLongLong(HPyContext *dctx, unsigned long long v)
{
    return DHPy_wrap(dctx, HPyLong_FromUnsignedLongLong(get_info(dctx)->uctx, v));
}

DHPy debug_ctx_Long_FromSize_t(HPyContext *dctx, size_t value)
{
    return DHPy_wrap(dctx, HPyLong_FromSize_t(get_info(dctx)->uctx, value));
}

DHPy debug_ctx_Long_FromSsize_t(HPyContext *dctx, HPy_ssize_t value)
{
    return DHPy_wrap(dctx, HPyLong_FromSsize_t(get_info(dctx)->uctx, value));
}

long debug_ctx_Long_AsLong(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsLong(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

unsigned long debug_ctx_Long_AsUnsignedLong(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsUnsignedLong(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

unsigned long debug_ctx_Long_AsUnsignedLongMask(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsUnsignedLongMask(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

long long debug_ctx_Long_AsLongLong(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsLongLong(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

unsigned long long debug_ctx_Long_AsUnsignedLongLong(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsUnsignedLongLong(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

unsigned long long debug_ctx_Long_AsUnsignedLongLongMask(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsUnsignedLongLongMask(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

size_t debug_ctx_Long_AsSize_t(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsSize_t(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

HPy_ssize_t debug_ctx_Long_AsSsize_t(HPyContext *dctx, DHPy h)
{
    return HPyLong_AsSsize_t(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Float_FromDouble(HPyContext *dctx, double v)
{
    return DHPy_wrap(dctx, HPyFloat_FromDouble(get_info(dctx)->uctx, v));
}

double debug_ctx_Float_AsDouble(HPyContext *dctx, DHPy h)
{
    return HPyFloat_AsDouble(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Bool_FromLong(HPyContext *dctx, long v)
{
    return DHPy_wrap(dctx, HPyBool_FromLong(get_info(dctx)->uctx, v));
}

HPy_ssize_t debug_ctx_Length(HPyContext *dctx, DHPy h)
{
    return HPy_Length(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

int debug_ctx_Number_Check(HPyContext *dctx, DHPy h)
{
    return HPyNumber_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Add(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Add(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Subtract(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Subtract(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Multiply(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Multiply(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_MatrixMultiply(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_MatrixMultiply(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_FloorDivide(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_FloorDivide(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_TrueDivide(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_TrueDivide(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Remainder(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Remainder(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Divmod(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Divmod(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Power(HPyContext *dctx, DHPy h1, DHPy h2, DHPy h3)
{
    return DHPy_wrap(dctx, HPy_Power(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2), DHPy_unwrap(dctx, h3)));
}

DHPy debug_ctx_Negative(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Negative(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Positive(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Positive(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Absolute(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Absolute(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Invert(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Invert(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Lshift(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Lshift(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Rshift(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Rshift(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_And(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_And(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Xor(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Xor(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Or(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_Or(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_Index(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Index(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Long(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Long(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_Float(HPyContext *dctx, DHPy h1)
{
    return DHPy_wrap(dctx, HPy_Float(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1)));
}

DHPy debug_ctx_InPlaceAdd(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceAdd(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceSubtract(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceSubtract(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceMultiply(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceMultiply(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceMatrixMultiply(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceMatrixMultiply(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceFloorDivide(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceFloorDivide(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceTrueDivide(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceTrueDivide(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceRemainder(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceRemainder(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlacePower(HPyContext *dctx, DHPy h1, DHPy h2, DHPy h3)
{
    return DHPy_wrap(dctx, HPy_InPlacePower(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2), DHPy_unwrap(dctx, h3)));
}

DHPy debug_ctx_InPlaceLshift(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceLshift(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceRshift(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceRshift(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceAnd(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceAnd(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceXor(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceXor(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

DHPy debug_ctx_InPlaceOr(HPyContext *dctx, DHPy h1, DHPy h2)
{
    return DHPy_wrap(dctx, HPy_InPlaceOr(get_info(dctx)->uctx, DHPy_unwrap(dctx, h1), DHPy_unwrap(dctx, h2)));
}

int debug_ctx_Callable_Check(HPyContext *dctx, DHPy h)
{
    return HPyCallable_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_CallTupleDict(HPyContext *dctx, DHPy callable, DHPy args, DHPy kw)
{
    return DHPy_wrap(dctx, HPy_CallTupleDict(get_info(dctx)->uctx, DHPy_unwrap(dctx, callable), DHPy_unwrap(dctx, args), DHPy_unwrap(dctx, kw)));
}

void debug_ctx_FatalError(HPyContext *dctx, const char *message)
{
    HPy_FatalError(get_info(dctx)->uctx, message);
}

void debug_ctx_Err_SetString(HPyContext *dctx, DHPy h_type, const char *message)
{
    HPyErr_SetString(get_info(dctx)->uctx, DHPy_unwrap(dctx, h_type), message);
}

void debug_ctx_Err_SetObject(HPyContext *dctx, DHPy h_type, DHPy h_value)
{
    HPyErr_SetObject(get_info(dctx)->uctx, DHPy_unwrap(dctx, h_type), DHPy_unwrap(dctx, h_value));
}

int debug_ctx_Err_Occurred(HPyContext *dctx)
{
    return HPyErr_Occurred(get_info(dctx)->uctx);
}

DHPy debug_ctx_Err_NoMemory(HPyContext *dctx)
{
    return DHPy_wrap(dctx, HPyErr_NoMemory(get_info(dctx)->uctx));
}

void debug_ctx_Err_Clear(HPyContext *dctx)
{
    HPyErr_Clear(get_info(dctx)->uctx);
}

DHPy debug_ctx_Err_NewException(HPyContext *dctx, const char *name, DHPy base, DHPy dict)
{
    return DHPy_wrap(dctx, HPyErr_NewException(get_info(dctx)->uctx, name, DHPy_unwrap(dctx, base), DHPy_unwrap(dctx, dict)));
}

DHPy debug_ctx_Err_NewExceptionWithDoc(HPyContext *dctx, const char *name, const char *doc, DHPy base, DHPy dict)
{
    return DHPy_wrap(dctx, HPyErr_NewExceptionWithDoc(get_info(dctx)->uctx, name, doc, DHPy_unwrap(dctx, base), DHPy_unwrap(dctx, dict)));
}

int debug_ctx_IsTrue(HPyContext *dctx, DHPy h)
{
    return HPy_IsTrue(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_GetAttr(HPyContext *dctx, DHPy obj, DHPy name)
{
    return DHPy_wrap(dctx, HPy_GetAttr(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, name)));
}

DHPy debug_ctx_GetAttr_s(HPyContext *dctx, DHPy obj, const char *name)
{
    return DHPy_wrap(dctx, HPy_GetAttr_s(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), name));
}

int debug_ctx_HasAttr(HPyContext *dctx, DHPy obj, DHPy name)
{
    return HPy_HasAttr(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, name));
}

int debug_ctx_HasAttr_s(HPyContext *dctx, DHPy obj, const char *name)
{
    return HPy_HasAttr_s(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), name);
}

int debug_ctx_SetAttr(HPyContext *dctx, DHPy obj, DHPy name, DHPy value)
{
    return HPy_SetAttr(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, name), DHPy_unwrap(dctx, value));
}

int debug_ctx_SetAttr_s(HPyContext *dctx, DHPy obj, const char *name, DHPy value)
{
    return HPy_SetAttr_s(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), name, DHPy_unwrap(dctx, value));
}

DHPy debug_ctx_GetItem(HPyContext *dctx, DHPy obj, DHPy key)
{
    return DHPy_wrap(dctx, HPy_GetItem(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, key)));
}

DHPy debug_ctx_GetItem_i(HPyContext *dctx, DHPy obj, HPy_ssize_t idx)
{
    return DHPy_wrap(dctx, HPy_GetItem_i(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), idx));
}

DHPy debug_ctx_GetItem_s(HPyContext *dctx, DHPy obj, const char *key)
{
    return DHPy_wrap(dctx, HPy_GetItem_s(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), key));
}

int debug_ctx_SetItem(HPyContext *dctx, DHPy obj, DHPy key, DHPy value)
{
    return HPy_SetItem(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, key), DHPy_unwrap(dctx, value));
}

int debug_ctx_SetItem_i(HPyContext *dctx, DHPy obj, HPy_ssize_t idx, DHPy value)
{
    return HPy_SetItem_i(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), idx, DHPy_unwrap(dctx, value));
}

int debug_ctx_SetItem_s(HPyContext *dctx, DHPy obj, const char *key, DHPy value)
{
    return HPy_SetItem_s(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), key, DHPy_unwrap(dctx, value));
}

DHPy debug_ctx_Type(HPyContext *dctx, DHPy obj)
{
    return DHPy_wrap(dctx, HPy_Type(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj)));
}

int debug_ctx_TypeCheck(HPyContext *dctx, DHPy obj, DHPy type)
{
    return HPy_TypeCheck(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj), DHPy_unwrap(dctx, type));
}

void *debug_ctx_AsStruct(HPyContext *dctx, DHPy h)
{
    return HPy_AsStruct(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

void *debug_ctx_AsStructLegacy(HPyContext *dctx, DHPy h)
{
    return HPy_AsStructLegacy(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_New(HPyContext *dctx, DHPy h_type, void **data)
{
    return DHPy_wrap(dctx, _HPy_New(get_info(dctx)->uctx, DHPy_unwrap(dctx, h_type), data));
}

DHPy debug_ctx_Repr(HPyContext *dctx, DHPy obj)
{
    return DHPy_wrap(dctx, HPy_Repr(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj)));
}

DHPy debug_ctx_Str(HPyContext *dctx, DHPy obj)
{
    return DHPy_wrap(dctx, HPy_Str(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj)));
}

DHPy debug_ctx_ASCII(HPyContext *dctx, DHPy obj)
{
    return DHPy_wrap(dctx, HPy_ASCII(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj)));
}

DHPy debug_ctx_Bytes(HPyContext *dctx, DHPy obj)
{
    return DHPy_wrap(dctx, HPy_Bytes(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj)));
}

DHPy debug_ctx_RichCompare(HPyContext *dctx, DHPy v, DHPy w, int op)
{
    return DHPy_wrap(dctx, HPy_RichCompare(get_info(dctx)->uctx, DHPy_unwrap(dctx, v), DHPy_unwrap(dctx, w), op));
}

int debug_ctx_RichCompareBool(HPyContext *dctx, DHPy v, DHPy w, int op)
{
    return HPy_RichCompareBool(get_info(dctx)->uctx, DHPy_unwrap(dctx, v), DHPy_unwrap(dctx, w), op);
}

HPy_hash_t debug_ctx_Hash(HPyContext *dctx, DHPy obj)
{
    return HPy_Hash(get_info(dctx)->uctx, DHPy_unwrap(dctx, obj));
}

int debug_ctx_Bytes_Check(HPyContext *dctx, DHPy h)
{
    return HPyBytes_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

HPy_ssize_t debug_ctx_Bytes_Size(HPyContext *dctx, DHPy h)
{
    return HPyBytes_Size(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

HPy_ssize_t debug_ctx_Bytes_GET_SIZE(HPyContext *dctx, DHPy h)
{
    return HPyBytes_GET_SIZE(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

char *debug_ctx_Bytes_AsString(HPyContext *dctx, DHPy h)
{
    return HPyBytes_AsString(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

char *debug_ctx_Bytes_AS_STRING(HPyContext *dctx, DHPy h)
{
    return HPyBytes_AS_STRING(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Bytes_FromString(HPyContext *dctx, const char *v)
{
    return DHPy_wrap(dctx, HPyBytes_FromString(get_info(dctx)->uctx, v));
}

DHPy debug_ctx_Bytes_FromStringAndSize(HPyContext *dctx, const char *v, HPy_ssize_t len)
{
    return DHPy_wrap(dctx, HPyBytes_FromStringAndSize(get_info(dctx)->uctx, v, len));
}

DHPy debug_ctx_Unicode_FromString(HPyContext *dctx, const char *utf8)
{
    return DHPy_wrap(dctx, HPyUnicode_FromString(get_info(dctx)->uctx, utf8));
}

int debug_ctx_Unicode_Check(HPyContext *dctx, DHPy h)
{
    return HPyUnicode_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Unicode_AsUTF8String(HPyContext *dctx, DHPy h)
{
    return DHPy_wrap(dctx, HPyUnicode_AsUTF8String(get_info(dctx)->uctx, DHPy_unwrap(dctx, h)));
}

DHPy debug_ctx_Unicode_FromWideChar(HPyContext *dctx, const wchar_t *w, HPy_ssize_t size)
{
    return DHPy_wrap(dctx, HPyUnicode_FromWideChar(get_info(dctx)->uctx, w, size));
}

int debug_ctx_List_Check(HPyContext *dctx, DHPy h)
{
    return HPyList_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_List_New(HPyContext *dctx, HPy_ssize_t len)
{
    return DHPy_wrap(dctx, HPyList_New(get_info(dctx)->uctx, len));
}

int debug_ctx_List_Append(HPyContext *dctx, DHPy h_list, DHPy h_item)
{
    return HPyList_Append(get_info(dctx)->uctx, DHPy_unwrap(dctx, h_list), DHPy_unwrap(dctx, h_item));
}

int debug_ctx_Dict_Check(HPyContext *dctx, DHPy h)
{
    return HPyDict_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Dict_New(HPyContext *dctx)
{
    return DHPy_wrap(dctx, HPyDict_New(get_info(dctx)->uctx));
}

int debug_ctx_Tuple_Check(HPyContext *dctx, DHPy h)
{
    return HPyTuple_Check(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

DHPy debug_ctx_Import_ImportModule(HPyContext *dctx, const char *name)
{
    return DHPy_wrap(dctx, HPyImport_ImportModule(get_info(dctx)->uctx, name));
}

DHPy debug_ctx_FromPyObject(HPyContext *dctx, cpy_PyObject *obj)
{
    return DHPy_wrap(dctx, HPy_FromPyObject(get_info(dctx)->uctx, obj));
}

cpy_PyObject *debug_ctx_AsPyObject(HPyContext *dctx, DHPy h)
{
    return HPy_AsPyObject(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

void debug_ctx_CallDestroyAndThenDealloc(HPyContext *dctx, void *func, cpy_PyObject *self)
{
    _HPy_CallDestroyAndThenDealloc(get_info(dctx)->uctx, func, self);
}

HPyListBuilder debug_ctx_ListBuilder_New(HPyContext *dctx, HPy_ssize_t initial_size)
{
    return HPyListBuilder_New(get_info(dctx)->uctx, initial_size);
}

void debug_ctx_ListBuilder_Set(HPyContext *dctx, HPyListBuilder builder, HPy_ssize_t index, DHPy h_item)
{
    HPyListBuilder_Set(get_info(dctx)->uctx, builder, index, DHPy_unwrap(dctx, h_item));
}

DHPy debug_ctx_ListBuilder_Build(HPyContext *dctx, HPyListBuilder builder)
{
    return DHPy_wrap(dctx, HPyListBuilder_Build(get_info(dctx)->uctx, builder));
}

void debug_ctx_ListBuilder_Cancel(HPyContext *dctx, HPyListBuilder builder)
{
    HPyListBuilder_Cancel(get_info(dctx)->uctx, builder);
}

HPyTupleBuilder debug_ctx_TupleBuilder_New(HPyContext *dctx, HPy_ssize_t initial_size)
{
    return HPyTupleBuilder_New(get_info(dctx)->uctx, initial_size);
}

void debug_ctx_TupleBuilder_Set(HPyContext *dctx, HPyTupleBuilder builder, HPy_ssize_t index, DHPy h_item)
{
    HPyTupleBuilder_Set(get_info(dctx)->uctx, builder, index, DHPy_unwrap(dctx, h_item));
}

DHPy debug_ctx_TupleBuilder_Build(HPyContext *dctx, HPyTupleBuilder builder)
{
    return DHPy_wrap(dctx, HPyTupleBuilder_Build(get_info(dctx)->uctx, builder));
}

void debug_ctx_TupleBuilder_Cancel(HPyContext *dctx, HPyTupleBuilder builder)
{
    HPyTupleBuilder_Cancel(get_info(dctx)->uctx, builder);
}

void debug_ctx_Dump(HPyContext *dctx, DHPy h)
{
    _HPy_Dump(get_info(dctx)->uctx, DHPy_unwrap(dctx, h));
}

