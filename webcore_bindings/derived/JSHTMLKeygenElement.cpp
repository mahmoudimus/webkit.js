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
#include "JSHTMLKeygenElement.h"

#include "ExceptionCode.h"
#include "HTMLFormElement.h"
#include "HTMLKeygenElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSHTMLFormElement.h"
#include "JSNodeList.h"
#include "JSValidityState.h"
#include "NameNodeList.h"
#include "NodeList.h"
#include "URL.h"
#include "ValidityState.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLKeygenElementTableValues[] =
{
    { "autofocus", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementAutofocus), (intptr_t)setJSHTMLKeygenElementAutofocus },
    { "challenge", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementChallenge), (intptr_t)setJSHTMLKeygenElementChallenge },
    { "disabled", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementDisabled), (intptr_t)setJSHTMLKeygenElementDisabled },
    { "form", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementForm), (intptr_t)0 },
    { "keytype", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementKeytype), (intptr_t)setJSHTMLKeygenElementKeytype },
    { "name", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementName), (intptr_t)setJSHTMLKeygenElementName },
    { "type", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementType), (intptr_t)0 },
    { "willValidate", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementWillValidate), (intptr_t)0 },
    { "validity", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementValidity), (intptr_t)0 },
    { "validationMessage", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementValidationMessage), (intptr_t)0 },
    { "labels", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementLabels), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLKeygenElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLKeygenElementTable = { 34, 31, JSHTMLKeygenElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLKeygenElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLKeygenElementConstructorTable = { 1, 0, JSHTMLKeygenElementConstructorTableValues, 0 };
const ClassInfo JSHTMLKeygenElementConstructor::s_info = { "HTMLKeygenElementConstructor", &Base::s_info, &JSHTMLKeygenElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLKeygenElementConstructor) };

JSHTMLKeygenElementConstructor::JSHTMLKeygenElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLKeygenElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLKeygenElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLKeygenElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLKeygenElementConstructor, JSDOMWrapper>(exec, JSHTMLKeygenElementConstructorTable, jsCast<JSHTMLKeygenElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLKeygenElementPrototypeTableValues[] =
{
    { "checkValidity", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLKeygenElementPrototypeFunctionCheckValidity), (intptr_t)0 },
    { "setCustomValidity", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLKeygenElementPrototypeFunctionSetCustomValidity), (intptr_t)1 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLKeygenElementPrototypeTable = { 4, 3, JSHTMLKeygenElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLKeygenElementPrototype::s_info = { "HTMLKeygenElementPrototype", &Base::s_info, &JSHTMLKeygenElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLKeygenElementPrototype) };

JSObject* JSHTMLKeygenElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLKeygenElement>(vm, globalObject);
}

bool JSHTMLKeygenElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLKeygenElementPrototype* thisObject = jsCast<JSHTMLKeygenElementPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSHTMLKeygenElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSHTMLKeygenElement::s_info = { "HTMLKeygenElement", &Base::s_info, &JSHTMLKeygenElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLKeygenElement) };

JSHTMLKeygenElement::JSHTMLKeygenElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLKeygenElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLKeygenElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLKeygenElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLKeygenElementPrototype::create(vm, globalObject, JSHTMLKeygenElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLKeygenElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLKeygenElement* thisObject = jsCast<JSHTMLKeygenElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLKeygenElement, Base>(exec, JSHTMLKeygenElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsHTMLKeygenElementAutofocus(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::autofocusAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementChallenge(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::challengeAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementDisabled(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::disabledAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementForm(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.form()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementKeytype(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::keytypeAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementType(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.type());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementWillValidate(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.willValidate());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementValidity(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.validity()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementValidationMessage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.validationMessage());
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementLabels(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLKeygenElement& impl = castedThis->impl();
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(impl.labels()));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLKeygenElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHTMLKeygenElement* domObject = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLKeygenElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSHTMLKeygenElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLKeygenElement* thisObject = jsCast<JSHTMLKeygenElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLKeygenElement, Base>(exec, propertyName, value, JSHTMLKeygenElementTable, thisObject, slot);
}

void setJSHTMLKeygenElementAutofocus(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLKeygenElement& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::autofocusAttr, nativeValue);
}


void setJSHTMLKeygenElementChallenge(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLKeygenElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::challengeAttr, nativeValue);
}


void setJSHTMLKeygenElementDisabled(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLKeygenElement& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::disabledAttr, nativeValue);
}


void setJSHTMLKeygenElementKeytype(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLKeygenElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::keytypeAttr, nativeValue);
}


void setJSHTMLKeygenElementName(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLKeygenElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


JSValue JSHTMLKeygenElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLKeygenElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionCheckValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLKeygenElement::info());
    HTMLKeygenElement& impl = castedThis->impl();

    JSC::JSValue result = jsBoolean(impl.checkValidity());
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsHTMLKeygenElementPrototypeFunctionSetCustomValidity(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHTMLKeygenElement* castedThis = jsDynamicCast<JSHTMLKeygenElement*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLKeygenElement::info());
    HTMLKeygenElement& impl = castedThis->impl();
    if (exec->argumentCount() < 1)
        return throwVMError(exec, createNotEnoughArgumentsError(exec));
    const String& error(valueToStringWithUndefinedOrNullCheck(exec, exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.setCustomValidity(error);
    return JSValue::encode(jsUndefined());
}


}