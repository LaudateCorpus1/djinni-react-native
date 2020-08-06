// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#pragma once

#include "JavascriptMap.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeJavascriptMap final : ::djinni::JniInterface<::JavascriptMap, NativeJavascriptMap> {
public:
    using CppType = std::shared_ptr<::JavascriptMap>;
    using CppOptType = std::shared_ptr<::JavascriptMap>;
    using JniType = jobject;

    using Boxed = NativeJavascriptMap;

    ~NativeJavascriptMap();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeJavascriptMap>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeJavascriptMap>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeJavascriptMap();
    friend ::djinni::JniClass<NativeJavascriptMap>;
    friend ::djinni::JniInterface<::JavascriptMap, NativeJavascriptMap>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::JavascriptMap
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        bool hasKey(const std::string & name) override;
        bool isNull(const std::string & name) override;
        bool getBoolean(const std::string & name) override;
        double getDouble(const std::string & name) override;
        int32_t getInt(const std::string & name) override;
        std::string getString(const std::string & name) override;
        std::shared_ptr<::JavascriptArray> getArray(const std::string & name) override;
        std::shared_ptr<::JavascriptMap> getMap(const std::string & name) override;
        std::shared_ptr<::JavascriptObject> getObject(const std::string & name) override;
        ::JavascriptType getType(const std::string & name) override;
        std::shared_ptr<::JavascriptMapKeyIterator> keySetIterator() override;
        void putNull(const std::string & key) override;
        void putBoolean(const std::string & key, bool value) override;
        void putDouble(const std::string & key, double value) override;
        void putInt(const std::string & key, int32_t value) override;
        void putString(const std::string & key, const std::string & value) override;
        void putArray(const std::string & key, const std::shared_ptr<::JavascriptArray> & value) override;
        void putMap(const std::string & key, const std::shared_ptr<::JavascriptMap> & value) override;
        void putObject(const std::string & key, const std::shared_ptr<::JavascriptObject> & value) override;
        void merge(const std::shared_ptr<::JavascriptMap> & source) override;

    private:
        friend ::djinni::JniInterface<::JavascriptMap, ::djinni_generated::NativeJavascriptMap>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/rushingvise/reactcpp/JavascriptMap") };
    const jmethodID method_hasKey { ::djinni::jniGetMethodID(clazz.get(), "hasKey", "(Ljava/lang/String;)Z") };
    const jmethodID method_isNull { ::djinni::jniGetMethodID(clazz.get(), "isNull", "(Ljava/lang/String;)Z") };
    const jmethodID method_getBoolean { ::djinni::jniGetMethodID(clazz.get(), "getBoolean", "(Ljava/lang/String;)Z") };
    const jmethodID method_getDouble { ::djinni::jniGetMethodID(clazz.get(), "getDouble", "(Ljava/lang/String;)D") };
    const jmethodID method_getInt { ::djinni::jniGetMethodID(clazz.get(), "getInt", "(Ljava/lang/String;)I") };
    const jmethodID method_getString { ::djinni::jniGetMethodID(clazz.get(), "getString", "(Ljava/lang/String;)Ljava/lang/String;") };
    const jmethodID method_getArray { ::djinni::jniGetMethodID(clazz.get(), "getArray", "(Ljava/lang/String;)Lcom/rushingvise/reactcpp/JavascriptArray;") };
    const jmethodID method_getMap { ::djinni::jniGetMethodID(clazz.get(), "getMap", "(Ljava/lang/String;)Lcom/rushingvise/reactcpp/JavascriptMap;") };
    const jmethodID method_getObject { ::djinni::jniGetMethodID(clazz.get(), "getObject", "(Ljava/lang/String;)Lcom/rushingvise/reactcpp/JavascriptObject;") };
    const jmethodID method_getType { ::djinni::jniGetMethodID(clazz.get(), "getType", "(Ljava/lang/String;)Lcom/rushingvise/reactcpp/JavascriptType;") };
    const jmethodID method_keySetIterator { ::djinni::jniGetMethodID(clazz.get(), "keySetIterator", "()Lcom/rushingvise/reactcpp/JavascriptMapKeyIterator;") };
    const jmethodID method_putNull { ::djinni::jniGetMethodID(clazz.get(), "putNull", "(Ljava/lang/String;)V") };
    const jmethodID method_putBoolean { ::djinni::jniGetMethodID(clazz.get(), "putBoolean", "(Ljava/lang/String;Z)V") };
    const jmethodID method_putDouble { ::djinni::jniGetMethodID(clazz.get(), "putDouble", "(Ljava/lang/String;D)V") };
    const jmethodID method_putInt { ::djinni::jniGetMethodID(clazz.get(), "putInt", "(Ljava/lang/String;I)V") };
    const jmethodID method_putString { ::djinni::jniGetMethodID(clazz.get(), "putString", "(Ljava/lang/String;Ljava/lang/String;)V") };
    const jmethodID method_putArray { ::djinni::jniGetMethodID(clazz.get(), "putArray", "(Ljava/lang/String;Lcom/rushingvise/reactcpp/JavascriptArray;)V") };
    const jmethodID method_putMap { ::djinni::jniGetMethodID(clazz.get(), "putMap", "(Ljava/lang/String;Lcom/rushingvise/reactcpp/JavascriptMap;)V") };
    const jmethodID method_putObject { ::djinni::jniGetMethodID(clazz.get(), "putObject", "(Ljava/lang/String;Lcom/rushingvise/reactcpp/JavascriptObject;)V") };
    const jmethodID method_merge { ::djinni::jniGetMethodID(clazz.get(), "merge", "(Lcom/rushingvise/reactcpp/JavascriptMap;)V") };
};

}  // namespace djinni_generated