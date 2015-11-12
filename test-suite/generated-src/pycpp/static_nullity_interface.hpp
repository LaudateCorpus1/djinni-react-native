// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from interface_nullity.djinni

#pragma once

#include <experimental/optional>
#include <memory>

namespace testsuite {

class DummyInterface;

class StaticNullityInterface {
public:
    virtual ~StaticNullityInterface() {}

    static void non_null_parameters(const std::shared_ptr<DummyInterface> & p1, const std::shared_ptr<DummyInterface> & p2);

    static std::shared_ptr<DummyInterface> non_null_return(bool should_return_null);

    static void nullable_parameters(const std::shared_ptr<DummyInterface> & p1, const std::shared_ptr<DummyInterface> & p2);

    static std::shared_ptr<DummyInterface> nullable_return(bool should_return_null);
};

}  // namespace testsuite