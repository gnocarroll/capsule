#pragma once

#include <memory>
#include <type_traits>
#include <variant>

namespace ast {

/// <summary>
/// for use with variants where all variants are instance of
/// superclass. Will get superclass pointer
/// </summary>
/// <typeparam name="T"></typeparam>
/// <typeparam name="V"></typeparam>
/// <param name="v"></param>
/// <returns></returns>
template <typename T, typename V>
T& get_base(V& v) {
    T* p;
    std::visit([&p](auto&& x) {
        using X = decltype(x);
        if constexpr (std::is_base_of_v<T, std::decay_t<X>>) {
            p = std::addressof(x);
        }
        else {
            throw std::bad_variant_access{};
        }
        }, std::forward<V>(v));
    return *p;
}

}