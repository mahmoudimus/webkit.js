/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSCanvasGradient.h"

#include "CanvasGradient.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCanvasGradientTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCanvasGradientConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCanvasGradientTable = { 2, 1, JSCanvasGradientTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCanvasGradientConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCanvasGradientConstructorTable = { 1, 0, JSCanvasGradientConstructorTableValues, 0 };
const ClassInfo JSCanvasGradientConstructor::s_info = { "CanvasGradientConstructor", &Base::s_info, &JSCanvasGradientConstructorTable, 0, CREATE_METHOD_TABLE(JSCanvasGradientConstructor) };

JSCanvasGradientConstructor::JSCanvasGradientConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCanvasGradientConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCanvasGradientPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCanvasGradientConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCanvasGradientConstructor, JSDOMWrapper>(exec, JSCanvasGradientConstructorTable, jsCast<JSCanvasGradientConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSCanvasGradientPrototypeTableValues[] =
{
    { "addColorStop", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCanvasGradientPrototypeFunctionAddColorStop), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCanvasGradientPrototypeTable = { 2, 1, JSCanvasGradientPrototypeTableValues, 0 };
const ClassInfo JSCanvasGradientPrototype::s_info = { "CanvasGradientPrototype", &Base::s_info, &JSCanvasGradientPrototypeTable, 0, CREATE_METHOD_TABLE(JSCanvasGradientPrototype) };

JSObject* JSCanvasGradientPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCanvasGradient>(vm, globalObject);
}

bool JSCanvasGradientPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCanvasGradientPrototype* thisObject = jsCast<JSCanvasGradientPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSCanvasGradientPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSCanvasGradient::s_info = { "CanvasGradient", &Base::s_info, &JSCanvasGradientTable, 0 , CREATE_METHOD_TABLE(JSCanvasGradient) };

JSCanvasGradient::JSCanvasGradient(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CanvasGradient> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSCanvasGradient::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSCanvasGradient::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCanvasGradientPrototype::create(vm, globalObject, JSCanvasGradientPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSCanvasGradient::destroy(JSC::JSCell* cell)
{
    JSCanvasGradient* thisObject = static_cast<JSCanvasGradient*>(cell);
    thisObject->JSCanvasGradient::~JSCanvasGradient();
}

JSCanvasGradient::~JSCanvasGradient()
{
    releaseImplIfNotNull();
}

bool JSCanvasGradient::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCanvasGradient* thisObject = jsCast<JSCanvasGradient*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSCanvasGradient, Base>(exec, JSCanvasGradientTable, thisObject, propertyName, slot);
}

EncodedJSValue jsCanvasGradientConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSCanvasGradient* domObject = jsDynamicCast<JSCanvasGradient*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSCanvasGradient::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSCanvasGradient::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCanvasGradientConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCanvasGradientPrototypeFunctionAddColorStop(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSCanvasGradient* castedThis = jsDynamicCast<JSCanvasGradient*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCanvasGradient::info());
    CanvasGradient& impl = castedThis->impl();
    ExceptionCode ec = 0;
    float offset(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& color(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.addColorStop(offset, color, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

bool JSCanvasGradientOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSCanvasGradientOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSCanvasGradient* jsCanvasGradient = jsCast<JSCanvasGradient*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsCanvasGradient->impl(), jsCanvasGradient);
    jsCanvasGradient->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, CanvasGradient* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSCanvasGradient>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to CanvasGradient.
    COMPILE_ASSERT(!__is_polymorphic(CanvasGradient), CanvasGradient_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<CanvasGradient>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSCanvasGradient>(exec, globalObject, impl);
}

CanvasGradient* toCanvasGradient(JSC::JSValue value)
{
    return value.inherits(JSCanvasGradient::info()) ? &jsCast<JSCanvasGradient*>(value)->impl() : 0;
}

}
