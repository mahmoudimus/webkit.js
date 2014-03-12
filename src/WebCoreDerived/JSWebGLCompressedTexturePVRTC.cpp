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

#if ENABLE(WEBGL)

#include "JSWebGLCompressedTexturePVRTC.h"

#include "WebGLCompressedTexturePVRTC.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table for prototype */

static const HashTableValue JSWebGLCompressedTexturePVRTCPrototypeTableValues[] =
{
    { "COMPRESSED_RGB_PVRTC_4BPPV1_IMG", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLCompressedTexturePVRTCCOMPRESSED_RGB_PVRTC_4BPPV1_IMG), (intptr_t)0 },
    { "COMPRESSED_RGB_PVRTC_2BPPV1_IMG", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLCompressedTexturePVRTCCOMPRESSED_RGB_PVRTC_2BPPV1_IMG), (intptr_t)0 },
    { "COMPRESSED_RGBA_PVRTC_4BPPV1_IMG", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLCompressedTexturePVRTCCOMPRESSED_RGBA_PVRTC_4BPPV1_IMG), (intptr_t)0 },
    { "COMPRESSED_RGBA_PVRTC_2BPPV1_IMG", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebGLCompressedTexturePVRTCCOMPRESSED_RGBA_PVRTC_2BPPV1_IMG), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebGLCompressedTexturePVRTCPrototypeTable = { 9, 7, JSWebGLCompressedTexturePVRTCPrototypeTableValues, 0 };
const ClassInfo JSWebGLCompressedTexturePVRTCPrototype::s_info = { "WebGLCompressedTexturePVRTCPrototype", &Base::s_info, &JSWebGLCompressedTexturePVRTCPrototypeTable, 0, CREATE_METHOD_TABLE(JSWebGLCompressedTexturePVRTCPrototype) };

JSObject* JSWebGLCompressedTexturePVRTCPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebGLCompressedTexturePVRTC>(vm, globalObject);
}

bool JSWebGLCompressedTexturePVRTCPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebGLCompressedTexturePVRTCPrototype* thisObject = jsCast<JSWebGLCompressedTexturePVRTCPrototype*>(object);
    return getStaticValueSlot<JSWebGLCompressedTexturePVRTCPrototype, JSObject>(exec, JSWebGLCompressedTexturePVRTCPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSWebGLCompressedTexturePVRTC::s_info = { "WebGLCompressedTexturePVRTC", &Base::s_info, 0, 0 , CREATE_METHOD_TABLE(JSWebGLCompressedTexturePVRTC) };

JSWebGLCompressedTexturePVRTC::JSWebGLCompressedTexturePVRTC(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebGLCompressedTexturePVRTC> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSWebGLCompressedTexturePVRTC::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebGLCompressedTexturePVRTC::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebGLCompressedTexturePVRTCPrototype::create(vm, globalObject, JSWebGLCompressedTexturePVRTCPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSWebGLCompressedTexturePVRTC::destroy(JSC::JSCell* cell)
{
    JSWebGLCompressedTexturePVRTC* thisObject = static_cast<JSWebGLCompressedTexturePVRTC*>(cell);
    thisObject->JSWebGLCompressedTexturePVRTC::~JSWebGLCompressedTexturePVRTC();
}

JSWebGLCompressedTexturePVRTC::~JSWebGLCompressedTexturePVRTC()
{
    releaseImplIfNotNull();
}

// Constant getters

EncodedJSValue jsWebGLCompressedTexturePVRTCCOMPRESSED_RGB_PVRTC_4BPPV1_IMG(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x8C00)));
}

EncodedJSValue jsWebGLCompressedTexturePVRTCCOMPRESSED_RGB_PVRTC_2BPPV1_IMG(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x8C01)));
}

EncodedJSValue jsWebGLCompressedTexturePVRTCCOMPRESSED_RGBA_PVRTC_4BPPV1_IMG(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x8C02)));
}

EncodedJSValue jsWebGLCompressedTexturePVRTCCOMPRESSED_RGBA_PVRTC_2BPPV1_IMG(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x8C03)));
}

static inline bool isObservable(JSWebGLCompressedTexturePVRTC* jsWebGLCompressedTexturePVRTC)
{
    if (jsWebGLCompressedTexturePVRTC->hasCustomProperties())
        return true;
    return false;
}

bool JSWebGLCompressedTexturePVRTCOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSWebGLCompressedTexturePVRTC* jsWebGLCompressedTexturePVRTC = jsCast<JSWebGLCompressedTexturePVRTC*>(handle.get().asCell());
    if (!isObservable(jsWebGLCompressedTexturePVRTC))
        return false;
    WebGLRenderingContext* root = jsWebGLCompressedTexturePVRTC->impl().context();
    return visitor.containsOpaqueRoot(root);
}

void JSWebGLCompressedTexturePVRTCOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSWebGLCompressedTexturePVRTC* jsWebGLCompressedTexturePVRTC = jsCast<JSWebGLCompressedTexturePVRTC*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsWebGLCompressedTexturePVRTC->impl(), jsWebGLCompressedTexturePVRTC);
    jsWebGLCompressedTexturePVRTC->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7WebGLCompressedTexturePVRTC@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore27WebGLCompressedTexturePVRTCE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, WebGLCompressedTexturePVRTC* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSWebGLCompressedTexturePVRTC>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7WebGLCompressedTexturePVRTC@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore27WebGLCompressedTexturePVRTCE[2];
#if COMPILER(CLANG)
    // If this fails WebGLCompressedTexturePVRTC does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(WebGLCompressedTexturePVRTC), WebGLCompressedTexturePVRTC_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // WebGLCompressedTexturePVRTC has subclasses. If WebGLCompressedTexturePVRTC has subclasses that get passed
    // to toJS() we currently require WebGLCompressedTexturePVRTC you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<WebGLCompressedTexturePVRTC>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSWebGLCompressedTexturePVRTC>(exec, globalObject, impl);
}

WebGLCompressedTexturePVRTC* toWebGLCompressedTexturePVRTC(JSC::JSValue value)
{
    return value.inherits(JSWebGLCompressedTexturePVRTC::info()) ? &jsCast<JSWebGLCompressedTexturePVRTC*>(value)->impl() : 0;
}

}

#endif // ENABLE(WEBGL)